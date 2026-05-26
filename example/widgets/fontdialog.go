package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewFontDialogCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QFontDialog",
		"Font selection, style, size, weight, font preview",
		func() { ShowFontDialogDemo(app) })
}

func ShowFontDialogDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QFontDialog - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		previewLabel := app.QLabelNew3(MiqtStr("The quick brown fox jumps over the lazy dog.\n0123456789 ABCDEF abcdef"))
		app.QLabelSetWordWrap(previewLabel, true)

		fontInfoLabel := app.QLabelNew3(MiqtStr("Font: Arial, 12pt"))
		app.QLabelSetWordWrap(fontInfoLabel, true)

		ctrlLayout := app.QHBoxLayoutNew2()

		pickBtn := app.QPushButtonNew3(MiqtStr("Pick Font"))
		pickCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QFontDialogNew(nil)
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				font := app.QFontDialogSelectedFont(dlg)
				family := app.QFontFamily(font)
				size := app.QFontPointSize(font)
				weight := app.QFontWeight(font)
				italic := app.QFontItalic(font)
				bold := app.QFontBold(font)
				app.QWidgetSetFont((*qt6.QWidget)(unsafe.Pointer(previewLabel)), font)
				app.QLabelSetText(fontInfoLabel, MiqtStr(fmt.Sprintf("Font: %s, %dpt, weight=%d, italic=%v, bold=%v", MiqtStringToString(family), int(size), int(weight), italic, bold)))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(pickBtn)), int(pickCb))

		monospaceBtn := app.QPushButtonNew3(MiqtStr("Monospace"))
		monospaceCb := windows.NewCallback(func(checked uintptr) uintptr {
			font := app.QFontNew2(MiqtStr("Courier New"))
			app.QFontSetPointSize(font, 14)
			app.QWidgetSetFont((*qt6.QWidget)(unsafe.Pointer(previewLabel)), font)
			app.QLabelSetText(fontInfoLabel, MiqtStr("Font: Courier New, 14pt"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(monospaceBtn)), int(monospaceCb))

		serifBtn := app.QPushButtonNew3(MiqtStr("Serif"))
		serifCb := windows.NewCallback(func(checked uintptr) uintptr {
			font := app.QFontNew2(MiqtStr("Times New Roman"))
			app.QFontSetPointSize(font, 16)
			app.QFontSetItalic(font, true)
			app.QWidgetSetFont((*qt6.QWidget)(unsafe.Pointer(previewLabel)), font)
			app.QLabelSetText(fontInfoLabel, MiqtStr("Font: Times New Roman, 16pt, italic"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(serifBtn)), int(serifCb))

		sansBtn := app.QPushButtonNew3(MiqtStr("Sans-Serif"))
		sansCb := windows.NewCallback(func(checked uintptr) uintptr {
			font := app.QFontNew2(MiqtStr("Arial"))
			app.QFontSetPointSize(font, 18)
			app.QFontSetBold(font, true)
			app.QWidgetSetFont((*qt6.QWidget)(unsafe.Pointer(previewLabel)), font)
			app.QLabelSetText(fontInfoLabel, MiqtStr("Font: Arial, 18pt, bold"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(sansBtn)), int(sansCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(pickBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(monospaceBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(serifBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(sansBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Font picker | Family | Size | Weight | Italic | Bold | SelectedFont | CurrentFontChanged | FontSelected | Font preview"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(previewLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(fontInfoLabel)))
	})
}
