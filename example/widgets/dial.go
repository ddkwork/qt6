package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewDialCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QDial",
		"Dial knob, range, wrapping, notches, value tracking",
		func() { ShowDialDemo(app) })
}

func ShowDialDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QDial - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Standard dial:"))
		dial1 := app.QDialNew(nil)
		app.QAbstractSliderSetRange((*qt6.QAbstractSlider)(unsafe.Pointer(dial1)), 0, 100)
		app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(dial1)), 50)
		app.QDialSetNotchesVisible(dial1, true)

		valueLabel := app.QLabelNew3(MiqtStr("Value: 50"))
		dial1Cb := windows.NewCallback(func(val uintptr) uintptr {
			v := app.QAbstractSliderValue((*qt6.QAbstractSlider)(unsafe.Pointer(dial1)))
			app.QLabelSetText(valueLabel, MiqtStr(fmt.Sprintf("Value: %d", v)))
			return 0
		})
		app.QAbstractSliderConnectValueChanged((*qt6.QAbstractSlider)(unsafe.Pointer(dial1)), int(dial1Cb))

		lbl2 := app.QLabelNew3(MiqtStr("Wrapping dial:"))
		dial2 := app.QDialNew(nil)
		app.QAbstractSliderSetRange((*qt6.QAbstractSlider)(unsafe.Pointer(dial2)), 0, 360)
		app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(dial2)), 180)
		app.QDialSetWrapping(dial2, true)
		app.QDialSetNotchesVisible(dial2, true)
		app.QDialSetNotchTarget(dial2, 15)

		wrapLabel := app.QLabelNew3(MiqtStr("Angle: 180"))
		dial2Cb := windows.NewCallback(func(val uintptr) uintptr {
			v := app.QAbstractSliderValue((*qt6.QAbstractSlider)(unsafe.Pointer(dial2)))
			app.QLabelSetText(wrapLabel, MiqtStr(fmt.Sprintf("Angle: %d", v)))
			return 0
		})
		app.QAbstractSliderConnectValueChanged((*qt6.QAbstractSlider)(unsafe.Pointer(dial2)), int(dial2Cb))

		hBox := app.QHBoxLayoutNew2()
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(hBox)), (*qt6.QWidget)(unsafe.Pointer(dial1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(hBox)), (*qt6.QWidget)(unsafe.Pointer(valueLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(hBox)), (*qt6.QWidget)(unsafe.Pointer(dial2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(hBox)), (*qt6.QWidget)(unsafe.Pointer(wrapLabel)))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(hBox)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
	})
}
