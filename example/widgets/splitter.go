package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewSplitterCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QSplitter",
		"Horizontal/vertical split, collapsible, opaque resize, stretch",
		func() { ShowSplitterDemo(app) })
}

func ShowSplitterDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QSplitter - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		splitter := app.QSplitterNew(nil)

		left := app.QTextEditNew3(MiqtStr("Left panel\nDrag the splitter handle to resize."))
		right := app.QTextEditNew3(MiqtStr("Right panel\nThis is the right side content."))

		app.QSplitterAddWidget(splitter, (*qt6.QWidget)(unsafe.Pointer(left)))
		app.QSplitterAddWidget(splitter, (*qt6.QWidget)(unsafe.Pointer(right)))
		app.QSplitterSetStretchFactor(splitter, 0, 1)
		app.QSplitterSetStretchFactor(splitter, 1, 2)

		movedLabel := app.QLabelNew3(MiqtStr("Splitter moved: -"))
		movedCb := windows.NewCallback(func(pos uintptr, index uintptr) uintptr {
			app.QLabelSetText(movedLabel, MiqtStr(fmt.Sprintf("Splitter moved: pos=%d, index=%d", int32(pos), int32(index))))
			return 0
		})
		app.QSplitterConnectSplitterMoved(splitter, int(movedCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		orientBtn := app.QPushButtonNew3(MiqtStr("Toggle Orientation"))
		orientCb := windows.NewCallback(func(checked uintptr) uintptr {
			o := app.QSplitterOrientation(splitter)
			if o == 1 {
				app.QSplitterSetOrientation(splitter, 2)
			} else {
				app.QSplitterSetOrientation(splitter, 1)
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(orientBtn)), int(orientCb))

		collapsibleBtn := app.QPushButtonNew3(MiqtStr("Toggle ChildrenCollapsible"))
		collapsibleCb := windows.NewCallback(func(checked uintptr) uintptr {
			c := app.QSplitterChildrenCollapsible(splitter)
			app.QSplitterSetChildrenCollapsible(splitter, !c)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(collapsibleBtn)), int(collapsibleCb))

		opaqueBtn := app.QPushButtonNew3(MiqtStr("Toggle OpaqueResize"))
		opaqueCb := windows.NewCallback(func(checked uintptr) uintptr {
			o := app.QSplitterOpaqueResize(splitter)
			app.QSplitterSetOpaqueResizeWithOpaque(splitter, !o)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(opaqueBtn)), int(opaqueCb))

		insertBtn := app.QPushButtonNew3(MiqtStr("Insert Widget"))
		insertCb := windows.NewCallback(func(checked uintptr) uintptr {
			cnt := app.QSplitterCount(splitter)
			newEdit := app.QTextEditNew3(MiqtStr(fmt.Sprintf("Panel %d", cnt+1)))
			app.QSplitterInsertWidget(splitter, cnt, (*qt6.QWidget)(unsafe.Pointer(newEdit)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(insertBtn)), int(insertCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(orientBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(collapsibleBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(opaqueBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(insertBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: H/V orientation | Collapsible children | Opaque resize | Stretch factor | Insert widget | SplitterMoved signal"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(splitter)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(movedLabel)))
	})
}
