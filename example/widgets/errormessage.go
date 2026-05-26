package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewErrorMessageCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QErrorMessage",
		"Error message display, Qt handler, show message",
		func() { ShowErrorMessageDemo(app) })
}

func ShowErrorMessageDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QErrorMessage - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		infoLabel := app.QLabelNew3(MiqtStr("QErrorMessage provides a dialog for displaying error messages with a 'Show this message again' checkbox."))
		app.QLabelSetWordWrap(infoLabel, true)

		ctrlLayout := app.QHBoxLayoutNew2()

		showBtn := app.QPushButtonNew3(MiqtStr("Show Error Message"))
		showCb := windows.NewCallback(func(checked uintptr) uintptr {
			errDlg := app.QErrorMessageNew(nil)
			app.QErrorMessageShowMessage(errDlg, MiqtStr("This is an error message from QErrorMessage.\nYou can check 'Show this message again' to see it next time."))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(showBtn)), int(showCb))

		showTypeBtn := app.QPushButtonNew3(MiqtStr("Show Typed Message"))
		showTypeCb := windows.NewCallback(func(checked uintptr) uintptr {
			errDlg := app.QErrorMessageNew(nil)
			app.QErrorMessageShowMessage2(errDlg, MiqtStr("This is a typed warning message."), MiqtStr("warning"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(showTypeBtn)), int(showTypeCb))

		qtHandlerBtn := app.QPushButtonNew3(MiqtStr("Get Qt Handler"))
		qtHandlerCb := windows.NewCallback(func(checked uintptr) uintptr {
			handler := app.QErrorMessageQtHandler()
			if handler != nil {
				app.QErrorMessageShowMessage(handler, MiqtStr("Message via Qt message handler."))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(qtHandlerBtn)), int(qtHandlerCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(showBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(showTypeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(qtHandlerBtn)))

		featuresLabel := app.QLabelNew3(MiqtStr("Features: ShowMessage | ShowMessage with type | QtHandler | 'Show again' checkbox | Error message dialog"))
		app.QLabelSetWordWrap(featuresLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(featuresLabel)))
	})
}
