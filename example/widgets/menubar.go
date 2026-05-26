package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewMenuBarCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QMenuBar",
		"Menus, actions, separators, shortcuts, triggered signal",
		func() { ShowMenuBarDemo(app) })
}

func ShowMenuBarDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QMenuBar - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		menuBar := app.QMenuBarNew(nil)

		fileMenu := app.QMenuBarAddMenuWithTitle(menuBar, MiqtStr("&File"))
		newAction := app.QActionNew2(MiqtStr("&New"))
		openAction := app.QActionNew2(MiqtStr("&Open"))
		saveAction := app.QActionNew2(MiqtStr("&Save"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(fileMenu)), (*qt6.QAction)(unsafe.Pointer(newAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(fileMenu)), (*qt6.QAction)(unsafe.Pointer(openAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(fileMenu)), (*qt6.QAction)(unsafe.Pointer(saveAction)))
		app.QMenuAddSeparator(fileMenu)
		exitAction := app.QActionNew2(MiqtStr("E&xit"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(fileMenu)), (*qt6.QAction)(unsafe.Pointer(exitAction)))

		editMenu := app.QMenuBarAddMenuWithTitle(menuBar, MiqtStr("&Edit"))
		cutAction := app.QActionNew2(MiqtStr("Cu&t"))
		copyAction := app.QActionNew2(MiqtStr("&Copy"))
		pasteAction := app.QActionNew2(MiqtStr("&Paste"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(editMenu)), (*qt6.QAction)(unsafe.Pointer(cutAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(editMenu)), (*qt6.QAction)(unsafe.Pointer(copyAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(editMenu)), (*qt6.QAction)(unsafe.Pointer(pasteAction)))

		viewMenu := app.QMenuBarAddMenuWithTitle(menuBar, MiqtStr("&View"))
		toolbarAction := app.QActionNew2(MiqtStr("Toolbars"))
		app.QActionSetCheckable(toolbarAction, true)
		app.QActionSetChecked(toolbarAction, true)
		statusbarAction := app.QActionNew2(MiqtStr("Status Bar"))
		app.QActionSetCheckable(statusbarAction, true)
		app.QActionSetChecked(statusbarAction, true)
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(viewMenu)), (*qt6.QAction)(unsafe.Pointer(toolbarAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(viewMenu)), (*qt6.QAction)(unsafe.Pointer(statusbarAction)))

		helpMenu := app.QMenuBarAddMenuWithTitle(menuBar, MiqtStr("&Help"))
		aboutAction := app.QActionNew2(MiqtStr("&About"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(helpMenu)), (*qt6.QAction)(unsafe.Pointer(aboutAction)))

		triggerLabel := app.QLabelNew3(MiqtStr("Triggered: -"))
		triggerCb := windows.NewCallback(func(action uintptr) uintptr {
			a := (*qt6.QAction)(unsafe.Pointer(action))
			text := app.QActionText(a)
			app.QLabelSetText(triggerLabel, MiqtStr(fmt.Sprintf("Triggered: %s", MiqtStringToString(text))))
			return 0
		})
		app.QMenuBarConnectTriggered(menuBar, int(triggerCb))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Multiple menus | Actions | Separators | Checkable actions | Mnemonics | Triggered signal"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(menuBar)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(triggerLabel)))
	})
}
