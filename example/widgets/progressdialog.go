package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewProgressDialogCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QProgressDialog",
		"Progress feedback, cancel, auto close/reset, range",
		func() { ShowProgressDialogDemo(app) })
}

func ShowProgressDialogDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QProgressDialog - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		progressLabel := app.QLabelNew3(MiqtStr("Click a button to start a progress dialog"))
		app.QLabelSetWordWrap(progressLabel, true)

		ctrlLayout := app.QHBoxLayoutNew2()

		basicBtn := app.QPushButtonNew3(MiqtStr("Basic Progress"))
		basicCb := windows.NewCallback(func(checked uintptr) uintptr {
			pd := app.QProgressDialogNew3(MiqtStr("Processing..."), MiqtStr("Cancel"), 0, 100)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(pd)), MiqtStr("Basic Progress"))
			app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(pd)), 400, 150)
			app.QProgressDialogSetAutoClose(pd, true)
			app.QProgressDialogSetAutoReset(pd, true)
			app.QProgressDialogSetValue(pd, 0)
			for i := int32(0); i <= 100; i += 10 {
				app.QProgressDialogSetValue(pd, i)
				app.QCoreApplicationProcessEvents()
			}
			app.QLabelSetText(progressLabel, MiqtStr("Basic progress completed"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(basicBtn)), int(basicCb))

		noAutoCloseBtn := app.QPushButtonNew3(MiqtStr("No AutoClose"))
		noAutoCloseCb := windows.NewCallback(func(checked uintptr) uintptr {
			pd := app.QProgressDialogNew3(MiqtStr("Downloading..."), MiqtStr("Abort"), 0, 50)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(pd)), MiqtStr("Download Progress"))
			app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(pd)), 400, 150)
			app.QProgressDialogSetAutoClose(pd, false)
			app.QProgressDialogSetAutoReset(pd, false)
			app.QProgressDialogSetValue(pd, 0)
			for i := int32(0); i <= 50; i += 5 {
				app.QProgressDialogSetValue(pd, i)
				app.QCoreApplicationProcessEvents()
			}
			wasCanceled := app.QProgressDialogWasCanceled(pd)
			app.QLabelSetText(progressLabel, MiqtStr(fmt.Sprintf("Download progress: canceled=%v", wasCanceled)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(noAutoCloseBtn)), int(noAutoCloseCb))

		minDurationBtn := app.QPushButtonNew3(MiqtStr("Min Duration"))
		minDurationCb := windows.NewCallback(func(checked uintptr) uintptr {
			pd := app.QProgressDialogNew3(MiqtStr("Loading..."), MiqtStr("Cancel"), 0, 20)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(pd)), MiqtStr("Loading Progress"))
			app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(pd)), 400, 150)
			app.QProgressDialogSetMinimumDuration(pd, 0)
			app.QProgressDialogSetValue(pd, 0)
			for i := int32(0); i <= 20; i += 2 {
				app.QProgressDialogSetValue(pd, i)
				app.QCoreApplicationProcessEvents()
			}
			app.QLabelSetText(progressLabel, MiqtStr(fmt.Sprintf("Loading progress: minDuration=%d", app.QProgressDialogMinimumDuration(pd))))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(minDurationBtn)), int(minDurationCb))

		labelBtn := app.QPushButtonNew3(MiqtStr("Custom Label"))
		labelCb := windows.NewCallback(func(checked uintptr) uintptr {
			pd := app.QProgressDialogNew3(MiqtStr("Step 1/3..."), MiqtStr("Stop"), 0, 30)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(pd)), MiqtStr("Multi-step Progress"))
			app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(pd)), 400, 150)
			app.QProgressDialogSetMinimumDuration(pd, 0)
			app.QProgressDialogSetValue(pd, 0)
			for i := int32(0); i <= 30; i += 3 {
				if i < 10 {
					app.QProgressDialogSetLabelText(pd, MiqtStr("Step 1/3: Initializing..."))
				} else if i < 20 {
					app.QProgressDialogSetLabelText(pd, MiqtStr("Step 2/3: Processing..."))
				} else {
					app.QProgressDialogSetLabelText(pd, MiqtStr("Step 3/3: Finalizing..."))
				}
				app.QProgressDialogSetValue(pd, i)
				app.QCoreApplicationProcessEvents()
			}
			app.QLabelSetText(progressLabel, MiqtStr("Multi-step progress completed"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(labelBtn)), int(labelCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(basicBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(noAutoCloseBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(minDurationBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(labelBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Range | Value | AutoClose | AutoReset | WasCanceled | MinimumDuration | LabelText | Cancel button | SetLabelText | ProcessEvents"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(progressLabel)))
	})
}
