package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewStackedWidgetCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QStackedWidget",
		"Stacked pages, switch by index, current changed signal",
		func() { ShowStackedWidgetDemo(app) })
}

func ShowStackedWidgetDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QStackedWidget - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		stack := app.QStackedWidgetNew(nil)

		pages := []string{
			"Page 1: Welcome\n\nThis is the first page of the stacked widget.",
			"Page 2: Settings\n\nConfigure your application settings here.",
			"Page 3: Details\n\nView detailed information on this page.",
			"Page 4: Summary\n\nThis is the final summary page.",
		}

		colors := []int32{0x4488CC, 0x44CC88, 0xCC8844, 0x8844CC}

		for i, content := range pages {
			page := app.QWidgetNew(nil)
			pageLayout := app.QVBoxLayoutNew2()
			app.QWidgetSetLayout(page, (*qt6.QLayout)(unsafe.Pointer(pageLayout)))

			icon := StatusIcon(app, colors[i])
			iconLabel := app.QLabelNew3(MiqtStr(""))
			app.QLabelSetPixmap(iconLabel, app.QIconPixmap2(icon, 32, 32))
			app.QLabelSetAlignment(iconLabel, 0x0084)
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(pageLayout)), (*qt6.QWidget)(unsafe.Pointer(iconLabel)))

			lbl := app.QLabelNew3(MiqtStr(content))
			app.QLabelSetAlignment(lbl, 0x0084)
			app.QLabelSetWordWrap(lbl, true)
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(pageLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl)))

			app.QStackedWidgetAddWidget(stack, page)
		}

		indexLabel := app.QLabelNew3(MiqtStr("Current index: 0 / 3"))
		changedCb := windows.NewCallback(func(index uintptr) uintptr {
			cnt := app.QStackedWidgetCount(stack)
			app.QLabelSetText(indexLabel, MiqtStr(fmt.Sprintf("Current index: %d / %d", int32(index), cnt-1)))
			return 0
		})
		app.QStackedWidgetConnectCurrentChanged(stack, int(changedCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		prevBtn := app.QPushButtonNew3(MiqtStr("<< Previous"))
		prevCb := windows.NewCallback(func(checked uintptr) uintptr {
			idx := app.QStackedWidgetCurrentIndex(stack)
			if idx > 0 {
				app.QStackedWidgetSetCurrentIndex(stack, idx-1)
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(prevBtn)), int(prevCb))

		nextBtn := app.QPushButtonNew3(MiqtStr("Next >>"))
		nextCb := windows.NewCallback(func(checked uintptr) uintptr {
			idx := app.QStackedWidgetCurrentIndex(stack)
			cnt := app.QStackedWidgetCount(stack)
			if idx < cnt-1 {
				app.QStackedWidgetSetCurrentIndex(stack, idx+1)
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(nextBtn)), int(nextCb))

		firstBtn := app.QPushButtonNew3(MiqtStr("First"))
		firstCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QStackedWidgetSetCurrentIndex(stack, 0)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(firstBtn)), int(firstCb))

		lastBtn := app.QPushButtonNew3(MiqtStr("Last"))
		lastCb := windows.NewCallback(func(checked uintptr) uintptr {
			cnt := app.QStackedWidgetCount(stack)
			app.QStackedWidgetSetCurrentIndex(stack, cnt-1)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(lastBtn)), int(lastCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(prevBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(nextBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(firstBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(lastBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Stacked pages | Switch by index | Prev/Next navigation | CurrentChanged signal | AddWidget | Count"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(stack)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(indexLabel)))
	})
}
