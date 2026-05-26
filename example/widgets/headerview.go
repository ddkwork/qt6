package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewHeaderViewCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QHeaderView",
		"Header sections, resize modes, movable, clickable, stretch",
		func() { ShowHeaderViewDemo(app) })
}

func ShowHeaderViewDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QHeaderView - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		table := app.QTableWidgetNew3(5, 4)
		app.QTableWidgetSetHorizontalHeaderLabels(table, MiqtArrayFromStrings([]string{"Name", "Value", "Status", "Priority"}))
		app.QAbstractItemViewSetAlternatingRowColors((*qt6.QAbstractItemView)(unsafe.Pointer(table)), true)

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
				app.QTableWidgetSetItem(table, int32(r), int32(c), item)
			}
		}

		hHeader := app.QTableViewHorizontalHeader((*qt6.QTableView)(unsafe.Pointer(table)))
		app.QHeaderViewSetSectionsClickable(hHeader, true)
		app.QHeaderViewSetSectionsMovable(hHeader, true)
		app.QHeaderViewSetStretchLastSection(hHeader, true)
		app.QHeaderViewSetSortIndicatorShown(hHeader, true)
		app.QHeaderViewSetHighlightSections(hHeader, true)

		vHeader := app.QTableViewVerticalHeader((*qt6.QTableView)(unsafe.Pointer(table)))
		app.QHeaderViewSetSectionsClickable(vHeader, true)
		app.QHeaderViewSetDefaultAlignment(vHeader, 0x0084)

		ctrlLayout := app.QHBoxLayoutNew2()

		resizeBtn := app.QPushButtonNew3(MiqtStr("Resize: Interactive"))
		resizeCb := windows.NewCallback(func(checked uintptr) uintptr {
			for i := int32(0); i < 4; i++ {
				app.QHeaderViewSetSectionResizeMode2(hHeader, i, 1)
			}
			app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(resizeBtn)), MiqtStr("Resize: Stretch"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(resizeBtn)), int(resizeCb))

		movableBtn := app.QPushButtonNew3(MiqtStr("Movable: ON"))
		movableCb := windows.NewCallback(func(checked uintptr) uintptr {
			m := app.QHeaderViewSectionsMovable(hHeader)
			app.QHeaderViewSetSectionsMovable(hHeader, !m)
			if !m {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(movableBtn)), MiqtStr("Movable: ON"))
			} else {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(movableBtn)), MiqtStr("Movable: OFF"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(movableBtn)), int(movableCb))

		hideBtn := app.QPushButtonNew3(MiqtStr("Hide Col 2"))
		hideCb := windows.NewCallback(func(checked uintptr) uintptr {
			hidden := app.QHeaderViewIsSectionHidden(hHeader, 2)
			if hidden {
				app.QHeaderViewShowSection(hHeader, 2)
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(hideBtn)), MiqtStr("Hide Col 2"))
			} else {
				app.QHeaderViewHideSection(hHeader, 2)
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(hideBtn)), MiqtStr("Show Col 2"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(hideBtn)), int(hideCb))

		stretchBtn := app.QPushButtonNew3(MiqtStr("Toggle StretchLast"))
		stretchCb := windows.NewCallback(func(checked uintptr) uintptr {
			s := app.QHeaderViewStretchLastSection(hHeader)
			app.QHeaderViewSetStretchLastSection(hHeader, !s)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(stretchBtn)), int(stretchCb))

		swapBtn := app.QPushButtonNew3(MiqtStr("Swap Col 0,1"))
		swapCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QHeaderViewSwapSections(hHeader, 0, 1)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(swapBtn)), int(swapCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(resizeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(movableBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(hideBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(stretchBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(swapBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Clickable | Movable | StretchLastSection | SortIndicator | HighlightSections | Hide/Show sections | SwapSections | ResizeMode | DefaultAlignment"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(table)))
	})
}
