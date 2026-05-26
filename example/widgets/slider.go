package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewSliderCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QSlider",
		"Horizontal, vertical, tick marks, inverted, value tracking",
		func() { ShowSliderDemo(app) })
}

func ShowSliderDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QSlider - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Horizontal with ticks:"))
		hSlider := app.QSliderNew3(1)
		app.QAbstractSliderSetRange((*qt6.QAbstractSlider)(unsafe.Pointer(hSlider)), 0, 100)
		app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(hSlider)), 50)
		app.QSliderSetTickPosition(hSlider, 3)
		app.QSliderSetTickInterval(hSlider, 10)

		hValueLabel := app.QLabelNew3(MiqtStr("H Value: 50"))
		hCb := windows.NewCallback(func(val uintptr) uintptr {
			v := app.QAbstractSliderValue((*qt6.QAbstractSlider)(unsafe.Pointer(hSlider)))
			app.QLabelSetText(hValueLabel, MiqtStr(fmt.Sprintf("H Value: %d", v)))
			return 0
		})
		app.QAbstractSliderConnectValueChanged((*qt6.QAbstractSlider)(unsafe.Pointer(hSlider)), int(hCb))

		lbl2 := app.QLabelNew3(MiqtStr("Vertical slider:"))
		vSlider := app.QSliderNew3(2)
		app.QAbstractSliderSetRange((*qt6.QAbstractSlider)(unsafe.Pointer(vSlider)), 0, 100)
		app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(vSlider)), 30)
		app.QSliderSetTickPosition(vSlider, 2)

		vValueLabel := app.QLabelNew3(MiqtStr("V Value: 30"))
		vCb := windows.NewCallback(func(val uintptr) uintptr {
			v := app.QAbstractSliderValue((*qt6.QAbstractSlider)(unsafe.Pointer(vSlider)))
			app.QLabelSetText(vValueLabel, MiqtStr(fmt.Sprintf("V Value: %d", v)))
			return 0
		})
		app.QAbstractSliderConnectValueChanged((*qt6.QAbstractSlider)(unsafe.Pointer(vSlider)), int(vCb))

		lbl3 := app.QLabelNew3(MiqtStr("Inverted appearance:"))
		invSlider := app.QSliderNew3(1)
		app.QAbstractSliderSetRange((*qt6.QAbstractSlider)(unsafe.Pointer(invSlider)), 0, 100)
		app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(invSlider)), 70)
		app.QAbstractSliderSetInvertedAppearance((*qt6.QAbstractSlider)(unsafe.Pointer(invSlider)), true)
		app.QSliderSetTickPosition(invSlider, 3)

		hBox := app.QHBoxLayoutNew2()
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(hBox)), (*qt6.QWidget)(unsafe.Pointer(vSlider)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(hBox)), (*qt6.QWidget)(unsafe.Pointer(vValueLabel)))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(hSlider)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(hValueLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(hBox)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(invSlider)))
	})
}
