package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewColorDialogCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QColorDialog",
		"Color picker, custom colors, standard colors, alpha",
		func() { ShowColorDialogDemo(app) })
}

func ShowColorDialogDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QColorDialog - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		colorPreview := app.QLabelNew3(MiqtStr("  Selected Color  "))
		colorObj := app.QColorNew3(100, 149, 237)
		palette := app.QWidgetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)))
		app.QPaletteSetColor2(palette, 0, colorObj)
		app.QWidgetSetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)), palette)
		app.QWidgetSetAutoFillBackground((*qt6.QWidget)(unsafe.Pointer(colorPreview)), true)
		app.QLabelSetAlignment(colorPreview, 0x0084)
		app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(colorPreview)), 300, 60)

		colorInfoLabel := app.QLabelNew3(MiqtStr("Color: RGB(100, 149, 237)"))
		app.QLabelSetWordWrap(colorInfoLabel, true)

		ctrlLayout := app.QHBoxLayoutNew2()

		pickBtn := app.QPushButtonNew3(MiqtStr("Pick Color"))
		pickCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QColorDialogNew3(colorObj)
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				selected := app.QColorDialogSelectedColor(dlg)
				r := app.QColorRed(selected)
				g := app.QColorGreen(selected)
				b := app.QColorBlue(selected)
				palette := app.QWidgetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)))
				app.QPaletteSetColor2(palette, 0, selected)
				app.QWidgetSetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)), palette)
				app.QLabelSetText(colorInfoLabel, MiqtStr(fmt.Sprintf("Color: RGB(%d, %d, %d)", r, g, b)))
				colorObj = selected
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(pickBtn)), int(pickCb))

		redBtn := app.QPushButtonNew3(MiqtStr("Red"))
		redCb := windows.NewCallback(func(checked uintptr) uintptr {
			c := app.QColorNew3(255, 0, 0)
			palette := app.QWidgetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)))
			app.QPaletteSetColor2(palette, 0, c)
			app.QWidgetSetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)), palette)
			app.QLabelSetText(colorInfoLabel, MiqtStr("Color: RGB(255, 0, 0)"))
			colorObj = c
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(redBtn)), int(redCb))

		greenBtn := app.QPushButtonNew3(MiqtStr("Green"))
		greenCb := windows.NewCallback(func(checked uintptr) uintptr {
			c := app.QColorNew3(0, 180, 0)
			palette := app.QWidgetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)))
			app.QPaletteSetColor2(palette, 0, c)
			app.QWidgetSetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)), palette)
			app.QLabelSetText(colorInfoLabel, MiqtStr("Color: RGB(0, 180, 0)"))
			colorObj = c
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(greenBtn)), int(greenCb))

		blueBtn := app.QPushButtonNew3(MiqtStr("Blue"))
		blueCb := windows.NewCallback(func(checked uintptr) uintptr {
			c := app.QColorNew3(0, 0, 255)
			palette := app.QWidgetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)))
			app.QPaletteSetColor2(palette, 0, c)
			app.QWidgetSetPalette((*qt6.QWidget)(unsafe.Pointer(colorPreview)), palette)
			app.QLabelSetText(colorInfoLabel, MiqtStr("Color: RGB(0, 0, 255)"))
			colorObj = c
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(blueBtn)), int(blueCb))

		customCountBtn := app.QPushButtonNew3(MiqtStr("Custom Colors: 0"))
		customCountCb := windows.NewCallback(func(checked uintptr) uintptr {
			cnt := app.QColorDialogCustomCount()
			app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(customCountBtn)), MiqtStr(fmt.Sprintf("Custom Colors: %d", cnt)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(customCountBtn)), int(customCountCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(pickBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(redBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(greenBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(blueBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(customCountBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Color picker | CurrentColor | SelectedColor | CustomColor | StandardColor | ColorPreview | RGB values | CustomCount"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(colorPreview)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(colorInfoLabel)))
	})
}
