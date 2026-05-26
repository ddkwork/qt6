package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewDateEditCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QDateEdit",
		"Date editing, calendar popup, display format, range",
		func() { ShowDateEditDemo(app) })
}

func ShowDateEditDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QDateEdit - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		dateEdit := app.QDateEditNew(nil)
		app.QDateTimeEditSetCalendarPopup((*qt6.QDateTimeEdit)(unsafe.Pointer(dateEdit)), true)
		app.QDateTimeEditSetDisplayFormat((*qt6.QDateTimeEdit)(unsafe.Pointer(dateEdit)), MiqtStr("yyyy-MM-dd"))

		dateEdit2 := app.QDateEditNew(nil)
		app.QDateTimeEditSetDisplayFormat((*qt6.QDateTimeEdit)(unsafe.Pointer(dateEdit2)), MiqtStr("dd/MM/yyyy"))
		app.QAbstractSpinBoxSetWrapping((*qt6.QAbstractSpinBox)(unsafe.Pointer(dateEdit2)), true)

		valueLabel := app.QLabelNew3(MiqtStr("Date: -"))
		dateCb := windows.NewCallback(func(date uintptr) uintptr {
			d := (*qt6.QDate)(unsafe.Pointer(date))
			year := app.QDateYear(d)
			month := app.QDateMonth(d)
			day := app.QDateDay(d)
			app.QLabelSetText(valueLabel, MiqtStr(fmt.Sprintf("Date: %d-%02d-%02d", year, month, day)))
			return 0
		})
		app.QDateTimeEditConnectDateChanged((*qt6.QDateTimeEdit)(unsafe.Pointer(dateEdit)), int(dateCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		todayBtn := app.QPushButtonNew3(MiqtStr("Set Today"))
		todayCb := windows.NewCallback(func(checked uintptr) uintptr {
			date := app.QDateCurrentDate()
			app.QDateTimeEditSetDate((*qt6.QDateTimeEdit)(unsafe.Pointer(dateEdit)), date)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(todayBtn)), int(todayCb))

		popupBtn := app.QPushButtonNew3(MiqtStr("Toggle CalendarPopup"))
		popupCb := windows.NewCallback(func(checked uintptr) uintptr {
			vis := app.QDateTimeEditCalendarPopup((*qt6.QDateTimeEdit)(unsafe.Pointer(dateEdit)))
			app.QDateTimeEditSetCalendarPopup((*qt6.QDateTimeEdit)(unsafe.Pointer(dateEdit)), !vis)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(popupBtn)), int(popupCb))

		wrapBtn := app.QPushButtonNew3(MiqtStr("Toggle Wrapping"))
		wrapCb := windows.NewCallback(func(checked uintptr) uintptr {
			w := app.QAbstractSpinBoxWrapping((*qt6.QAbstractSpinBox)(unsafe.Pointer(dateEdit)))
			app.QAbstractSpinBoxSetWrapping((*qt6.QAbstractSpinBox)(unsafe.Pointer(dateEdit)), !w)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(wrapBtn)), int(wrapCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(todayBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(popupBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(wrapBtn)))

		formLayout := app.QFormLayoutNew(nil)
		app.QFormLayoutAddRow3(formLayout, MiqtStr("Date (yyyy-MM-dd):"), (*qt6.QWidget)(unsafe.Pointer(dateEdit)))
		app.QFormLayoutAddRow3(formLayout, MiqtStr("Date (dd/MM/yyyy):"), (*qt6.QWidget)(unsafe.Pointer(dateEdit2)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Date editing | Calendar popup | Display format | Wrapping | DateChanged signal | Set today"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(formLayout)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(valueLabel)))
	})
}
