package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewToolBarCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QToolBar",
		"Actions, separators, movable, floatable, icon size, style",
		func() { ShowToolBarDemo(app) })
}

func ShowToolBarDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QToolBar - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		toolbar := app.QToolBarNew2(MiqtStr("Main Toolbar"))
		app.QToolBarSetMovable(toolbar, true)
		app.QToolBarSetFloatable(toolbar, true)

		newAction := app.QActionNew2(MiqtStr("New"))
		openAction := app.QActionNew2(MiqtStr("Open"))
		saveAction := app.QActionNew2(MiqtStr("Save"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(newAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(openAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(saveAction)))

		app.QToolBarAddSeparator(toolbar)

		cutAction := app.QActionNew2(MiqtStr("Cut"))
		copyAction := app.QActionNew2(MiqtStr("Copy"))
		pasteAction := app.QActionNew2(MiqtStr("Paste"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(cutAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(copyAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(toolbar)), (*qt6.QAction)(unsafe.Pointer(pasteAction)))

		app.QToolBarAddSeparator(toolbar)

		widget := app.QLineEditNew(nil)
		app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(widget)), 150, 22)
		app.QToolBarAddWidget(toolbar, (*qt6.QWidget)(unsafe.Pointer(widget)))

		triggerLabel := app.QLabelNew3(MiqtStr("Triggered: -"))
		triggerCb := windows.NewCallback(func(action uintptr) uintptr {
			a := (*qt6.QAction)(unsafe.Pointer(action))
			text := app.QActionText(a)
			app.QLabelSetText(triggerLabel, MiqtStr(fmt.Sprintf("Triggered: %s", MiqtStringToString(text))))
			return 0
		})
		app.QToolBarConnectActionTriggered(toolbar, int(triggerCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		movableBtn := app.QPushButtonNew3(MiqtStr("Movable: ON"))
		movableCb := windows.NewCallback(func(checked uintptr) uintptr {
			m := app.QToolBarIsMovable(toolbar)
			app.QToolBarSetMovable(toolbar, !m)
			if !m {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(movableBtn)), MiqtStr("Movable: ON"))
			} else {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(movableBtn)), MiqtStr("Movable: OFF"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(movableBtn)), int(movableCb))

		floatBtn := app.QPushButtonNew3(MiqtStr("Floatable: ON"))
		floatCb := windows.NewCallback(func(checked uintptr) uintptr {
			f := app.QToolBarIsFloatable(toolbar)
			app.QToolBarSetFloatable(toolbar, !f)
			if !f {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(floatBtn)), MiqtStr("Floatable: ON"))
			} else {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(floatBtn)), MiqtStr("Floatable: OFF"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(floatBtn)), int(floatCb))

		clearBtn := app.QPushButtonNew3(MiqtStr("Clear"))
		clearCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QToolBarClear(toolbar)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(clearBtn)), int(clearCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(movableBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(floatBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(clearBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Actions | Separators | AddWidget | Movable | Floatable | ActionTriggered | Clear | Title"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(toolbar)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(triggerLabel)))
	})
}
