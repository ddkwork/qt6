package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewProgressBarCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QProgressBar",
		"Normal, busy, text visibility, inverted, vertical",
		func() { ShowProgressBarDemo(app) })
}

func ShowProgressBarDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QProgressBar - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Normal progress:"))
		pb1 := app.QProgressBarNew2()
		app.QProgressBarSetRange(pb1, 0, 100)
		app.QProgressBarSetValue(pb1, 65)

		lbl2 := app.QLabelNew3(MiqtStr("Busy indicator:"))
		pb2 := app.QProgressBarNew2()
		app.QProgressBarSetRange(pb2, 0, 0)

		lbl3 := app.QLabelNew3(MiqtStr("No text:"))
		pb3 := app.QProgressBarNew(nil)
		app.QProgressBarSetRange(pb3, 0, 100)
		app.QProgressBarSetValue(pb3, 42)
		app.QProgressBarSetTextVisible(pb3, false)

		lbl4 := app.QLabelNew3(MiqtStr("Inverted:"))
		pb4 := app.QProgressBarNew2()
		app.QProgressBarSetRange(pb4, 0, 100)
		app.QProgressBarSetValue(pb4, 80)
		app.QProgressBarSetInvertedAppearance(pb4, true)

		lbl5 := app.QLabelNew3(MiqtStr("Vertical:"))
		pb5 := app.QProgressBarNew(nil)
		app.QProgressBarSetOrientation(pb5, 2)
		app.QProgressBarSetRange(pb5, 0, 100)
		app.QProgressBarSetValue(pb5, 55)
		app.QWidgetSetFixedHeight((*qt6.QWidget)(unsafe.Pointer(pb5)), 120)

		startBtn := app.QPushButtonNew3(MiqtStr("Start Animation"))
		stopBtn := app.QPushButtonNew3(MiqtStr("Stop Animation"))
		animVal := int32(0)
		animRunning := false

		startCb := windows.NewCallback(func(checked uintptr) uintptr {
			animRunning = true
			return 0
		})
		stopCb := windows.NewCallback(func(checked uintptr) uintptr {
			animRunning = false
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(startBtn)), int(startCb))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(stopBtn)), int(stopCb))

		btnLayout := app.QHBoxLayoutNew2()
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(startBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(stopBtn)))

		_ = animVal
		_ = animRunning

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(pb1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(pb2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(pb3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(pb4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl5)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(pb5)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(btnLayout)))
	})
}
