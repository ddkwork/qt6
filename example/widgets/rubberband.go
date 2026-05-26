package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewRubberBandCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QRubberBand",
		"Selection rectangle, line/rectangle shape, move/resize",
		func() { ShowRubberBandDemo(app) })
}

func ShowRubberBandDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QRubberBand - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		canvas := app.QWidgetNew(nil)
		app.QWidgetSetFixedSize2(canvas, 800, 400)
		palette := app.QWidgetPalette(canvas)
		white := app.QColorNew3(255, 255, 255)
		app.QPaletteSetColor2(palette, 0, white)
		app.QWidgetSetPalette(canvas, palette)
		app.QWidgetSetAutoFillBackground(canvas, true)

		rubberBand := app.QRubberBandNew2(1, canvas)

		infoLabel := app.QLabelNew3(MiqtStr("QRubberBand provides a selection rectangle or line.\nUse the buttons below to control the rubber band."))
		app.QLabelSetWordWrap(infoLabel, true)

		ctrlLayout := app.QHBoxLayoutNew2()

		showBtn := app.QPushButtonNew3(MiqtStr("Show RubberBand"))
		showCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QRubberBandSetGeometry2(rubberBand, 100, 50, 200, 150)
			app.QWidgetShow((*qt6.QWidget)(unsafe.Pointer(rubberBand)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(showBtn)), int(showCb))

		hideBtn := app.QPushButtonNew3(MiqtStr("Hide"))
		hideCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QWidgetHide((*qt6.QWidget)(unsafe.Pointer(rubberBand)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(hideBtn)), int(hideCb))

		moveBtn := app.QPushButtonNew3(MiqtStr("Move"))
		moveCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QRubberBandMove(rubberBand, 300, 100)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(moveBtn)), int(moveCb))

		resizeBtn := app.QPushButtonNew3(MiqtStr("Resize"))
		resizeCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QRubberBandResize(rubberBand, 300, 200)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(resizeBtn)), int(resizeCb))

		shapeLabel := app.QLabelNew3(MiqtStr("Shape: Rectangle"))

		toggleBtn := app.QPushButtonNew3(MiqtStr("Toggle Shape"))
		toggleCb := windows.NewCallback(func(checked uintptr) uintptr {
			shape := app.QRubberBandShape(rubberBand)
			app.QWidgetHide((*qt6.QWidget)(unsafe.Pointer(rubberBand)))
			if shape == 1 {
				rubberBand = app.QRubberBandNew2(2, canvas)
				app.QLabelSetText(shapeLabel, MiqtStr("Shape: Line"))
			} else {
				rubberBand = app.QRubberBandNew2(1, canvas)
				app.QLabelSetText(shapeLabel, MiqtStr("Shape: Rectangle"))
			}
			app.QRubberBandSetGeometry2(rubberBand, 100, 50, 200, 150)
			app.QWidgetShow((*qt6.QWidget)(unsafe.Pointer(rubberBand)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(toggleBtn)), int(toggleCb))

		geomBtn := app.QPushButtonNew3(MiqtStr("Set Geometry"))
		geomCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QRubberBandSetGeometry2(rubberBand, 50, 30, 400, 250)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(geomBtn)), int(geomCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(showBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(hideBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(moveBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(resizeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(toggleBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(geomBtn)))

		featuresLabel := app.QLabelNew3(MiqtStr("Features: Rectangle/Line shape | Show/Hide | Move | Resize | SetGeometry | Shape toggle | Selection indicator"))
		app.QLabelSetWordWrap(featuresLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(featuresLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), canvas)
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(shapeLabel)))
	})
}
