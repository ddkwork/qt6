package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewPushButtonCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QPushButton",
		"Normal, disabled, flat, checkable, default, with icon, auto-repeat",
		func() { ShowPushButtonDemo(app) })
}

func ShowPushButtonDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QPushButton - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		row1 := app.QHBoxLayoutNew2()

		btn1 := app.QPushButtonNew3(MiqtStr("Normal"))
		btn2 := app.QPushButtonNew3(MiqtStr("Disabled"))
		app.QWidgetSetEnabled((*qt6.QWidget)(unsafe.Pointer(btn2)), false)
		btn3 := app.QPushButtonNew3(MiqtStr("Flat"))
		app.QPushButtonSetFlat(btn3, true)
		btn4 := app.QPushButtonNew3(MiqtStr("Checkable"))
		app.QAbstractButtonSetCheckable((*qt6.QAbstractButton)(unsafe.Pointer(btn4)), true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn4)))

		row2 := app.QHBoxLayoutNew2()

		btn5 := app.QPushButtonNew3(MiqtStr("Default"))
		app.QPushButtonSetDefault(btn5, true)
		btn6 := app.QPushButtonNew3(MiqtStr("Auto Default"))
		app.QPushButtonSetAutoDefault(btn6, true)
		btn7 := app.QPushButtonNew3(MiqtStr("With Icon"))
		icon := StatusIcon(app, 0x00AA00)
		app.QAbstractButtonSetIcon((*qt6.QAbstractButton)(unsafe.Pointer(btn7)), icon)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row2)), (*qt6.QWidget)(unsafe.Pointer(btn5)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row2)), (*qt6.QWidget)(unsafe.Pointer(btn6)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row2)), (*qt6.QWidget)(unsafe.Pointer(btn7)))

		clickCount := 0
		clickLabel := app.QLabelNew3(MiqtStr("Click count: 0"))
		clickCb := windows.NewCallback(func(checked uintptr) uintptr {
			clickCount++
			app.QLabelSetText(clickLabel, MiqtStr(fmt.Sprintf("Click count: %d", clickCount)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn1)), int(clickCb))

		checkLabel := app.QLabelNew3(MiqtStr("Checkable state: unchecked"))
		checkCb := windows.NewCallback(func(checked uintptr) uintptr {
			if app.QAbstractButtonIsChecked((*qt6.QAbstractButton)(unsafe.Pointer(btn4))) {
				app.QLabelSetText(checkLabel, MiqtStr("Checkable state: checked"))
			} else {
				app.QLabelSetText(checkLabel, MiqtStr("Checkable state: unchecked"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn4)), int(checkCb))

		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(row1)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(row2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(clickLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(checkLabel)))
	})
}
