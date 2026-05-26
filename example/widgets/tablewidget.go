package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

type tableEx struct {
	app             *qt6.Qt6
	table           *qt6.QTableWidget
	menu            *qt6.QMenu
	copyCellAction  *qt6.QAction
	copyRowAction   *qt6.QAction
	copyAllAction   *qt6.QAction
	addRowAction    *qt6.QAction
	removeRowAction *qt6.QAction
}

func NewTableWidgetCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QTableWidget",
		"Table with sorting, zebra stripes, context menu, edit, copy, selection",
		func() { ShowTableWidgetDemo(app) })
}

func ShowTableWidgetDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QTableWidget - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		ex := &tableEx{app: app}

		table := app.QTableWidgetNew3(5, 4)
		app.QAbstractItemViewSetAlternatingRowColors((*qt6.QAbstractItemView)(unsafe.Pointer(table)), true)
		app.QTableWidgetSetSortingEnabled(table, true)
		app.QAbstractItemViewSetSelectionMode((*qt6.QAbstractItemView)(unsafe.Pointer(table)), 7)
		app.QAbstractItemViewSetEditTriggers((*qt6.QAbstractItemView)(unsafe.Pointer(table)), 2)
		ex.table = table

		app.QTableWidgetSetHorizontalHeaderLabels(table, MiqtArrayFromStrings([]string{"Name", "Value", "Status", "Priority"}))

		data := [][]string{
			{"Config A", "100", "Active", "High"},
			{"Config B", "200", "Idle", "Medium"},
			{"Config C", "300", "Active", "Low"},
			{"Config D", "400", "Error", "Critical"},
			{"Config E", "500", "Active", "Medium"},
		}
		for r, row := range data {
			for c, val := range row {
				item := app.QTableWidgetItemNew2(MiqtStr(val))
				if c == 2 {
					icon := StatusIcon(app, statusColor(val))
					app.QTableWidgetItemSetIcon(item, icon)
				}
				app.QTableWidgetSetItem(table, int32(r), int32(c), item)
			}
		}

		menu := app.QMenuNew(nil)
		copyCellAction := app.QActionNew2(MiqtStr("Copy Cell"))
		copyRowAction := app.QActionNew2(MiqtStr("Copy Row"))
		copyAllAction := app.QActionNew2(MiqtStr("Copy All"))
		addRowAction := app.QActionNew2(MiqtStr("Add Row"))
		removeRowAction := app.QActionNew2(MiqtStr("Remove Row"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(copyCellAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(copyRowAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(copyAllAction)))
		app.QMenuAddSeparator(menu)
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(addRowAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(removeRowAction)))
		ex.menu = menu
		ex.copyCellAction = copyCellAction
		ex.copyRowAction = copyRowAction
		ex.copyAllAction = copyAllAction
		ex.addRowAction = addRowAction
		ex.removeRowAction = removeRowAction

		app.QWidgetSetContextMenuPolicy((*qt6.QWidget)(unsafe.Pointer(table)), QtCustomContextMenu)
		ctxCb := windows.NewCallback(func(pos uintptr) uintptr {
			ex.showContextMenu()
			return 0
		})
		app.QWidgetConnectCustomContextMenuRequested((*qt6.QWidget)(unsafe.Pointer(table)), int(ctxCb))

		ctrlLayout := app.QHBoxLayoutNew2()
		addRowBtn := app.QPushButtonNew3(MiqtStr("Add Row"))
		removeRowBtn := app.QPushButtonNew3(MiqtStr("Remove Row"))

		addRowCb := windows.NewCallback(func(checked uintptr) uintptr {
			row := app.QTableWidgetRowCount(table)
			app.QTableWidgetInsertRow(table, row)
			app.QTableWidgetSetItem(table, row, 0, app.QTableWidgetItemNew2(MiqtStr(fmt.Sprintf("New %d", row+1))))
			app.QTableWidgetSetItem(table, row, 1, app.QTableWidgetItemNew2(MiqtStr("0")))
			app.QTableWidgetSetItem(table, row, 2, app.QTableWidgetItemNew2(MiqtStr("Active")))
			app.QTableWidgetSetItem(table, row, 3, app.QTableWidgetItemNew2(MiqtStr("Low")))
			return 0
		})
		removeRowCb := windows.NewCallback(func(checked uintptr) uintptr {
			row := app.QTableWidgetCurrentRow(table)
			if row >= 0 {
				app.QTableWidgetRemoveRow(table, row)
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(addRowBtn)), int(addRowCb))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(removeRowBtn)), int(removeRowCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(addRowBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(removeRowBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Sorting | Zebra stripes | Context menu (Copy Cell/Row/All, Add/Remove Row) | Edit on double-click | Selection mode: Extended | Status icons"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(table)))
	})
}

func (t *tableEx) showContextMenu() {
	app := t.app
	selectedAction := app.QMenuExecWithPos(t.menu, app.QCursorPos())
	if selectedAction == nil {
		return
	}
	actionPtr := uintptr(unsafe.Pointer(selectedAction))

	copyCellPtr := uintptr(unsafe.Pointer(t.copyCellAction))
	copyRowPtr := uintptr(unsafe.Pointer(t.copyRowAction))
	copyAllPtr := uintptr(unsafe.Pointer(t.copyAllAction))
	addRowPtr := uintptr(unsafe.Pointer(t.addRowAction))
	removeRowPtr := uintptr(unsafe.Pointer(t.removeRowAction))

	switch actionPtr {
	case copyCellPtr:
		item := app.QTableWidgetCurrentItem(t.table)
		if item != nil {
			text := MiqtStringToString(app.QTableWidgetItemText(item))
			t.copyToClipboard(text)
		}
	case copyRowPtr:
		row := app.QTableWidgetCurrentRow(t.table)
		if row >= 0 {
			var cells []string
			colCount := app.QTableWidgetColumnCount(t.table)
			var c int32
			for c = 0; c < colCount; c++ {
				item := app.QTableWidgetItem(t.table, row, c)
				if item != nil {
					cells = append(cells, MiqtStringToString(app.QTableWidgetItemText(item)))
				}
			}
			t.copyToClipboard(joinTab(cells))
		}
	case copyAllPtr:
		rowCount := app.QTableWidgetRowCount(t.table)
		colCount := app.QTableWidgetColumnCount(t.table)
		var rows []string
		var r int32
		for r = 0; r < rowCount; r++ {
			var cells []string
			var c int32
			for c = 0; c < colCount; c++ {
				item := app.QTableWidgetItem(t.table, r, c)
				if item != nil {
					cells = append(cells, MiqtStringToString(app.QTableWidgetItemText(item)))
				}
			}
			rows = append(rows, joinTab(cells))
		}
		result := ""
		for i, l := range rows {
			if i > 0 {
				result += "\n"
			}
			result += l
		}
		t.copyToClipboard(result)
	case addRowPtr:
		row := app.QTableWidgetRowCount(t.table)
		app.QTableWidgetInsertRow(t.table, row)
		app.QTableWidgetSetItem(t.table, row, 0, app.QTableWidgetItemNew2(MiqtStr(fmt.Sprintf("New %d", row+1))))
		app.QTableWidgetSetItem(t.table, row, 1, app.QTableWidgetItemNew2(MiqtStr("0")))
		app.QTableWidgetSetItem(t.table, row, 2, app.QTableWidgetItemNew2(MiqtStr("Active")))
		app.QTableWidgetSetItem(t.table, row, 3, app.QTableWidgetItemNew2(MiqtStr("Low")))
	case removeRowPtr:
		row := app.QTableWidgetCurrentRow(t.table)
		if row >= 0 {
			app.QTableWidgetRemoveRow(t.table, row)
		}
	}
}

func (t *tableEx) copyToClipboard(text string) {
	if text == "" {
		return
	}
	clipboard := t.app.QGuiApplicationClipboard()
	if clipboard == nil {
		return
	}
	t.app.QClipboardSetText(clipboard, MiqtStr(text))
}
