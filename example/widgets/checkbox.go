package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewCheckBoxCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QCheckBox",
		"Unchecked, checked, tristate, with icon, state tracking",
		func() { ShowCheckBoxDemo(app) })
}

func ShowCheckBoxDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QCheckBox - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		cb1 := app.QCheckBoxNew3(MiqtStr("Unchecked"))
		cb2 := app.QCheckBoxNew3(MiqtStr("Checked"))
		app.QAbstractButtonSetChecked((*qt6.QAbstractButton)(unsafe.Pointer(cb2)), true)
		cb3 := app.QCheckBoxNew3(MiqtStr("Tristate"))
		app.QCheckBoxSetTristateWithBool(cb3, true)
		cb4 := app.QCheckBoxNew3(MiqtStr("Disabled"))
		app.QWidgetSetEnabled((*qt6.QWidget)(unsafe.Pointer(cb4)), false)

		stateLabel := app.QLabelNew3(MiqtStr("Tristate state: Unchecked (0)"))
		cb3Cb := windows.NewCallback(func(state uintptr) uintptr {
			s := int32(state)
			var desc string
			switch s {
			case 0:
				desc = "Unchecked (0)"
			case 1:
				desc = "PartiallyChecked (1)"
			case 2:
				desc = "Checked (2)"
			default:
				desc = fmt.Sprintf("Unknown (%d)", s)
			}
			app.QLabelSetText(stateLabel, MiqtStr("Tristate state: "+desc))
			return 0
		})
		app.QCheckBoxConnectStateChanged(cb3, int(cb3Cb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(cb1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(cb2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(cb3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(cb4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(stateLabel)))
	})
}
