package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewScrollBarCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QScrollBar",
		"Horizontal/vertical, range, value, slider signals",
		func() { ShowScrollBarDemo(app) })
}

func ShowScrollBarDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QScrollBar - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		hScroll := app.QScrollBarNew3(1)
		app.QAbstractSliderSetRange((*qt6.QAbstractSlider)(unsafe.Pointer(hScroll)), 0, 100)
		app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(hScroll)), 30)
		app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(hScroll)), 400, 20)

		vScroll := app.QScrollBarNew4(2, nil)
		app.QAbstractSliderSetRange((*qt6.QAbstractSlider)(unsafe.Pointer(vScroll)), 0, 100)
		app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(vScroll)), 50)
		app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(vScroll)), 20, 300)

		valueLabel := app.QLabelNew3(MiqtStr("H: 30 | V: 50"))

		hCb := windows.NewCallback(func(val uintptr) uintptr {
			v := app.QAbstractSliderValue((*qt6.QAbstractSlider)(unsafe.Pointer(vScroll)))
			app.QLabelSetText(valueLabel, MiqtStr(fmt.Sprintf("H: %d | V: %d", int32(val), v)))
			return 0
		})
		app.QAbstractSliderConnectValueChanged((*qt6.QAbstractSlider)(unsafe.Pointer(hScroll)), int(hCb))

		vCb := windows.NewCallback(func(val uintptr) uintptr {
			h := app.QAbstractSliderValue((*qt6.QAbstractSlider)(unsafe.Pointer(hScroll)))
			app.QLabelSetText(valueLabel, MiqtStr(fmt.Sprintf("H: %d | V: %d", h, int32(val))))
			return 0
		})
		app.QAbstractSliderConnectValueChanged((*qt6.QAbstractSlider)(unsafe.Pointer(vScroll)), int(vCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		resetBtn := app.QPushButtonNew3(MiqtStr("Reset"))
		resetCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(hScroll)), 30)
			app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(vScroll)), 50)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(resetBtn)), int(resetCb))

		maxBtn := app.QPushButtonNew3(MiqtStr("Set Max"))
		maxCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(hScroll)), 100)
			app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(vScroll)), 100)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(maxBtn)), int(maxCb))

		invertBtn := app.QPushButtonNew3(MiqtStr("Invert"))
		invertCb := windows.NewCallback(func(checked uintptr) uintptr {
			h := app.QAbstractSliderValue((*qt6.QAbstractSlider)(unsafe.Pointer(hScroll)))
			v := app.QAbstractSliderValue((*qt6.QAbstractSlider)(unsafe.Pointer(vScroll)))
			app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(hScroll)), 100-h)
			app.QAbstractSliderSetValue((*qt6.QAbstractSlider)(unsafe.Pointer(vScroll)), 100-v)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(invertBtn)), int(invertCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(resetBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(maxBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(invertBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Horizontal | Vertical | Range | Value tracking | ValueChanged signal | Invert"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(hScroll)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(vScroll)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(valueLabel)))
	})
}
