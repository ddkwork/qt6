package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewGraphicsViewCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QGraphicsView",
		"Graphics scene, drag mode, render hints, zoom, alignment",
		func() { ShowGraphicsViewDemo(app) })
}

func ShowGraphicsViewDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QGraphicsView - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		scene := app.QGraphicsSceneNew()

		rf1 := app.QRectFNew4(50, 50, 200, 100)
		rect := app.QGraphicsSceneAddRect(scene, rf1)
		_ = rect
		rf2 := app.QRectFNew4(300, 50, 150, 150)
		ellipse := app.QGraphicsSceneAddEllipse(scene, rf2)
		_ = ellipse
		lineItem := app.QGraphicsSceneAddLine2(scene, 50, 200, 450, 200)
		_ = lineItem
		textItem := app.QGraphicsSceneAddText(scene, MiqtStr("QGraphicsView Demo"))
		_ = textItem

		view := app.QGraphicsViewNew3(scene)
		app.QGraphicsViewSetRenderHint(view, 1)
		app.QGraphicsViewSetDragMode(view, 1)
		app.QGraphicsViewSetViewportUpdateMode(view, 0)
		app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(view)), 850, 400)

		infoLabel := app.QLabelNew3(MiqtStr("Features: GraphicsScene | Rect/Ellipse/Line/Text items | Drag mode | Render hints | Zoom | Alignment | Cache mode"))
		app.QLabelSetWordWrap(infoLabel, true)

		ctrlLayout := app.QHBoxLayoutNew2()

		dragBtn := app.QPushButtonNew3(MiqtStr("Drag: ScrollHand"))
		dragCb := windows.NewCallback(func(checked uintptr) uintptr {
			mode := app.QGraphicsViewDragMode(view)
			next := (mode + 1) % 3
			app.QGraphicsViewSetDragMode(view, next)
			names := []string{"NoDrag", "ScrollHand", "RubberBand"}
			app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(dragBtn)), MiqtStr(fmt.Sprintf("Drag: %s", names[next])))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(dragBtn)), int(dragCb))

		antialiasBtn := app.QPushButtonNew3(MiqtStr("Antialiasing: ON"))
		antialiasCb := windows.NewCallback(func(checked uintptr) uintptr {
			hints := app.QGraphicsViewRenderHints(view)
			if hints&1 != 0 {
				app.QGraphicsViewSetRenderHint(view, 1)
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(antialiasBtn)), MiqtStr("Antialiasing: OFF"))
			} else {
				app.QGraphicsViewSetRenderHint(view, 1)
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(antialiasBtn)), MiqtStr("Antialiasing: ON"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(antialiasBtn)), int(antialiasCb))

		fitBtn := app.QPushButtonNew3(MiqtStr("Fit in View"))
		fitCb := windows.NewCallback(func(checked uintptr) uintptr {
			rf := app.QRectFNew4(0, 0, 500, 300)
			app.QGraphicsViewFitInView(view, rf)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(fitBtn)), int(fitCb))

		resetBtn := app.QPushButtonNew3(MiqtStr("Reset Transform"))
		resetCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QGraphicsViewResetTransform(view)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(resetBtn)), int(resetCb))

		zoomInBtn := app.QPushButtonNew3(MiqtStr("Zoom In"))
		zoomInCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QGraphicsViewScale(view, 1.2, 1.2)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(zoomInBtn)), int(zoomInCb))

		zoomOutBtn := app.QPushButtonNew3(MiqtStr("Zoom Out"))
		zoomOutCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QGraphicsViewScale(view, 0.8, 0.8)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(zoomOutBtn)), int(zoomOutCb))

		rotateBtn := app.QPushButtonNew3(MiqtStr("Rotate 30"))
		rotateCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QGraphicsViewRotate(view, 30.0)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(rotateBtn)), int(rotateCb))

		addRectBtn := app.QPushButtonNew3(MiqtStr("Add Rect"))
		addRectCb := windows.NewCallback(func(checked uintptr) uintptr {
			rf := app.QRectFNew4(10, 10, 80, 60)
			app.QGraphicsSceneAddRect(scene, rf)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(addRectBtn)), int(addRectCb))

		clearBtn := app.QPushButtonNew3(MiqtStr("Clear Scene"))
		clearCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QGraphicsSceneClear(scene)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(clearBtn)), int(clearCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(dragBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(antialiasBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(fitBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(resetBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(zoomInBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(zoomOutBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(rotateBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(addRectBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(clearBtn)))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(view)))
	})
}
