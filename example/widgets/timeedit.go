package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewTimeEditCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QTimeEdit",
		"Time editing, display format, 12/24h, wrapping",
		func() { ShowTimeEditDemo(app) })
}

func ShowTimeEditDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QTimeEdit - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		timeEdit := app.QTimeEditNew(nil)
		app.QDateTimeEditSetDisplayFormat((*qt6.QDateTimeEdit)(unsafe.Pointer(timeEdit)), MiqtStr("HH:mm:ss"))

		timeEdit2 := app.QTimeEditNew(nil)
		app.QDateTimeEditSetDisplayFormat((*qt6.QDateTimeEdit)(unsafe.Pointer(timeEdit2)), MiqtStr("hh:mm:ss AP"))
		app.QAbstractSpinBoxSetWrapping((*qt6.QAbstractSpinBox)(unsafe.Pointer(timeEdit2)), true)

		valueLabel := app.QLabelNew3(MiqtStr("Time: -"))
		timeCb := windows.NewCallback(func(time uintptr) uintptr {
			t := (*qt6.QTime)(unsafe.Pointer(time))
			h := app.QTimeHour(t)
			m := app.QTimeMinute(t)
			s := app.QTimeSecond(t)
			app.QLabelSetText(valueLabel, MiqtStr(fmt.Sprintf("Time: %02d:%02d:%02d", h, m, s)))
			return 0
		})
		app.QDateTimeEditConnectTimeChanged((*qt6.QDateTimeEdit)(unsafe.Pointer(timeEdit)), int(timeCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		nowBtn := app.QPushButtonNew3(MiqtStr("Set Now"))
		nowCb := windows.NewCallback(func(checked uintptr) uintptr {
			t := app.QTimeCurrentTime()
			app.QDateTimeEditSetTime((*qt6.QDateTimeEdit)(unsafe.Pointer(timeEdit)), t)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(nowBtn)), int(nowCb))

		wrapBtn := app.QPushButtonNew3(MiqtStr("Toggle Wrapping"))
		wrapCb := windows.NewCallback(func(checked uintptr) uintptr {
			w := app.QAbstractSpinBoxWrapping((*qt6.QAbstractSpinBox)(unsafe.Pointer(timeEdit)))
			app.QAbstractSpinBoxSetWrapping((*qt6.QAbstractSpinBox)(unsafe.Pointer(timeEdit)), !w)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(wrapBtn)), int(wrapCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(nowBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(wrapBtn)))

		formLayout := app.QFormLayoutNew(nil)
		app.QFormLayoutAddRow3(formLayout, MiqtStr("Time (24h):"), (*qt6.QWidget)(unsafe.Pointer(timeEdit)))
		app.QFormLayoutAddRow3(formLayout, MiqtStr("Time (12h):"), (*qt6.QWidget)(unsafe.Pointer(timeEdit2)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Time editing | 24h/12h format | Display format | Wrapping | TimeChanged signal | Set now"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(formLayout)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(valueLabel)))
	})
}
