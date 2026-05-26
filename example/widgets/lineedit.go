package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewLineEditCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QLineEdit",
		"Normal, password, readonly, placeholder, echo modes, clear button",
		func() { ShowLineEditDemo(app) })
}

func ShowLineEditDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QLineEdit - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		le1 := app.QLineEditNew3(MiqtStr("Normal input"))
		app.QLineEditSetPlaceholderText(le1, MiqtStr("Type here..."))
		lbl1 := app.QLabelNew3(MiqtStr("Normal + Placeholder"))

		le2 := app.QLineEditNew(nil)
		app.QLineEditSetEchoMode(le2, 2)
		app.QLineEditSetPlaceholderText(le2, MiqtStr("Enter password..."))
		lbl2 := app.QLabelNew3(MiqtStr("Password echo mode"))

		le3 := app.QLineEditNew3(MiqtStr("Read-only text"))
		app.QLineEditSetReadOnly(le3, true)
		lbl3 := app.QLabelNew3(MiqtStr("Read-only"))

		le4 := app.QLineEditNew(nil)
		app.QLineEditSetEchoMode(le4, 3)
		app.QLineEditSetPlaceholderText(le4, MiqtStr("No echo"))
		lbl4 := app.QLabelNew3(MiqtStr("NoEcho mode"))

		le5 := app.QLineEditNew(nil)
		app.QLineEditSetMaxLength(le5, 20)
		app.QLineEditSetPlaceholderText(le5, MiqtStr("Max 20 chars"))
		lbl5 := app.QLabelNew3(MiqtStr("MaxLength: 20"))

		textLabel := app.QLabelNew3(MiqtStr("You typed: "))
		le1Cb := windows.NewCallback(func(text uintptr) uintptr {
			t := MiqtStringToString(app.QLineEditText(le1))
			app.QLabelSetText(textLabel, MiqtStr("You typed: "+t))
			return 0
		})
		app.QLineEditConnectTextChanged(le1, int(le1Cb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(le1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(le2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(le3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(le4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl5)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(le5)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(textLabel)))
	})
}
