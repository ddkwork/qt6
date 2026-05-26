package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewDockWidgetCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QDockWidget",
		"Dockable panel, floating, features, title bar widget",
		func() { ShowDockWidgetDemo(app) })
}

func ShowDockWidgetDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QDockWidget - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		dock := app.QDockWidgetNew2(MiqtStr("Dock Panel"))
		app.QDockWidgetSetFeatures(dock, 0x0007)
		app.QDockWidgetSetAllowedAreas(dock, 0x0f)

		content := app.QWidgetNew(nil)
		contentLayout := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout(content, (*qt6.QLayout)(unsafe.Pointer(contentLayout)))

		lbl := app.QLabelNew3(MiqtStr("This is the dock widget content.\nYou can dock, float, and close this panel."))
		app.QLabelSetWordWrap(lbl, true)
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(contentLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl)))

		dockBtn := app.QPushButtonNew3(MiqtStr("A button inside dock"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(contentLayout)), (*qt6.QWidget)(unsafe.Pointer(dockBtn)))

		app.QDockWidgetSetWidget(dock, content)

		featuresLabel := app.QLabelNew3(MiqtStr("Features: DockableClosable | DockableMovable | DockableFloatable"))
		featuresCb := windows.NewCallback(func(features uintptr) uintptr {
			app.QLabelSetText(featuresLabel, MiqtStr(fmt.Sprintf("Features changed: %d", int32(features))))
			return 0
		})
		app.QDockWidgetConnectFeaturesChanged(dock, int(featuresCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		floatBtn := app.QPushButtonNew3(MiqtStr("Toggle Floating"))
		floatCb := windows.NewCallback(func(checked uintptr) uintptr {
			f := app.QDockWidgetIsFloating(dock)
			app.QDockWidgetSetFloating(dock, !f)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(floatBtn)), int(floatCb))

		featureBtn := app.QPushButtonNew3(MiqtStr("Cycle Features"))
		featureCb := windows.NewCallback(func(checked uintptr) uintptr {
			f := app.QDockWidgetFeatures(dock)
			next := (f + 1) % 8
			app.QDockWidgetSetFeatures(dock, next)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(featureBtn)), int(featureCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(floatBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(featureBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Floating | DockableClosable/Movable/Floatable | AllowedAreas | FeaturesChanged | SetWidget | Title"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(dock)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(featuresLabel)))
	})
}
