package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewMdiAreaCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QMdiArea",
		"MDI sub-windows, tile, cascade, tab mode, activation",
		func() { ShowMdiAreaDemo(app) })
}

func ShowMdiAreaDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QMdiArea - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		mdi := app.QMdiAreaNew(nil)
		app.QMdiAreaSetTabsClosable(mdi, true)
		app.QMdiAreaSetTabsMovable(mdi, true)

		for i := 0; i < 3; i++ {
			sub := app.QWidgetNew(nil)
			subLayout := app.QVBoxLayoutNew2()
			app.QWidgetSetLayout(sub, (*qt6.QLayout)(unsafe.Pointer(subLayout)))
			lbl := app.QLabelNew3(MiqtStr(fmt.Sprintf("Sub-window %d content\nYou can drag and resize this window.", i+1)))
			app.QLabelSetWordWrap(lbl, true)
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(subLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl)))
			edit := app.QTextEditNew3(MiqtStr(fmt.Sprintf("Edit area for window %d", i+1)))
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(subLayout)), (*qt6.QWidget)(unsafe.Pointer(edit)))
			app.QMdiAreaAddSubWindow(mdi, sub)
		}

		activeLabel := app.QLabelNew3(MiqtStr("Active sub-window: -"))
		activeCb := windows.NewCallback(func(sub uintptr) uintptr {
			if sub == 0 {
				app.QLabelSetText(activeLabel, MiqtStr("Active sub-window: none"))
			} else {
				app.QLabelSetText(activeLabel, MiqtStr("Active sub-window changed"))
			}
			return 0
		})
		app.QMdiAreaConnectSubWindowActivated(mdi, int(activeCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		addBtn := app.QPushButtonNew3(MiqtStr("Add Window"))
		addCb := windows.NewCallback(func(checked uintptr) uintptr {
			cnt := len(fmt.Sprintf("%d", 0))
			sub := app.QWidgetNew(nil)
			subLayout := app.QVBoxLayoutNew2()
			app.QWidgetSetLayout(sub, (*qt6.QLayout)(unsafe.Pointer(subLayout)))
			lbl := app.QLabelNew3(MiqtStr(fmt.Sprintf("New sub-window %d", cnt+4)))
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(subLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl)))
			app.QMdiAreaAddSubWindow(mdi, sub)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(addBtn)), int(addCb))

		tileBtn := app.QPushButtonNew3(MiqtStr("Tile"))
		tileCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QMdiAreaTileSubWindows(mdi)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(tileBtn)), int(tileCb))

		cascadeBtn := app.QPushButtonNew3(MiqtStr("Cascade"))
		cascadeCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QMdiAreaCascadeSubWindows(mdi)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(cascadeBtn)), int(cascadeCb))

		closeBtn := app.QPushButtonNew3(MiqtStr("Close All"))
		closeCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QMdiAreaCloseAllSubWindows(mdi)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(closeBtn)), int(closeCb))

		modeBtn := app.QPushButtonNew3(MiqtStr("Mode: SubWindowView"))
		modeCb := windows.NewCallback(func(checked uintptr) uintptr {
			m := app.QMdiAreaViewMode(mdi)
			if m == 0 {
				app.QMdiAreaSetViewMode(mdi, 1)
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(modeBtn)), MiqtStr("Mode: TabView"))
			} else {
				app.QMdiAreaSetViewMode(mdi, 0)
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(modeBtn)), MiqtStr("Mode: SubWindowView"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(modeBtn)), int(modeCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(addBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(tileBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(cascadeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(closeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(modeBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Sub-windows | Tile | Cascade | Close all | Tab/SubWindow view mode | TabsClosable | TabsMovable | SubWindowActivated"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(mdi)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(activeLabel)))
	})
}
