package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewCommandLinkButtonCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QCommandLinkButton",
		"Vista-style command link with description, arrow icon",
		func() { ShowCommandLinkButtonDemo(app) })
}

func ShowCommandLinkButtonDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QCommandLinkButton - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		btn1 := app.QCommandLinkButtonNew4(MiqtStr("Install"), MiqtStr("Install the application to your computer"))
		btn2 := app.QCommandLinkButtonNew4(MiqtStr("Repair"), MiqtStr("Repair the existing installation"))
		btn3 := app.QCommandLinkButtonNew4(MiqtStr("Uninstall"), MiqtStr("Remove the application from your computer"))
		btn4 := app.QCommandLinkButtonNew4(MiqtStr("Update"), MiqtStr("Check for and install updates"))
		app.QWidgetSetEnabled((*qt6.QWidget)(unsafe.Pointer(btn4)), false)

		clickLabel := app.QLabelNew3(MiqtStr("Last clicked: -"))
		makeClickCb := func(name string) int {
			return int(windows.NewCallback(func(checked uintptr) uintptr {
				app.QLabelSetText(clickLabel, MiqtStr(fmt.Sprintf("Last clicked: %s", name)))
				return 0
			}))
		}
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn1)), makeClickCb("Install"))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn2)), makeClickCb("Repair"))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn3)), makeClickCb("Uninstall"))

		descBtn := app.QPushButtonNew3(MiqtStr("Change Description"))
		descCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QCommandLinkButtonSetDescription(btn1, MiqtStr("Custom description updated!"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(descBtn)), int(descCb))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Command link style | Description text | Arrow icon | Disabled state | Dynamic description change"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(btn1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(btn2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(btn3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(btn4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(descBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(clickLabel)))
	})
}
