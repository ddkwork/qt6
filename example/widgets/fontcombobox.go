package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewFontComboBoxCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QFontComboBox",
		"Font selection, current font tracking, font filters",
		func() { ShowFontComboBoxDemo(app) })
}

func ShowFontComboBoxDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QFontComboBox - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Select a font:"))
		fcb := app.QFontComboBoxNew(nil)

		previewLabel := app.QLabelNew3(MiqtStr("The quick brown fox jumps over the lazy dog"))
		app.QLabelSetWordWrap(previewLabel, true)

		fontCb := windows.NewCallback(func(font uintptr) uintptr {
			currentText := MiqtStringToString(app.QComboBoxCurrentText((*qt6.QComboBox)(unsafe.Pointer(fcb))))
			app.QLabelSetText(previewLabel, MiqtStr("Font: "+currentText+" - The quick brown fox jumps over the lazy dog"))
			return 0
		})
		app.QFontComboBoxConnectCurrentFontChanged(fcb, int(fontCb))

		lbl2 := app.QLabelNew3(MiqtStr("Scalable fonts only:"))
		fcb2 := app.QFontComboBoxNew(nil)
		app.QFontComboBoxSetFontFilters(fcb2, 1)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(fcb)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(previewLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(fcb2)))
	})
}
