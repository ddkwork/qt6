package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewToolBoxCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QToolBox",
		"Collapsible pages, item icons, enable/disable items",
		func() { ShowToolBoxDemo(app) })
}

func ShowToolBoxDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QToolBox - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		toolbox := app.QToolBoxNew(nil)

		page1 := app.QWidgetNew(nil)
		page1Layout := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout(page1, (*qt6.QLayout)(unsafe.Pointer(page1Layout)))
		for i := 0; i < 5; i++ {
			lbl := app.QLabelNew3(MiqtStr(fmt.Sprintf("Personal Info Field %d", i+1)))
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(page1Layout)), (*qt6.QWidget)(unsafe.Pointer(lbl)))
		}
		app.QToolBoxAddItem(toolbox, page1, MiqtStr("Personal Info"))

		page2 := app.QWidgetNew(nil)
		page2Layout := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout(page2, (*qt6.QLayout)(unsafe.Pointer(page2Layout)))
		for i := 0; i < 4; i++ {
			lbl := app.QLabelNew3(MiqtStr(fmt.Sprintf("Work Detail %d", i+1)))
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(page2Layout)), (*qt6.QWidget)(unsafe.Pointer(lbl)))
		}
		icon := StatusIcon(app, 0x00AA00)
		app.QToolBoxAddItem2(toolbox, page2, icon, MiqtStr("Work Details"))

		page3 := app.QWidgetNew(nil)
		page3Layout := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout(page3, (*qt6.QLayout)(unsafe.Pointer(page3Layout)))
		for i := 0; i < 3; i++ {
			lbl := app.QLabelNew3(MiqtStr(fmt.Sprintf("Contact Method %d", i+1)))
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(page3Layout)), (*qt6.QWidget)(unsafe.Pointer(lbl)))
		}
		app.QToolBoxAddItem(toolbox, page3, MiqtStr("Contact Info"))

		ctrlLayout := app.QHBoxLayoutNew2()

		toggleBtn := app.QPushButtonNew3(MiqtStr("Toggle Page 2 Enabled"))
		toggleCb := windows.NewCallback(func(checked uintptr) uintptr {
			enabled := app.QToolBoxIsItemEnabled(toolbox, 1)
			app.QToolBoxSetItemEnabled(toolbox, 1, !enabled)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(toggleBtn)), int(toggleCb))

		renameBtn := app.QPushButtonNew3(MiqtStr("Rename Page 1"))
		renameCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QToolBoxSetItemText(toolbox, 0, MiqtStr(fmt.Sprintf("Renamed %d", app.QToolBoxCount(toolbox))))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(renameBtn)), int(renameCb))

		insertBtn := app.QPushButtonNew3(MiqtStr("Insert Page at 1"))
		insertCb := windows.NewCallback(func(checked uintptr) uintptr {
			newPage := app.QWidgetNew(nil)
			newLayout := app.QVBoxLayoutNew2()
			app.QWidgetSetLayout(newPage, (*qt6.QLayout)(unsafe.Pointer(newLayout)))
			lbl := app.QLabelNew3(MiqtStr("Inserted page content"))
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(newLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl)))
			app.QToolBoxInsertItem(toolbox, 1, newPage, MiqtStr("Inserted"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(insertBtn)), int(insertCb))

		removeBtn := app.QPushButtonNew3(MiqtStr("Remove Last Page"))
		removeCb := windows.NewCallback(func(checked uintptr) uintptr {
			count := app.QToolBoxCount(toolbox)
			if count > 1 {
				app.QToolBoxRemoveItem(toolbox, count-1)
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(removeBtn)), int(removeCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(toggleBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(renameBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(insertBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(removeBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Collapsible pages | Item icons | Enable/Disable items | Insert/Remove pages | Rename items | Count"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(toolbox)))
	})
}
