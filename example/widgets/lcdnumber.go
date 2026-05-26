package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewLCDNumberCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QLCDNumber",
		"Digit count, mode (HEX/OCT/BIN/DEC), segment style, overflow",
		func() { ShowLCDNumberDemo(app) })
}

func ShowLCDNumberDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QLCDNumber - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Decimal:"))
		lcd1 := app.QLCDNumberNew(nil)
		app.QLCDNumberSetDigitCount(lcd1, 6)
		app.QLCDNumberDisplay2(lcd1, 3.14159)
		app.QLCDNumberSetSegmentStyle(lcd1, 1)

		lbl2 := app.QLabelNew3(MiqtStr("Hexadecimal:"))
		lcd2 := app.QLCDNumberNew2()
		app.QLCDNumberSetDigitCount(lcd2, 4)
		app.QLCDNumberSetMode(lcd2, 2)
		app.QLCDNumberDisplayWithNum(lcd2, 255)
		app.QLCDNumberSetSegmentStyle(lcd2, 2)

		lbl3 := app.QLabelNew3(MiqtStr("Binary:"))
		lcd3 := app.QLCDNumberNew(nil)
		app.QLCDNumberSetDigitCount(lcd3, 8)
		app.QLCDNumberSetMode(lcd3, 3)
		app.QLCDNumberDisplayWithNum(lcd3, 42)
		app.QLCDNumberSetSegmentStyle(lcd3, 0)

		lcdLabel := app.QLabelNew3(MiqtStr("Value: 314159"))

		spinBox := app.QSpinBoxNew2()
		app.QSpinBoxSetRange(spinBox, 0, 999999)
		app.QSpinBoxSetValue(spinBox, 314159)
		spinCb := windows.NewCallback(func(val uintptr) uintptr {
			v := app.QSpinBoxValue(spinBox)
			app.QLCDNumberDisplayWithNum(lcd1, v)
			app.QLabelSetText(lcdLabel, MiqtStr(fmt.Sprintf("Value: %d", v)))
			return 0
		})
		app.QSpinBoxConnectValueChanged(spinBox, int(spinCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lcd1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lcd2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lcd3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lcdLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(spinBox)))
	})
}
