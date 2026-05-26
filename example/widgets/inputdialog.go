package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewInputDialogCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QInputDialog",
		"Text, int, double, item input, combobox, echo mode",
		func() { ShowInputDialogDemo(app) })
}

func ShowInputDialogDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QInputDialog - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		resultLabel := app.QLabelNew3(MiqtStr("Result: -"))
		app.QLabelSetWordWrap(resultLabel, true)

		ctrlLayout := app.QGridLayoutNew2()

		textBtn := app.QPushButtonNew3(MiqtStr("Get Text"))
		textCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QInputDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Enter Text"))
			app.QInputDialogSetLabelText(dlg, MiqtStr("Please enter your name:"))
			app.QInputDialogSetInputMode(dlg, 0)
			app.QInputDialogSetTextValue(dlg, MiqtStr(""))
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				text := app.QInputDialogTextValue(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Result: Text = %s", MiqtStringToString(text))))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Result: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(textBtn)), int(textCb))

		intBtn := app.QPushButtonNew3(MiqtStr("Get Integer"))
		intCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QInputDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Enter Integer"))
			app.QInputDialogSetLabelText(dlg, MiqtStr("Please enter a number:"))
			app.QInputDialogSetInputMode(dlg, 1)
			app.QInputDialogSetIntValue(dlg, 50)
			app.QInputDialogSetIntRange(dlg, 0, 100)
			app.QInputDialogSetIntStep(dlg, 5)
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				val := app.QInputDialogIntValue(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Result: Integer = %d", val)))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Result: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(intBtn)), int(intCb))

		doubleBtn := app.QPushButtonNew3(MiqtStr("Get Double"))
		doubleCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QInputDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Enter Double"))
			app.QInputDialogSetLabelText(dlg, MiqtStr("Please enter a decimal number:"))
			app.QInputDialogSetInputMode(dlg, 2)
			app.QInputDialogSetDoubleValue(dlg, 3.14)
			app.QInputDialogSetDoubleRange(dlg, 0.0, 100.0)
			app.QInputDialogSetDoubleDecimals(dlg, 2)
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				val := app.QInputDialogDoubleValue(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Result: Double = %f", val)))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Result: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(doubleBtn)), int(doubleCb))

		itemBtn := app.QPushButtonNew3(MiqtStr("Get Item"))
		itemCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QInputDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Select Item"))
			app.QInputDialogSetLabelText(dlg, MiqtStr("Please select an item:"))
			app.QInputDialogSetInputMode(dlg, 0)
			app.QInputDialogSetComboBoxItems(dlg, MiqtArrayFromStrings([]string{"Apple", "Banana", "Cherry", "Date", "Elderberry"}))
			app.QInputDialogSetComboBoxEditable(dlg, true)
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				text := app.QInputDialogTextValue(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Result: Item = %s", MiqtStringToString(text))))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Result: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(itemBtn)), int(itemCb))

		passwordBtn := app.QPushButtonNew3(MiqtStr("Get Password"))
		passwordCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QInputDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Enter Password"))
			app.QInputDialogSetLabelText(dlg, MiqtStr("Please enter your password:"))
			app.QInputDialogSetInputMode(dlg, 0)
			app.QInputDialogSetTextEchoMode(dlg, 2)
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				text := app.QInputDialogTextValue(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Result: Password length = %d", len(MiqtStringToString(text)))))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Result: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(passwordBtn)), int(passwordCb))

		multiLineBtn := app.QPushButtonNew3(MiqtStr("Multi-line Text"))
		multiLineCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QInputDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Enter Text"))
			app.QInputDialogSetLabelText(dlg, MiqtStr("Enter multi-line text:"))
			app.QInputDialogSetInputMode(dlg, 0)
			app.QInputDialogSetTextValue(dlg, MiqtStr("Line 1\nLine 2\nLine 3"))
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				text := app.QInputDialogTextValue(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Result: Text = %s", MiqtStringToString(text))))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Result: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(multiLineBtn)), int(multiLineCb))

		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(textBtn)), 0, 0)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(intBtn)), 0, 1)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(doubleBtn)), 0, 2)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(itemBtn)), 1, 0)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(passwordBtn)), 1, 1)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(multiLineBtn)), 1, 2)

		infoLabel := app.QLabelNew3(MiqtStr("Features: Text input | Integer input | Double input | Item selection (ComboBox) | Password (EchoMode) | Multi-line | ComboBoxEditable | Range | Step | Decimals"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(resultLabel)))
	})
}
