package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewTabWidgetCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QTabWidget",
		"Multiple tabs, closable, movable, position, current changed",
		func() { ShowTabWidgetDemo(app) })
}

func ShowTabWidgetDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QTabWidget - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		tabs := app.QTabWidgetNew(nil)
		app.QTabWidgetSetTabsClosable(tabs, true)
		app.QTabWidgetSetMovable(tabs, true)
		app.QTabWidgetSetTabPosition(tabs, 0)

		page1 := app.QWidgetNew(nil)
		vbox1 := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout(page1, (*qt6.QLayout)(unsafe.Pointer(vbox1)))
		lbl1 := app.QLabelNew3(MiqtStr("Content of Tab 1"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox1)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QTabWidgetAddTab(tabs, page1, MiqtStr("General"))

		page2 := app.QWidgetNew(nil)
		vbox2 := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout(page2, (*qt6.QLayout)(unsafe.Pointer(vbox2)))
		cb1 := app.QCheckBoxNew3(MiqtStr("Enable feature A"))
		cb2 := app.QCheckBoxNew3(MiqtStr("Enable feature B"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox2)), (*qt6.QWidget)(unsafe.Pointer(cb1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox2)), (*qt6.QWidget)(unsafe.Pointer(cb2)))
		app.QTabWidgetAddTab(tabs, page2, MiqtStr("Settings"))

		page3 := app.QWidgetNew(nil)
		vbox3 := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout(page3, (*qt6.QLayout)(unsafe.Pointer(vbox3)))
		te := app.QTextEditNew(nil)
		app.QTextEditSetPlainText(te, MiqtStr("Log output here..."))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox3)), (*qt6.QWidget)(unsafe.Pointer(te)))
		app.QTabWidgetAddTab(tabs, page3, MiqtStr("Log"))

		tabLabel := app.QLabelNew3(MiqtStr("Current tab: 0"))
		tabCb := windows.NewCallback(func(index uintptr) uintptr {
			idx := int32(index)
			app.QLabelSetText(tabLabel, MiqtStr(fmt.Sprintf("Current tab: %d", idx)))
			return 0
		})
		app.QTabWidgetConnectCurrentChanged(tabs, int(tabCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(tabs)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(tabLabel)))
	})
}
