package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

type listEx struct {
	app           *qt6.Qt6
	list          *qt6.QListWidget
	menu          *qt6.QMenu
	addAction     *qt6.QAction
	removeAction  *qt6.QAction
	copyAction    *qt6.QAction
	copyAllAction *qt6.QAction
}

func NewListWidgetCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QListWidget",
		"List with sorting, zebra stripes, context menu, add/remove, copy, selection modes",
		func() { ShowListWidgetDemo(app) })
}

func ShowListWidgetDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QListWidget - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		ex := &listEx{app: app}

		list := app.QListWidgetNew(nil)
		app.QAbstractItemViewSetAlternatingRowColors((*qt6.QAbstractItemView)(unsafe.Pointer(list)), true)
		app.QListWidgetSetSortingEnabled(list, true)
		app.QAbstractItemViewSetSelectionMode((*qt6.QAbstractItemView)(unsafe.Pointer(list)), 7)
		app.QAbstractItemViewSetEditTriggers((*qt6.QAbstractItemView)(unsafe.Pointer(list)), 2)
		ex.list = list

		items := []struct {
			name   string
			status string
		}{
			{"Process A", "Running"},
			{"Process B", "Idle"},
			{"Process C", "Running"},
			{"Process D", "Suspended"},
			{"Process E", "Running"},
			{"Process F", "Idle"},
			{"Process G", "Running"},
			{"Process H", "Running"},
		}
		for _, it := range items {
			item := app.QListWidgetItemNew2(MiqtStr(it.name))
			icon := StatusIcon(app, statusColor(it.status))
			app.QListWidgetItemSetIcon(item, icon)
			app.QListWidgetAddItemWithItem(list, item)
		}

		menu := app.QMenuNew(nil)
		addAction := app.QActionNew2(MiqtStr("Add Item"))
		removeAction := app.QActionNew2(MiqtStr("Remove selected"))
		copyAction := app.QActionNew2(MiqtStr("Copy selected text"))
		copyAllAction := app.QActionNew2(MiqtStr("Copy all items"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(addAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(removeAction)))
		app.QMenuAddSeparator(menu)
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(copyAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(copyAllAction)))
		ex.menu = menu
		ex.addAction = addAction
		ex.removeAction = removeAction
		ex.copyAction = copyAction
		ex.copyAllAction = copyAllAction

		app.QWidgetSetContextMenuPolicy((*qt6.QWidget)(unsafe.Pointer(list)), QtCustomContextMenu)
		ctxCb := windows.NewCallback(func(pos uintptr) uintptr {
			ex.showContextMenu()
			return 0
		})
		app.QWidgetConnectCustomContextMenuRequested((*qt6.QWidget)(unsafe.Pointer(list)), int(ctxCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		addBtn := app.QPushButtonNew3(MiqtStr("Add Item"))
		removeBtn := app.QPushButtonNew3(MiqtStr("Remove Selected"))
		clearBtn := app.QPushButtonNew3(MiqtStr("Clear All"))

		addCb := windows.NewCallback(func(checked uintptr) uintptr {
			item := app.QListWidgetItemNew2(MiqtStr(fmt.Sprintf("Item %d", app.QListWidgetCount(list)+1)))
			icon := StatusIcon(app, 0x00AA00)
			app.QListWidgetItemSetIcon(item, icon)
			app.QListWidgetAddItemWithItem(list, item)
			return 0
		})
		removeCb := windows.NewCallback(func(checked uintptr) uintptr {
			row := app.QListWidgetCurrentRow(list)
			if row >= 0 {
				app.QListWidgetTakeItem(list, row)
			}
			return 0
		})
		clearCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QListWidgetClear(list)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(addBtn)), int(addCb))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(removeBtn)), int(removeCb))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(clearBtn)), int(clearCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(addBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(removeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(clearBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Sorting | Zebra stripes | Context menu (Add/Remove/Copy) | Edit on double-click | Selection mode: Extended | Status icons"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(list)))
	})
}

func (l *listEx) showContextMenu() {
	app := l.app
	selectedAction := app.QMenuExecWithPos(l.menu, app.QCursorPos())
	if selectedAction == nil {
		return
	}
	actionPtr := uintptr(unsafe.Pointer(selectedAction))

	addActionPtr := uintptr(unsafe.Pointer(l.addAction))
	removeActionPtr := uintptr(unsafe.Pointer(l.removeAction))
	copyActionPtr := uintptr(unsafe.Pointer(l.copyAction))
	copyAllActionPtr := uintptr(unsafe.Pointer(l.copyAllAction))

	switch actionPtr {
	case addActionPtr:
		item := app.QListWidgetItemNew2(MiqtStr(fmt.Sprintf("Item %d", app.QListWidgetCount(l.list)+1)))
		icon := StatusIcon(app, 0x00AA00)
		app.QListWidgetItemSetIcon(item, icon)
		app.QListWidgetAddItemWithItem(l.list, item)
	case removeActionPtr:
		row := app.QListWidgetCurrentRow(l.list)
		if row >= 0 {
			app.QListWidgetTakeItem(l.list, row)
		}
	case copyActionPtr:
		current := app.QListWidgetCurrentItem(l.list)
		if current != nil {
			text := MiqtStringToString(app.QListWidgetItemText(current))
			l.copyToClipboard(text)
		}
	case copyAllActionPtr:
		var texts []string
		count := app.QListWidgetCount(l.list)
		var i int32
		for i = 0; i < count; i++ {
			item := app.QListWidgetItem(l.list, i)
			if item != nil {
				texts = append(texts, MiqtStringToString(app.QListWidgetItemText(item)))
			}
		}
		l.copyToClipboard(joinTab(texts))
	}
}

func (l *listEx) copyToClipboard(text string) {
	if text == "" {
		return
	}
	clipboard := l.app.QGuiApplicationClipboard()
	if clipboard == nil {
		return
	}
	l.app.QClipboardSetText(clipboard, MiqtStr(text))
}
