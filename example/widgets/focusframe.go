package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewFocusFrameCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QFocusFrame",
		"Focus indicator around widgets, setWidget, event filter",
		func() { ShowFocusFrameDemo(app) })
}

func ShowFocusFrameDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QFocusFrame - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		focusFrame := app.QFocusFrameNew(nil)

		btn1 := app.QPushButtonNew3(MiqtStr("Button 1"))
		btn2 := app.QPushButtonNew3(MiqtStr("Button 2"))
		btn3 := app.QPushButtonNew3(MiqtStr("Button 3"))
		lineEdit := app.QLineEditNew(nil)
		app.QLineEditSetPlaceholderText(lineEdit, MiqtStr("Type here..."))

		infoLabel := app.QLabelNew3(MiqtStr("Focus frame is attached to: Button 1\nThe QFocusFrame widget draws a focus indicator around the target widget."))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QFocusFrameSetWidget(focusFrame, (*qt6.QWidget)(unsafe.Pointer(btn1)))

		clickCb := func(name string) int {
			return int(windows.NewCallback(func(checked uintptr) uintptr {
				app.QLabelSetText(infoLabel, MiqtStr(fmt.Sprintf("Focus frame is attached to: %s\nThe QFocusFrame widget draws a focus indicator around the target widget.", name)))
				return 0
			}))
		}
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn1)), clickCb("Button 1"))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn2)), clickCb("Button 2"))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn3)), clickCb("Button 3"))

		ctrlLayout := app.QHBoxLayoutNew2()

		attachBtn1 := app.QPushButtonNew3(MiqtStr("Attach to Btn1"))
		attachCb1 := windows.NewCallback(func(checked uintptr) uintptr {
			app.QFocusFrameSetWidget(focusFrame, (*qt6.QWidget)(unsafe.Pointer(btn1)))
			app.QLabelSetText(infoLabel, MiqtStr("Focus frame is attached to: Button 1"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(attachBtn1)), int(attachCb1))

		attachBtn2 := app.QPushButtonNew3(MiqtStr("Attach to Btn2"))
		attachCb2 := windows.NewCallback(func(checked uintptr) uintptr {
			app.QFocusFrameSetWidget(focusFrame, (*qt6.QWidget)(unsafe.Pointer(btn2)))
			app.QLabelSetText(infoLabel, MiqtStr("Focus frame is attached to: Button 2"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(attachBtn2)), int(attachCb2))

		attachLE := app.QPushButtonNew3(MiqtStr("Attach to LineEdit"))
		attachCbLE := windows.NewCallback(func(checked uintptr) uintptr {
			app.QFocusFrameSetWidget(focusFrame, (*qt6.QWidget)(unsafe.Pointer(lineEdit)))
			app.QLabelSetText(infoLabel, MiqtStr("Focus frame is attached to: LineEdit"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(attachLE)), int(attachCbLE))

		widgetLabel := app.QLabelNew3(MiqtStr("Current target widget: Button 1"))
		widgetCb := windows.NewCallback(func(checked uintptr) uintptr {
			w := app.QFocusFrameWidget(focusFrame)
			if w == (*qt6.QWidget)(unsafe.Pointer(btn1)) {
				app.QLabelSetText(widgetLabel, MiqtStr("Current target widget: Button 1"))
			} else if w == (*qt6.QWidget)(unsafe.Pointer(btn2)) {
				app.QLabelSetText(widgetLabel, MiqtStr("Current target widget: Button 2"))
			} else if w == (*qt6.QWidget)(unsafe.Pointer(lineEdit)) {
				app.QLabelSetText(widgetLabel, MiqtStr("Current target widget: LineEdit"))
			} else {
				app.QLabelSetText(widgetLabel, MiqtStr("Current target widget: unknown"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(attachBtn1)), int(widgetCb))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(attachBtn2)), int(widgetCb))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(attachLE)), int(widgetCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(attachBtn1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(attachBtn2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(attachLE)))

		btnLayout := app.QHBoxLayoutNew2()
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(btn1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(btn2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(btn3)))

		featuresLabel := app.QLabelNew3(MiqtStr("Features: SetWidget | Widget | Focus indicator | Event filter | Attach to any widget"))
		app.QLabelSetWordWrap(featuresLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(featuresLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(btnLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lineEdit)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(widgetLabel)))
	})
}
