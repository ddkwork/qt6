package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewColumnViewCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QColumnView",
		"Column-based browsing, resize grips, preview widget",
		func() { ShowColumnViewDemo(app) })
}

func ShowColumnViewDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QColumnView - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		columnView := app.QColumnViewNew(nil)
		app.QColumnViewSetResizeGripsVisible(columnView, true)
		app.QAbstractItemViewSetAlternatingRowColors((*qt6.QAbstractItemView)(unsafe.Pointer(columnView)), true)

		previewWidget := app.QLabelNew3(MiqtStr("Preview: Select an item to see preview"))
		app.QLabelSetWordWrap(previewWidget, true)
		app.QLabelSetAlignment(previewWidget, 0x0084)
		app.QColumnViewSetPreviewWidget(columnView, (*qt6.QWidget)(unsafe.Pointer(previewWidget)))
		app.QColumnViewSetPreviewColumnVisible(columnView, true)

		previewCb := windows.NewCallback(func(index uintptr) uintptr {
			app.QLabelSetText(previewWidget, MiqtStr("Preview: Item selected in column view"))
			return 0
		})
		app.QColumnViewConnectUpdatePreviewWidget(columnView, int(previewCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		gripsBtn := app.QPushButtonNew3(MiqtStr("Grips: ON"))
		gripsCb := windows.NewCallback(func(checked uintptr) uintptr {
			vis := app.QColumnViewResizeGripsVisible(columnView)
			app.QColumnViewSetResizeGripsVisible(columnView, !vis)
			if !vis {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(gripsBtn)), MiqtStr("Grips: ON"))
			} else {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(gripsBtn)), MiqtStr("Grips: OFF"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(gripsBtn)), int(gripsCb))

		previewBtn := app.QPushButtonNew3(MiqtStr("Toggle Preview"))
		previewToggleCb := windows.NewCallback(func(checked uintptr) uintptr {
			vis := app.QColumnViewIsPreviewColumnVisible(columnView)
			app.QColumnViewSetPreviewColumnVisible(columnView, !vis)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(previewBtn)), int(previewToggleCb))

		selectAllBtn := app.QPushButtonNew3(MiqtStr("Select All"))
		selectAllCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QColumnViewSelectAll(columnView)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(selectAllBtn)), int(selectAllCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(gripsBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(previewBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(selectAllBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Column browsing | Resize grips | Preview widget | PreviewColumnVisible | UpdatePreviewWidget | SelectAll | AlternatingRowColors"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(columnView)))
	})
}
