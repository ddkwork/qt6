package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewFrameCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QFrame",
		"Frame shapes, shadows, line width, mid line width, separator",
		func() { ShowFrameDemo(app) })
}

func ShowFrameDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QFrame - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		grid := app.QGridLayoutNew2()

		shapes := []struct {
			name  string
			shape int32
		}{
			{"NoFrame", 0},
			{"Box", 1},
			{"Panel", 2},
			{"WinPanel", 3},
			{"HLine", 4},
			{"VLine", 5},
			{"StyledPanel", 6},
		}

		for i, s := range shapes {
			frame := app.QFrameNew(nil)
			app.QFrameSetFrameShape(frame, s.shape)
			app.QFrameSetFrameShadow(frame, 0x0010)
			app.QFrameSetLineWidth(frame, 2)
			app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(frame)), 120, 60)

			label := app.QLabelNew3(MiqtStr(s.name))
			app.QLabelSetAlignment(label, 0x0084)

			app.QGridLayoutAddWidget2(grid, (*qt6.QWidget)(unsafe.Pointer(label)), int32(i/4), int32(i%4)*2)
			app.QGridLayoutAddWidget2(grid, (*qt6.QWidget)(unsafe.Pointer(frame)), int32(i/4), int32(i%4)*2+1)
		}

		ctrlLayout := app.QHBoxLayoutNew2()

		shadowBtn := app.QPushButtonNew3(MiqtStr("Cycle Shadow"))
		shadowCb := windows.NewCallback(func(checked uintptr) uintptr {
			frame := app.QFrameNew(nil)
			app.QFrameSetFrameShape(frame, 1)
			app.QFrameSetFrameShadow(frame, 0x0020)
			app.QFrameSetLineWidth(frame, 3)
			app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(frame)), 200, 60)
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(frame)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(shadowBtn)), int(shadowCb))

		hline := app.QFrameNew(nil)
		app.QFrameSetFrameShape(hline, 4)
		app.QFrameSetFrameShadow(hline, 0x0010)
		app.QFrameSetLineWidth(hline, 1)

		vline := app.QFrameNew(nil)
		app.QFrameSetFrameShape(vline, 5)
		app.QFrameSetFrameShadow(vline, 0x0010)
		app.QFrameSetLineWidth(vline, 1)
		app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(vline)), 2, 40)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(shadowBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: NoFrame | Box | Panel | WinPanel | HLine | VLine | StyledPanel | Shadow (Plain/Sunken/Raised) | LineWidth | MidLineWidth"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(grid)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(hline)))
	})
}
