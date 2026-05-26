package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewToolButtonCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QToolButton",
		"Popup mode, arrow type, auto-raise, menu, tool button style",
		func() { ShowToolButtonDemo(app) })
}

func ShowToolButtonDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QToolButton - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		row1 := app.QHBoxLayoutNew2()

		btn1 := app.QToolButtonNew(nil)
		app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(btn1)), MiqtStr("Normal"))
		app.QToolButtonSetToolButtonStyle(btn1, 2)

		btn2 := app.QToolButtonNew(nil)
		app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(btn2)), MiqtStr("AutoRaise"))
		app.QToolButtonSetAutoRaise(btn2, true)
		app.QToolButtonSetToolButtonStyle(btn2, 2)

		btn3 := app.QToolButtonNew(nil)
		app.QToolButtonSetArrowType(btn3, 1)
		app.QToolButtonSetToolButtonStyle(btn3, 3)

		btn4 := app.QToolButtonNew(nil)
		app.QToolButtonSetArrowType(btn4, 2)
		app.QToolButtonSetToolButtonStyle(btn4, 3)

		menu := app.QMenuNew(nil)
		opt1 := app.QActionNew2(MiqtStr("Option 1"))
		opt2 := app.QActionNew2(MiqtStr("Option 2"))
		opt3 := app.QActionNew2(MiqtStr("Option 3"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(opt1)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(opt2)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(opt3)))

		btn5 := app.QToolButtonNew(nil)
		app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(btn5)), MiqtStr("Menu Button"))
		app.QToolButtonSetMenu(btn5, menu)
		app.QToolButtonSetPopupMode(btn5, 1)
		app.QToolButtonSetToolButtonStyle(btn5, 2)

		btn6 := app.QToolButtonNew(nil)
		app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(btn6)), MiqtStr("Instant Popup"))
		app.QToolButtonSetMenu(btn6, app.QMenuNew(nil))
		menu2 := app.QMenuNew(nil)
		actA := app.QActionNew2(MiqtStr("Action A"))
		actB := app.QActionNew2(MiqtStr("Action B"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu2)), (*qt6.QAction)(unsafe.Pointer(actA)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu2)), (*qt6.QAction)(unsafe.Pointer(actB)))
		app.QToolButtonSetMenu(btn6, menu2)
		app.QToolButtonSetPopupMode(btn6, 0)
		app.QToolButtonSetToolButtonStyle(btn6, 2)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn5)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(row1)), (*qt6.QWidget)(unsafe.Pointer(btn6)))

		clickLabel := app.QLabelNew3(MiqtStr("Click info: -"))
		clickCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QLabelSetText(clickLabel, MiqtStr("Normal tool button clicked!"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn1)), int(clickCb))

		styleLabel := app.QLabelNew3(MiqtStr("ToolButtonStyle: TextBesideIcon"))
		styleBtn := app.QPushButtonNew3(MiqtStr("Cycle Style"))
		styleCb := windows.NewCallback(func(checked uintptr) uintptr {
			style := app.QToolButtonToolButtonStyle(btn1)
			next := (style + 1) % 4
			app.QToolButtonSetToolButtonStyle(btn1, next)
			names := []string{"IconOnly", "TextOnly", "TextBesideIcon", "TextUnderIcon"}
			app.QLabelSetText(styleLabel, MiqtStr(fmt.Sprintf("ToolButtonStyle: %s", names[next])))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(styleBtn)), int(styleCb))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Normal | AutoRaise | Arrow types | Popup modes (Delayed/Instant) | Menu | ToolButtonStyle cycle"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(row1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(styleBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(clickLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(styleLabel)))
	})
}
