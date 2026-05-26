package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewDateTimeEditCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QDateTimeEdit",
		"Date, time, calendar popup, display format, range",
		func() { ShowDateTimeEditDemo(app) })
}

func ShowDateTimeEditDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QDateTimeEdit - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Date/Time editor:"))
		dte1 := app.QDateTimeEditNew(nil)
		app.QDateTimeEditSetCalendarPopup(dte1, true)
		app.QDateTimeEditSetDisplayFormat(dte1, MiqtStr("yyyy-MM-dd HH:mm:ss"))

		lbl2 := app.QLabelNew3(MiqtStr("Date only:"))
		dte2 := app.QDateTimeEditNew(nil)
		app.QDateTimeEditSetCalendarPopup(dte2, true)
		app.QDateTimeEditSetDisplayFormat(dte2, MiqtStr("yyyy-MM-dd"))

		lbl3 := app.QLabelNew3(MiqtStr("Time only:"))
		dte3 := app.QDateTimeEditNew(nil)
		app.QDateTimeEditSetDisplayFormat(dte3, MiqtStr("HH:mm:ss"))

		changeLabel := app.QLabelNew3(MiqtStr("Selected: -"))
		dte1Cb := windows.NewCallback(func(datetime uintptr) uintptr {
			dt := app.QDateTimeEditDateTime(dte1)
			text := MiqtStringToString(app.QDateTimeEditTextFromDateTime(dte1, dt))
			app.QLabelSetText(changeLabel, MiqtStr("Selected: "+text))
			return 0
		})
		app.QDateTimeEditConnectDateTimeChanged(dte1, int(dte1Cb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(dte1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(changeLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(dte2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(dte3)))
	})
}
