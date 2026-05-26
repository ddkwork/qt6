package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewSpinBoxCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QSpinBox",
		"Range, prefix, suffix, wrapping, value tracking",
		func() { ShowSpinBoxDemo(app) })
}

func ShowSpinBoxDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QSpinBox - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Basic spinbox (0-100):"))
		sb1 := app.QSpinBoxNew(nil)
		app.QSpinBoxSetRange(sb1, 0, 100)
		app.QSpinBoxSetValue(sb1, 42)

		lbl2 := app.QLabelNew3(MiqtStr("With prefix/suffix:"))
		sb2 := app.QSpinBoxNew(nil)
		app.QSpinBoxSetRange(sb2, 0, 999)
		app.QSpinBoxSetValue(sb2, 50)
		app.QSpinBoxSetPrefix(sb2, MiqtStr("$ "))
		app.QSpinBoxSetSuffix(sb2, MiqtStr(" .00"))

		lbl3 := app.QLabelNew3(MiqtStr("Wrapping spinbox (0-10):"))
		sb3 := app.QSpinBoxNew(nil)
		app.QSpinBoxSetRange(sb3, 0, 10)
		app.QSpinBoxSetValue(sb3, 5)
		app.QAbstractSpinBoxSetWrapping((*qt6.QAbstractSpinBox)(unsafe.Pointer(sb3)), true)

		lbl4 := app.QLabelNew3(MiqtStr("Hex display:"))
		sb4 := app.QSpinBoxNew(nil)
		app.QSpinBoxSetRange(sb4, 0, 255)
		app.QSpinBoxSetValue(sb4, 255)
		app.QSpinBoxSetPrefix(sb4, MiqtStr("0x"))
		app.QSpinBoxSetDisplayIntegerBase(sb4, 16)

		valueLabel := app.QLabelNew3(MiqtStr("Value: 42"))
		sb1Cb := windows.NewCallback(func(val uintptr) uintptr {
			v := app.QSpinBoxValue(sb1)
			app.QLabelSetText(valueLabel, MiqtStr(fmt.Sprintf("Value: %d", v)))
			return 0
		})
		app.QSpinBoxConnectValueChanged(sb1, int(sb1Cb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(sb1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(valueLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(sb2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(sb3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(sb4)))
	})
}
