package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewStatusBarCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QStatusBar",
		"Messages, permanent widgets, size grip, timed messages",
		func() { ShowStatusBarDemo(app) })
}

func ShowStatusBarDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QStatusBar - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		statusBar := app.QStatusBarNew(nil)
		app.QStatusBarSetSizeGripEnabled(statusBar, true)

		permLabel := app.QLabelNew3(MiqtStr("Ready"))
		app.QStatusBarAddPermanentWidget(statusBar, (*qt6.QWidget)(unsafe.Pointer(permLabel)))

		ctrlLayout := app.QHBoxLayoutNew2()

		msgBtn := app.QPushButtonNew3(MiqtStr("Show Message"))
		msgCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QStatusBarShowMessage2(statusBar, MiqtStr("This is a temporary status message"), 3000)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(msgBtn)), int(msgCb))

		permMsgBtn := app.QPushButtonNew3(MiqtStr("Show Permanent"))
		permMsgCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QLabelSetText(permLabel, MiqtStr(fmt.Sprintf("Updated %d", app.QStatusBarCurrentMessage(statusBar).Len)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(permMsgBtn)), int(permMsgCb))

		clearBtn := app.QPushButtonNew3(MiqtStr("Clear Message"))
		clearCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QStatusBarClearMessage(statusBar)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(clearBtn)), int(clearCb))

		gripBtn := app.QPushButtonNew3(MiqtStr("Toggle SizeGrip"))
		gripCb := windows.NewCallback(func(checked uintptr) uintptr {
			enabled := app.QStatusBarIsSizeGripEnabled(statusBar)
			app.QStatusBarSetSizeGripEnabled(statusBar, !enabled)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(gripBtn)), int(gripCb))

		addWidgetBtn := app.QPushButtonNew3(MiqtStr("Add Widget"))
		addWidgetCb := windows.NewCallback(func(checked uintptr) uintptr {
			newLabel := app.QLabelNew3(MiqtStr(fmt.Sprintf("W%d", app.QStatusBarCurrentMessage(statusBar).Len)))
			app.QStatusBarAddWidget(statusBar, (*qt6.QWidget)(unsafe.Pointer(newLabel)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(addWidgetBtn)), int(addWidgetCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(msgBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(permMsgBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(clearBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(gripBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(addWidgetBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Show message | Timed message | Permanent widget | Add widget | Clear message | Size grip toggle | MessageChanged signal"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(statusBar)))
	})
}
