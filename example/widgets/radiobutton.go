package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
)

func NewRadioButtonCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QRadioButton",
		"Radio group, exclusive selection, checked state",
		func() { ShowRadioButtonDemo(app) })
}

func ShowRadioButtonDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QRadioButton - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		group1 := app.QGroupBoxNew3(MiqtStr("Group 1"))
		vbox1 := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(group1)), (*qt6.QLayout)(unsafe.Pointer(vbox1)))

		rb1 := app.QRadioButtonNew3(MiqtStr("Option A"))
		app.QAbstractButtonSetChecked((*qt6.QAbstractButton)(unsafe.Pointer(rb1)), true)
		rb2 := app.QRadioButtonNew3(MiqtStr("Option B"))
		rb3 := app.QRadioButtonNew3(MiqtStr("Option C"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox1)), (*qt6.QWidget)(unsafe.Pointer(rb1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox1)), (*qt6.QWidget)(unsafe.Pointer(rb2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox1)), (*qt6.QWidget)(unsafe.Pointer(rb3)))

		group2 := app.QGroupBoxNew3(MiqtStr("Group 2"))
		vbox2 := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(group2)), (*qt6.QLayout)(unsafe.Pointer(vbox2)))

		rb4 := app.QRadioButtonNew3(MiqtStr("Choice X"))
		rb5 := app.QRadioButtonNew3(MiqtStr("Choice Y"))
		app.QAbstractButtonSetChecked((*qt6.QAbstractButton)(unsafe.Pointer(rb5)), true)
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox2)), (*qt6.QWidget)(unsafe.Pointer(rb4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(vbox2)), (*qt6.QWidget)(unsafe.Pointer(rb5)))

		disabledRb := app.QRadioButtonNew3(MiqtStr("Disabled"))
		app.QWidgetSetEnabled((*qt6.QWidget)(unsafe.Pointer(disabledRb)), false)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(group1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(group2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(disabledRb)))
	})
}
