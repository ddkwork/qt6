package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewCalendarWidgetCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QCalendarWidget",
		"Date selection, grid, navigation bar, min/max date, selection mode",
		func() { ShowCalendarWidgetDemo(app) })
}

func ShowCalendarWidgetDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QCalendarWidget - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		calendar := app.QCalendarWidgetNew(nil)
		app.QCalendarWidgetSetGridVisible(calendar, true)
		app.QCalendarWidgetSetNavigationBarVisible(calendar, true)
		app.QCalendarWidgetSetSelectionMode(calendar, 1)

		selectedLabel := app.QLabelNew3(MiqtStr("Selected date: -"))
		selectionCb := windows.NewCallback(func(date uintptr) uintptr {
			d := (*qt6.QDate)(unsafe.Pointer(date))
			year := app.QDateYear(d)
			month := app.QDateMonth(d)
			day := app.QDateDay(d)
			app.QLabelSetText(selectedLabel, MiqtStr(fmt.Sprintf("Selected date: %d-%02d-%02d", year, month, day)))
			return 0
		})
		app.QCalendarWidgetConnectSelectionChanged(calendar, int(selectionCb))

		clickedLabel := app.QLabelNew3(MiqtStr("Clicked date: -"))
		clickedCb := windows.NewCallback(func(date uintptr) uintptr {
			d := (*qt6.QDate)(unsafe.Pointer(date))
			year := app.QDateYear(d)
			month := app.QDateMonth(d)
			day := app.QDateDay(d)
			app.QLabelSetText(clickedLabel, MiqtStr(fmt.Sprintf("Clicked date: %d-%02d-%02d", year, month, day)))
			return 0
		})
		app.QCalendarWidgetConnectClicked(calendar, int(clickedCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		gridBtn := app.QPushButtonNew3(MiqtStr("Toggle Grid"))
		gridCb := windows.NewCallback(func(checked uintptr) uintptr {
			visible := app.QCalendarWidgetIsGridVisible(calendar)
			app.QCalendarWidgetSetGridVisible(calendar, !visible)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(gridBtn)), int(gridCb))

		navBtn := app.QPushButtonNew3(MiqtStr("Toggle NavBar"))
		navCb := windows.NewCallback(func(checked uintptr) uintptr {
			visible := app.QCalendarWidgetIsNavigationBarVisible(calendar)
			app.QCalendarWidgetSetNavigationBarVisible(calendar, !visible)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(navBtn)), int(navCb))

		todayBtn := app.QPushButtonNew3(MiqtStr("Show Today"))
		todayCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QCalendarWidgetShowToday(calendar)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(todayBtn)), int(todayCb))

		firstDayBtn := app.QPushButtonNew3(MiqtStr("First Day: Monday"))
		firstDayCb := windows.NewCallback(func(checked uintptr) uintptr {
			current := app.QCalendarWidgetFirstDayOfWeek(calendar)
			if current == 1 {
				app.QCalendarWidgetSetFirstDayOfWeek(calendar, 7)
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(firstDayBtn)), MiqtStr("First Day: Sunday"))
			} else {
				app.QCalendarWidgetSetFirstDayOfWeek(calendar, 1)
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(firstDayBtn)), MiqtStr("First Day: Monday"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(firstDayBtn)), int(firstDayCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(gridBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(navBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(todayBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(firstDayBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Date selection | Grid toggle | Navigation bar toggle | First day of week | Show today | Selection mode | Click/Select signals"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(calendar)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(selectedLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(clickedLabel)))
	})
}
