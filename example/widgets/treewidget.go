package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

const (
	QtCustomContextMenu = 3
)

type treeEx struct {
	app     *qt6.Qt6
	tree    *qt6.QTreeWidget
	menu    *qt6.QMenu
	columns map[uintptr]int32
}

const (
	colReset     = -1
	colCopyCell  = -2
	colCopyRow   = -3
	colCopyPanel = -4
)

func NewTreeWidgetCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QTreeWidget",
		"Tree with columns, sorting, zebra stripes, context menu, copy, icons",
		func() { ShowTreeWidgetDemo(app) })
}

func ShowTreeWidgetDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QTreeWidget - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		ex := &treeEx{
			app:     app,
			columns: make(map[uintptr]int32),
		}

		tree := app.QTreeWidgetNew(nil)
		app.QAbstractItemViewSetAlternatingRowColors((*qt6.QAbstractItemView)(unsafe.Pointer(tree)), true)
		app.QTreeViewSetSortingEnabled((*qt6.QTreeView)(unsafe.Pointer(tree)), true)
		app.QTreeViewSetRootIsDecorated((*qt6.QTreeView)(unsafe.Pointer(tree)), true)
		app.QTreeViewSetUniformRowHeights((*qt6.QTreeView)(unsafe.Pointer(tree)), true)
		app.QAbstractItemViewSetSelectionMode((*qt6.QAbstractItemView)(unsafe.Pointer(tree)), 7)
		app.QAbstractItemViewSetEditTriggers((*qt6.QAbstractItemView)(unsafe.Pointer(tree)), 0)

		app.QTreeWidgetSetHeaderLabels(tree, MiqtArrayFromStrings([]string{"Name", "PID", "CPU%", "Memory", "Description", "Status"}))

		header := app.QTreeViewHeader((*qt6.QTreeView)(unsafe.Pointer(tree)))
		app.QHeaderViewSetSortIndicatorShown(header, true)

		menu := app.QMenuNew(nil)
		ex.tree = tree
		ex.menu = menu

		labels := []string{"Name", "PID", "CPU%", "Memory", "Description", "Status"}
		for i, lbl := range labels {
			action := app.QActionNew2(MiqtStr(lbl))
			app.QActionSetCheckable(action, true)
			app.QActionSetChecked(action, true)
			app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(action)))
			ex.columns[uintptr(unsafe.Pointer(action))] = int32(i)
		}
		app.QMenuAddSeparator(menu)
		resetAction := app.QActionNew2(MiqtStr("Reset Columns"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(resetAction)))
		ex.columns[uintptr(unsafe.Pointer(resetAction))] = colReset

		app.QMenuAddSeparator(menu)
		copyCellAction := app.QActionNew2(MiqtStr("Copy Cell"))
		copyRowAction := app.QActionNew2(MiqtStr("Copy Row"))
		copyPanelAction := app.QActionNew2(MiqtStr("Copy Panel"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(copyCellAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(copyRowAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(copyPanelAction)))
		ex.columns[uintptr(unsafe.Pointer(copyCellAction))] = colCopyCell
		ex.columns[uintptr(unsafe.Pointer(copyRowAction))] = colCopyRow
		ex.columns[uintptr(unsafe.Pointer(copyPanelAction))] = colCopyPanel

		app.QWidgetSetContextMenuPolicy((*qt6.QWidget)(unsafe.Pointer(tree)), QtCustomContextMenu)
		viewport := app.QAbstractScrollAreaViewport((*qt6.QAbstractScrollArea)(unsafe.Pointer(tree)))
		app.QWidgetSetContextMenuPolicy(viewport, QtCustomContextMenu)

		ctxMenuCb := windows.NewCallback(func(pos uintptr) uintptr {
			ex.showHeaderMenu()
			return 0
		})
		app.QWidgetConnectCustomContextMenuRequested((*qt6.QWidget)(unsafe.Pointer(tree)), int(ctxMenuCb))
		app.QWidgetConnectCustomContextMenuRequested(viewport, int(ctxMenuCb))

		populateTree(app, tree)

		expandBtn := app.QPushButtonNew3(MiqtStr("Expand All"))
		collapseBtn := app.QPushButtonNew3(MiqtStr("Collapse All"))
		expandCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTreeViewExpandAll((*qt6.QTreeView)(unsafe.Pointer(tree)))
			return 0
		})
		collapseCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTreeViewCollapseAll((*qt6.QTreeView)(unsafe.Pointer(tree)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(expandBtn)), int(expandCb))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(collapseBtn)), int(collapseCb))

		btnLayout := app.QHBoxLayoutNew2()
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(expandBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(collapseBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Sorting | Zebra stripes | Column hide/show | Context menu | Copy Cell/Row/Panel | Status icons | Expand/Collapse"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(btnLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(tree)))
	})
}

func (t *treeEx) showHeaderMenu() {
	app := t.app
	for actionPtr, col := range t.columns {
		if col >= 0 {
			hidden := app.QTreeViewIsColumnHidden((*qt6.QTreeView)(unsafe.Pointer(t.tree)), col)
			action := (*qt6.QAction)(unsafe.Pointer(actionPtr))
			app.QActionSetChecked(action, !hidden)
		}
	}
	pos := app.QCursorPos()
	selectedAction := app.QMenuExecWithPos(t.menu, pos)
	if selectedAction == nil {
		return
	}
	actionPtr := uintptr(unsafe.Pointer(selectedAction))
	col, ok := t.columns[actionPtr]
	if !ok {
		return
	}
	switch col {
	case colReset:
		t.resetColumns()
	case colCopyCell:
		t.onCopyCell()
	case colCopyRow:
		t.onCopyRow()
	case colCopyPanel:
		t.onCopyPanel()
	default:
		if col >= 0 {
			isChecked := app.QActionIsChecked(selectedAction)
			app.QTreeViewSetColumnHidden((*qt6.QTreeView)(unsafe.Pointer(t.tree)), col, !isChecked)
		}
	}
}

func (t *treeEx) resetColumns() {
	app := t.app
	colCount := app.QTreeWidgetColumnCount(t.tree)
	var i int32
	for i = 0; i < colCount; i++ {
		app.QTreeViewSetColumnHidden((*qt6.QTreeView)(unsafe.Pointer(t.tree)), i, false)
		app.QTreeViewResizeColumnToContents((*qt6.QTreeView)(unsafe.Pointer(t.tree)), i)
	}
	for actionPtr, col := range t.columns {
		if col >= 0 {
			app.QActionSetChecked((*qt6.QAction)(unsafe.Pointer(actionPtr)), true)
		}
	}
}

func (t *treeEx) onCopyCell() {
	app := t.app
	currentItem := app.QTreeWidgetCurrentItem(t.tree)
	if currentItem == nil {
		return
	}
	col := app.QTreeWidgetCurrentColumn(t.tree)
	if col < 0 {
		col = 0
	}
	text := MiqtStringToString(app.QTreeWidgetItemText(currentItem, col))
	if text == "" {
		return
	}
	t.copyToClipboard(text)
}

func (t *treeEx) onCopyRow() {
	app := t.app
	currentItem := app.QTreeWidgetCurrentItem(t.tree)
	if currentItem == nil {
		return
	}
	row := t.copyRowFromItem(currentItem)
	t.copyToClipboard(row)
}

func (t *treeEx) onCopyPanel() {
	app := t.app
	colCount := app.QTreeWidgetColumnCount(t.tree)
	header := t.copyHeader(colCount)
	var rows []string
	topCount := app.QTreeWidgetTopLevelItemCount(t.tree)
	var i int32
	for i = 0; i < topCount; i++ {
		item := app.QTreeWidgetTopLevelItem(t.tree, i)
		if item == nil {
			continue
		}
		t.recursiveCopyItem(item, colCount, &rows, 0)
	}
	result := header + "\n"
	for j, l := range rows {
		if j > 0 {
			result += "\n"
		}
		result += l
	}
	t.copyToClipboard(result)
}

func (t *treeEx) copyHeader(colCount int32) string {
	app := t.app
	var cells []string
	var i int32
	for i = 0; i < colCount; i++ {
		hidden := app.QTreeViewIsColumnHidden((*qt6.QTreeView)(unsafe.Pointer(t.tree)), i)
		if hidden {
			continue
		}
		headerItem := app.QTreeWidgetHeaderItem(t.tree)
		if headerItem == nil {
			continue
		}
		text := MiqtStringToString(app.QTreeWidgetItemText(headerItem, i))
		cells = append(cells, text)
	}
	return joinTab(cells)
}

func (t *treeEx) copyRowFromItem(item *qt6.QTreeWidgetItem) string {
	app := t.app
	colCount := app.QTreeWidgetColumnCount(t.tree)
	var cells []string
	var i int32
	for i = 0; i < colCount; i++ {
		hidden := app.QTreeViewIsColumnHidden((*qt6.QTreeView)(unsafe.Pointer(t.tree)), i)
		if hidden {
			continue
		}
		text := MiqtStringToString(app.QTreeWidgetItemText(item, i))
		cells = append(cells, text)
	}
	return joinTab(cells)
}

func (t *treeEx) recursiveCopyItem(item *qt6.QTreeWidgetItem, colCount int32, rows *[]string, level int) {
	app := t.app
	var cells []string
	var i int32
	for i = 0; i < colCount; i++ {
		hidden := app.QTreeViewIsColumnHidden((*qt6.QTreeView)(unsafe.Pointer(t.tree)), i)
		if hidden {
			continue
		}
		text := MiqtStringToString(app.QTreeWidgetItemText(item, i))
		if level > 0 && i == 0 {
			prefix := ""
			for l := 0; l < level; l++ {
				prefix += "_"
			}
			text = prefix + " " + text
		}
		cells = append(cells, text)
	}
	*rows = append(*rows, joinTab(cells))
	childCount := app.QTreeWidgetItemChildCount(item)
	var j int32
	for j = 0; j < childCount; j++ {
		child := app.QTreeWidgetItemChild(item, j)
		t.recursiveCopyItem(child, colCount, rows, level+1)
	}
}

func (t *treeEx) copyToClipboard(text string) {
	if text == "" {
		return
	}
	clipboard := t.app.QGuiApplicationClipboard()
	if clipboard == nil {
		return
	}
	t.app.QClipboardSetText(clipboard, MiqtStr(text))
}

func populateTree(app *qt6.Qt6, tree *qt6.QTreeWidget) {
	processes := []struct {
		name     string
		pid      int32
		cpu      string
		mem      string
		desc     string
		status   string
		children []struct {
			name, cpu, mem, desc, status string
			pid                          int32
		}
	}{
		{
			name: "explorer.exe", pid: 1234, cpu: "0.1%", mem: "128 MB", desc: "Windows Explorer", status: "Running",
			children: []struct {
				name, cpu, mem, desc, status string
				pid                          int32
			}{
				{name: "explorer.exe#1", pid: 5678, cpu: "0.0%", mem: "32 MB", desc: "Shell Window", status: "Running"},
				{name: "explorer.exe#2", pid: 5679, cpu: "0.0%", mem: "24 MB", desc: "File Dialog", status: "Running"},
			},
		},
		{
			name: "chrome.exe", pid: 2345, cpu: "2.3%", mem: "512 MB", desc: "Google Chrome", status: "Running",
			children: []struct {
				name, cpu, mem, desc, status string
				pid                          int32
			}{
				{name: "chrome.exe (GPU)", pid: 3456, cpu: "0.5%", mem: "64 MB", desc: "GPU Process", status: "Running"},
				{name: "chrome.exe (Tab)", pid: 3457, cpu: "1.2%", mem: "128 MB", desc: "Tab: GitHub", status: "Running"},
				{name: "chrome.exe (Renderer)", pid: 3459, cpu: "0.1%", mem: "48 MB", desc: "Background", status: "Suspended"},
			},
		},
		{
			name: "code.exe", pid: 3456, cpu: "1.8%", mem: "384 MB", desc: "Visual Studio Code", status: "Running",
			children: []struct {
				name, cpu, mem, desc, status string
				pid                          int32
			}{
				{name: "code.exe (Window)", pid: 4567, cpu: "0.3%", mem: "64 MB", desc: "Main Window", status: "Running"},
				{name: "code.exe (Extension)", pid: 4568, cpu: "0.9%", mem: "128 MB", desc: "Go Extension Host", status: "Running"},
				{name: "code.exe (Search)", pid: 4569, cpu: "0.2%", mem: "48 MB", desc: "Ripgrep Process", status: "Idle"},
			},
		},
		{name: "node.exe", pid: 4567, cpu: "0.5%", mem: "96 MB", desc: "Node.js Runtime", status: "Running"},
		{
			name: "docker.exe", pid: 5678, cpu: "0.2%", mem: "64 MB", desc: "Docker Desktop", status: "Running",
			children: []struct {
				name, cpu, mem, desc, status string
				pid                          int32
			}{
				{name: "com.docker.backend", pid: 6789, cpu: "0.8%", mem: "256 MB", desc: "Linux VM", status: "Running"},
				{name: "docker-proxy", pid: 6790, cpu: "0.0%", mem: "12 MB", desc: "Network Proxy", status: "Running"},
			},
		},
		{name: "svchost.exe", pid: 6789, cpu: "0.0%", mem: "32 MB", desc: "Service Host", status: "Running"},
		{name: "taskmgr.exe", pid: 7890, cpu: "0.3%", mem: "48 MB", desc: "Task Manager", status: "Running"},
	}

	for _, proc := range processes {
		parent := addProcTreeItem(app, proc.name, proc.pid, proc.cpu, proc.mem, proc.desc, proc.status, nil)
		for _, child := range proc.children {
			addProcTreeItem(app, child.name, child.pid, child.cpu, child.mem, child.desc, child.status, parent)
		}
		app.QTreeWidgetAddTopLevelItem(tree, parent)
	}

	app.QTreeViewExpandAll((*qt6.QTreeView)(unsafe.Pointer(tree)))
}

func addProcTreeItem(app *qt6.Qt6, name string, pid int32, cpu, mem, desc, status string, parent *qt6.QTreeWidgetItem) *qt6.QTreeWidgetItem {
	var item *qt6.QTreeWidgetItem
	if parent == nil {
		item = app.QTreeWidgetItemNew()
	} else {
		item = app.QTreeWidgetItemNew6(parent)
	}
	app.QTreeWidgetItemSetText(item, 0, MiqtStr(name))
	app.QTreeWidgetItemSetText(item, 1, MiqtStr(fmt.Sprintf("%d", pid)))
	app.QTreeWidgetItemSetText(item, 2, MiqtStr(cpu))
	app.QTreeWidgetItemSetText(item, 3, MiqtStr(mem))
	app.QTreeWidgetItemSetText(item, 4, MiqtStr(desc))
	app.QTreeWidgetItemSetText(item, 5, MiqtStr(status))

	iconColor := statusColor(status)
	icon := StatusIcon(app, iconColor)
	app.QTreeWidgetItemSetIcon(item, 0, icon)
	return item
}

func statusColor(status string) int32 {
	switch status {
	case "Running":
		return 0x00AA00
	case "Idle":
		return 0xAAAA00
	case "Suspended":
		return 0xAA5500
	default:
		return 0x666666
	}
}

func joinTab(cells []string) string {
	r := ""
	for i, c := range cells {
		if i > 0 {
			r += "\t"
		}
		r += c
	}
	return r
}
