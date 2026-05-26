package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewMainWindowCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QMainWindow",
		"Menu bar, toolbar, status bar, dock widget, central widget",
		func() { ShowMainWindowDemo(app) })
}

func ShowMainWindowDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QMainWindow - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		mainWindow := app.QMainWindowNew(nil)
		app.QWidgetResize((*qt6.QWidget)(unsafe.Pointer(mainWindow)), 800, 500)
		app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(mainWindow)), MiqtStr("QMainWindow Demo"))

		menuBar := app.QMainWindowMenuBar(mainWindow)
		fileMenu := app.QMenuBarAddMenuWithTitle(menuBar, MiqtStr("&File"))
		newAction := app.QActionNew2(MiqtStr("&New"))
		openAction := app.QActionNew2(MiqtStr("&Open"))
		exitAction := app.QActionNew2(MiqtStr("E&xit"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(fileMenu)), (*qt6.QAction)(unsafe.Pointer(newAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(fileMenu)), (*qt6.QAction)(unsafe.Pointer(openAction)))
		app.QMenuAddSeparator(fileMenu)
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(fileMenu)), (*qt6.QAction)(unsafe.Pointer(exitAction)))

		editMenu := app.QMenuBarAddMenuWithTitle(menuBar, MiqtStr("&Edit"))
		cutAction := app.QActionNew2(MiqtStr("Cu&t"))
		copyAction := app.QActionNew2(MiqtStr("&Copy"))
		pasteAction := app.QActionNew2(MiqtStr("&Paste"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(editMenu)), (*qt6.QAction)(unsafe.Pointer(cutAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(editMenu)), (*qt6.QAction)(unsafe.Pointer(copyAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(editMenu)), (*qt6.QAction)(unsafe.Pointer(pasteAction)))

		toolbar := app.QMainWindowAddToolBarWithTitle(mainWindow, MiqtStr("Main Toolbar"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(newAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(openAction)))
		app.QToolBarAddSeparator(toolbar)
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(cutAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(copyAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(pasteAction)))

		statusBar := app.QMainWindowStatusBar(mainWindow)
		app.QStatusBarShowMessage2(statusBar, MiqtStr("Ready"), 0)

		centralWidget := app.QTextEditNew3(MiqtStr("QMainWindow Demo\n\nThis is the central widget.\nYou can use the menu bar, toolbar, and status bar."))
		app.QMainWindowSetCentralWidget(mainWindow, (*qt6.QWidget)(unsafe.Pointer(centralWidget)))

		dock := app.QDockWidgetNew2(MiqtStr("Document View"))
		app.QDockWidgetSetFeatures(dock, 0x0007)
		dockContent := app.QListWidgetNew(nil)
		app.QListWidgetAddItem(dockContent, MiqtStr("Document 1"))
		app.QListWidgetAddItem(dockContent, MiqtStr("Document 2"))
		app.QListWidgetAddItem(dockContent, MiqtStr("Document 3"))
		app.QDockWidgetSetWidget(dock, (*qt6.QWidget)(unsafe.Pointer(dockContent)))
		app.QMainWindowAddDockWidget(mainWindow, 1, dock)

		triggerLabel := app.QLabelNew3(MiqtStr("Action triggered: -"))
		triggerCb := windows.NewCallback(func(action uintptr) uintptr {
			a := (*qt6.QAction)(unsafe.Pointer(action))
			text := app.QActionText(a)
			s := MiqtStringToString(text)
			app.QLabelSetText(triggerLabel, MiqtStr(fmt.Sprintf("Action triggered: %s", s)))
			app.QStatusBarShowMessage2(statusBar, MiqtStr(fmt.Sprintf("Triggered: %s", s)), 3000)
			return 0
		})
		app.QMenuBarConnectTriggered(menuBar, int(triggerCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		docModeBtn := app.QPushButtonNew3(MiqtStr("DocMode: OFF"))
		docModeCb := windows.NewCallback(func(checked uintptr) uintptr {
			mode := app.QMainWindowDocumentMode(mainWindow)
			app.QMainWindowSetDocumentMode(mainWindow, !mode)
			if !mode {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(docModeBtn)), MiqtStr("DocMode: ON"))
			} else {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(docModeBtn)), MiqtStr("DocMode: OFF"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(docModeBtn)), int(docModeCb))

		animBtn := app.QPushButtonNew3(MiqtStr("Animation: ON"))
		animCb := windows.NewCallback(func(checked uintptr) uintptr {
			anim := app.QMainWindowIsAnimated(mainWindow)
			app.QMainWindowSetAnimated(mainWindow, !anim)
			if !anim {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(animBtn)), MiqtStr("Animation: ON"))
			} else {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(animBtn)), MiqtStr("Animation: OFF"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(animBtn)), int(animCb))

		tabShapeBtn := app.QPushButtonNew3(MiqtStr("TabShape: Rounded"))
		tabShapeCb := windows.NewCallback(func(checked uintptr) uintptr {
			shape := app.QMainWindowTabShape(mainWindow)
			next := (shape + 1) % 2
			app.QMainWindowSetTabShape(mainWindow, next)
			names := []string{"Rounded", "Triangular"}
			app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(tabShapeBtn)), MiqtStr(fmt.Sprintf("TabShape: %s", names[next])))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(tabShapeBtn)), int(tabShapeCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(docModeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(animBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(tabShapeBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: MenuBar | ToolBar | StatusBar | CentralWidget | DockWidget | DocumentMode | Animated | TabShape | AddToolBar | Triggered signal"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(mainWindow)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(triggerLabel)))
	})
}
