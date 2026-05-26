package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewButtonGroupCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QButtonGroup",
		"Exclusive selection, button IDs, checked signals",
		func() { ShowButtonGroupDemo(app) })
}

func ShowButtonGroupDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QButtonGroup - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		group1 := app.QButtonGroupNew()
		app.QButtonGroupSetExclusive(group1, true)

		radioLayout := app.QHBoxLayoutNew2()
		radioLabel := app.QLabelNew3(MiqtStr("Exclusive group:"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(radioLayout)), (*qt6.QWidget)(unsafe.Pointer(radioLabel)))

		radioNames := []string{"Option A", "Option B", "Option C"}
		for _, name := range radioNames {
			rb := app.QRadioButtonNew3(MiqtStr(name))
			app.QButtonGroupAddButton(group1, (*qt6.QAbstractButton)(unsafe.Pointer(rb)))
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(radioLayout)), (*qt6.QWidget)(unsafe.Pointer(rb)))
		}

		group2 := app.QButtonGroupNew2(nil)
		app.QButtonGroupSetExclusive(group2, false)

		checkLayout := app.QHBoxLayoutNew2()
		checkLabel := app.QLabelNew3(MiqtStr("Non-exclusive group:"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(checkLayout)), (*qt6.QWidget)(unsafe.Pointer(checkLabel)))

		checkNames := []string{"Feature X", "Feature Y", "Feature Z"}
		for i, name := range checkNames {
			cb := app.QCheckBoxNew3(MiqtStr(name))
			app.QButtonGroupAddButton2(group2, (*qt6.QAbstractButton)(unsafe.Pointer(cb)), int32(i+10))
			app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(checkLayout)), (*qt6.QWidget)(unsafe.Pointer(cb)))
		}

		infoLabel1 := app.QLabelNew3(MiqtStr("Exclusive selected: -"))
		buttonCb := windows.NewCallback(func(button uintptr) uintptr {
			btn := (*qt6.QAbstractButton)(unsafe.Pointer(button))
			text := app.QAbstractButtonText(btn)
			app.QLabelSetText(infoLabel1, MiqtStr(fmt.Sprintf("Exclusive selected: %s", MiqtStringToString(text))))
			return 0
		})
		app.QButtonGroupConnectButtonClicked(group1, int(buttonCb))

		infoLabel2 := app.QLabelNew3(MiqtStr("Non-exclusive toggled: -"))
		idCb := windows.NewCallback(func(id uintptr) uintptr {
			app.QLabelSetText(infoLabel2, MiqtStr(fmt.Sprintf("Non-exclusive toggled: ID=%d", int32(id))))
			return 0
		})
		app.QButtonGroupConnectIdToggled(group2, int(idCb))

		ctrlLayout := app.QHBoxLayoutNew2()
		exclBtn := app.QPushButtonNew3(MiqtStr("Toggle Exclusive G1"))
		exclCb := windows.NewCallback(func(checked uintptr) uintptr {
			e := app.QButtonGroupExclusive(group1)
			app.QButtonGroupSetExclusive(group1, !e)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(exclBtn)), int(exclCb))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(exclBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Exclusive group | Non-exclusive group | ButtonClicked | IdToggled | AddButton with ID | Toggle exclusive"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(radioLayout)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(checkLayout)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel2)))
	})
}
