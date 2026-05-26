package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewComboBoxCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QComboBox",
		"Dropdown, editable, icons, current index tracking",
		func() { ShowComboBoxDemo(app) })
}

func ShowComboBoxDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QComboBox - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Standard dropdown:"))
		cb1 := app.QComboBoxNew(nil)
		app.QComboBoxAddItem(cb1, MiqtStr("Item 1"))
		app.QComboBoxAddItem(cb1, MiqtStr("Item 2"))
		app.QComboBoxAddItem(cb1, MiqtStr("Item 3"))
		app.QComboBoxSetCurrentIndex(cb1, 0)

		lbl2 := app.QLabelNew3(MiqtStr("Editable combobox:"))
		cb2 := app.QComboBoxNew(nil)
		app.QComboBoxAddItem(cb2, MiqtStr("Apple"))
		app.QComboBoxAddItem(cb2, MiqtStr("Banana"))
		app.QComboBoxAddItem(cb2, MiqtStr("Cherry"))
		app.QComboBoxSetEditable(cb2, true)

		lbl3 := app.QLabelNew3(MiqtStr("With icons:"))
		cb3 := app.QComboBoxNew(nil)
		iconGreen := StatusIcon(app, 0x00AA00)
		iconYellow := StatusIcon(app, 0xAAAA00)
		iconRed := StatusIcon(app, 0xAA0000)
		app.QComboBoxAddItem2(cb3, iconGreen, MiqtStr("Running"))
		app.QComboBoxAddItem2(cb3, iconYellow, MiqtStr("Idle"))
		app.QComboBoxAddItem2(cb3, iconRed, MiqtStr("Error"))

		currentLabel := app.QLabelNew3(MiqtStr("Current: Item 1"))
		cb1Cb := windows.NewCallback(func(index uintptr) uintptr {
			idx := int32(index)
			text := MiqtStringToString(app.QComboBoxItemText(cb1, idx))
			app.QLabelSetText(currentLabel, MiqtStr("Current: "+text))
			return 0
		})
		app.QComboBoxConnectCurrentIndexChanged(cb1, int(cb1Cb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(cb1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(currentLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(cb2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(cb3)))
	})
}
