package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewGroupBoxCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QGroupBox",
		"Checkable, flat, alignment, title, toggled signal",
		func() { ShowGroupBoxDemo(app) })
}

func ShowGroupBoxDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QGroupBox - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		gb1 := app.QGroupBoxNew3(MiqtStr("Normal GroupBox"))
		vbox1 := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(gb1)), (*qt6.QLayout)(unsafe.Pointer(vbox1)))
		cb1 := app.QCheckBoxNew3(MiqtStr("Option A"))
		cb2 := app.QCheckBoxNew3(MiqtStr("Option B"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox1)), (*qt6.QWidget)(unsafe.Pointer(cb1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox1)), (*qt6.QWidget)(unsafe.Pointer(cb2)))

		gb2 := app.QGroupBoxNew3(MiqtStr("Checkable GroupBox"))
		app.QGroupBoxSetCheckable(gb2, true)
		app.QGroupBoxSetChecked(gb2, true)
		vbox2 := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(gb2)), (*qt6.QLayout)(unsafe.Pointer(vbox2)))
		rb1 := app.QRadioButtonNew3(MiqtStr("Radio 1"))
		rb2 := app.QRadioButtonNew3(MiqtStr("Radio 2"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox2)), (*qt6.QWidget)(unsafe.Pointer(rb1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox2)), (*qt6.QWidget)(unsafe.Pointer(rb2)))

		gb3 := app.QGroupBoxNew3(MiqtStr("Flat GroupBox"))
		app.QGroupBoxSetFlat(gb3, true)
		vbox3 := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(gb3)), (*qt6.QLayout)(unsafe.Pointer(vbox3)))
		le := app.QLineEditNew3(MiqtStr("Inside flat group"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox3)), (*qt6.QWidget)(unsafe.Pointer(le)))

		toggleLabel := app.QLabelNew3(MiqtStr("Checkable GB: enabled"))
		gb2Cb := windows.NewCallback(func(checked uintptr) uintptr {
			if app.QGroupBoxIsChecked(gb2) {
				app.QLabelSetText(toggleLabel, MiqtStr("Checkable GB: enabled"))
			} else {
				app.QLabelSetText(toggleLabel, MiqtStr("Checkable GB: disabled"))
			}
			return 0
		})
		app.QGroupBoxConnectToggled(gb2, int(gb2Cb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(gb1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(gb2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(toggleLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(gb3)))
	})
}
