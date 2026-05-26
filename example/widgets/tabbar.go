package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewTabBarCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QTabBar",
		"Tabs, closable, movable, icons, shape, current changed",
		func() { ShowTabBarDemo(app) })
}

func ShowTabBarDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QTabBar - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		tabBar := app.QTabBarNew(nil)
		app.QTabBarSetTabsClosable(tabBar, true)
		app.QTabBarSetMovable(tabBar, true)
		app.QTabBarSetExpanding(tabBar, false)
		app.QTabBarSetDrawBase(tabBar, true)
		app.QTabBarSetUsesScrollButtons(tabBar, true)

		tabs := []string{"Browser", "Editor", "Terminal", "Settings", "Help"}
		for i, t := range tabs {
			icon := StatusIcon(app, []int32{0x00AA00, 0x0066CC, 0xCC6600, 0x666666, 0xAA0000}[i])
			app.QTabBarAddTab2(tabBar, icon, MiqtStr(t))
		}

		indexLabel := app.QLabelNew3(MiqtStr("Current index: 0"))
		currentCb := windows.NewCallback(func(index uintptr) uintptr {
			app.QLabelSetText(indexLabel, MiqtStr(fmt.Sprintf("Current index: %d", int32(index))))
			return 0
		})
		app.QTabBarConnectCurrentChanged(tabBar, int(currentCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		addBtn := app.QPushButtonNew3(MiqtStr("Add Tab"))
		addCb := windows.NewCallback(func(checked uintptr) uintptr {
			cnt := app.QTabBarCount(tabBar)
			app.QTabBarAddTab(tabBar, MiqtStr(fmt.Sprintf("Tab %d", cnt+1)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(addBtn)), int(addCb))

		removeBtn := app.QPushButtonNew3(MiqtStr("Remove Current"))
		removeCb := windows.NewCallback(func(checked uintptr) uintptr {
			idx := app.QTabBarCurrentIndex(tabBar)
			if idx >= 0 {
				app.QTabBarRemoveTab(tabBar, idx)
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(removeBtn)), int(removeCb))

		shapeBtn := app.QPushButtonNew3(MiqtStr("Shape: RoundedNorth"))
		shapeCb := windows.NewCallback(func(checked uintptr) uintptr {
			shape := app.QTabBarShape(tabBar)
			next := (shape + 1) % 4
			app.QTabBarSetShape(tabBar, next)
			names := []string{"RoundedNorth", "RoundedSouth", "TriangularNorth", "TriangularSouth"}
			app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(shapeBtn)), MiqtStr(fmt.Sprintf("Shape: %s", names[next])))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(shapeBtn)), int(shapeCb))

		toggleCloseBtn := app.QPushButtonNew3(MiqtStr("Closable: ON"))
		toggleCloseCb := windows.NewCallback(func(checked uintptr) uintptr {
			c := app.QTabBarTabsClosable(tabBar)
			app.QTabBarSetTabsClosable(tabBar, !c)
			if !c {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(toggleCloseBtn)), MiqtStr("Closable: ON"))
			} else {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(toggleCloseBtn)), MiqtStr("Closable: OFF"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(toggleCloseBtn)), int(toggleCloseCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(addBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(removeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(shapeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(toggleCloseBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Add/Remove tabs | Closable | Movable | Shape cycle | Icons | CurrentChanged | DrawBase | Expanding | ScrollButtons"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(tabBar)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(indexLabel)))
	})
}
