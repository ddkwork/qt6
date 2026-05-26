package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewDoubleSpinBoxCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QDoubleSpinBox",
		"Float values, prefix/suffix, decimals, range, step",
		func() { ShowDoubleSpinBoxDemo(app) })
}

func ShowDoubleSpinBoxDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QDoubleSpinBox - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		spin1 := app.QDoubleSpinBoxNew(nil)
		app.QDoubleSpinBoxSetRange(spin1, 0.0, 100.0)
		app.QDoubleSpinBoxSetValue(spin1, 50.0)
		app.QDoubleSpinBoxSetDecimals(spin1, 2)
		app.QDoubleSpinBoxSetPrefix(spin1, MiqtStr("$ "))
		app.QDoubleSpinBoxSetSuffix(spin1, MiqtStr(" USD"))

		spin2 := app.QDoubleSpinBoxNew(nil)
		app.QDoubleSpinBoxSetRange(spin2, -999.99, 999.99)
		app.QDoubleSpinBoxSetValue(spin2, 0.0)
		app.QDoubleSpinBoxSetDecimals(spin2, 3)
		app.QDoubleSpinBoxSetSingleStep(spin2, 0.001)

		spin3 := app.QDoubleSpinBoxNew(nil)
		app.QDoubleSpinBoxSetRange(spin3, 0.0, 1.0)
		app.QDoubleSpinBoxSetValue(spin3, 0.5)
		app.QDoubleSpinBoxSetDecimals(spin3, 4)
		app.QDoubleSpinBoxSetSingleStep(spin3, 0.01)
		app.QDoubleSpinBoxSetSuffix(spin3, MiqtStr(" (0~1)"))

		valueLabel := app.QLabelNew3(MiqtStr("Price value: $ 50.00 USD"))
		valueCb := windows.NewCallback(func(val uintptr) uintptr {
			v := *(*float64)(unsafe.Pointer(&val))
			app.QLabelSetText(valueLabel, MiqtStr(fmt.Sprintf("Price value: $ %.2f USD", v)))
			return 0
		})
		app.QDoubleSpinBoxConnectValueChanged(spin1, int(valueCb))

		textLabel := app.QLabelNew3(MiqtStr("Precision text: 0.000"))
		textCb := windows.NewCallback(func(text uintptr) uintptr {
			s := MiqtStringToString(*(*qt6.Miqt_string)(unsafe.Pointer(text)))
			app.QLabelSetText(textLabel, MiqtStr(fmt.Sprintf("Precision text: %s", s)))
			return 0
		})
		app.QDoubleSpinBoxConnectTextChanged(spin2, int(textCb))

		formLayout := app.QFormLayoutNew(nil)
		app.QFormLayoutAddRow3(formLayout, MiqtStr("Price:"), (*qt6.QWidget)(unsafe.Pointer(spin1)))
		app.QFormLayoutAddRow3(formLayout, MiqtStr("Precision:"), (*qt6.QWidget)(unsafe.Pointer(spin2)))
		app.QFormLayoutAddRow3(formLayout, MiqtStr("Ratio:"), (*qt6.QWidget)(unsafe.Pointer(spin3)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Float value | Prefix/Suffix | Decimals | Range | SingleStep | ValueChanged | TextChanged"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(formLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(valueLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(textLabel)))
	})
}
