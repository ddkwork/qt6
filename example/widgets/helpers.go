package widgets

import (
	"fmt"
	"strings"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

var cardIndex int

type cardEntry struct {
	widget *qt6.QWidget
	title  string
}

var AllCards []cardEntry

func MiqtStr(s string) qt6.Miqt_string {
	buf := make([]byte, len(s)+1)
	copy(buf, s)
	return qt6.Miqt_string{
		Len:  uintptr(len(s)),
		Data: (*int8)(unsafe.Pointer(&buf[0])),
	}
}

func MiqtStringToString(s qt6.Miqt_string) string {
	if s.Data == nil || s.Len == 0 {
		return ""
	}
	b := make([]byte, s.Len)
	for i := uintptr(0); i < s.Len; i++ {
		b[i] = *(*uint8)(unsafe.Pointer(uintptr(unsafe.Pointer(s.Data)) + i))
	}
	return string(b)
}

func MiqtArrayFromStrings(items []string) qt6.Miqt_array {
	if len(items) == 0 {
		return qt6.Miqt_array{}
	}
	ms := make([]qt6.Miqt_string, len(items))
	for i, s := range items {
		buf := make([]byte, len(s)+1)
		copy(buf, s)
		ms[i] = qt6.Miqt_string{
			Len:  uintptr(len(s)),
			Data: (*int8)(unsafe.Pointer(&buf[0])),
		}
	}
	return qt6.Miqt_array{
		Len:  uintptr(len(ms)),
		Data: unsafe.Pointer(&ms[0]),
	}
}

func As[T any](ptr unsafe.Pointer) *T {
	return (*T)(ptr)
}

func QBoxLayoutAddWidget[L any, W any](app *qt6.Qt6, layout L, widget W) {
	app.QBoxLayoutAddWidget(As[qt6.QBoxLayout](*(*unsafe.Pointer)(unsafe.Pointer(&layout))), As[qt6.QWidget](*(*unsafe.Pointer)(unsafe.Pointer(&widget))))
}

func QBoxLayoutAddLayout[L any, C any](app *qt6.Qt6, parent L, child C) {
	app.QBoxLayoutAddLayout(As[qt6.QBoxLayout](*(*unsafe.Pointer)(unsafe.Pointer(&parent))), As[qt6.QLayout](*(*unsafe.Pointer)(unsafe.Pointer(&child))))
}

func QBoxLayoutAddSpacerItem[L any](app *qt6.Qt6, layout L, spacer *qt6.QSpacerItem) {
	app.QBoxLayoutAddSpacerItem(As[qt6.QBoxLayout](*(*unsafe.Pointer)(unsafe.Pointer(&layout))), spacer)
}

func QWidgetSetLayout[W any, L any](app *qt6.Qt6, widget W, layout L) {
	app.QWidgetSetLayout(As[qt6.QWidget](*(*unsafe.Pointer)(unsafe.Pointer(&widget))), As[qt6.QLayout](*(*unsafe.Pointer)(unsafe.Pointer(&layout))))
}

func NewCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int, title, desc string, demoFn func()) uintptr {
	cardIndex++
	displayTitle := fmt.Sprintf("%d. %s", cardIndex, title)
	card := app.QGroupBoxNew3(MiqtStr(displayTitle))
	cardLayout := app.QVBoxLayoutNew2()
	app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(card)), (*qt6.QLayout)(unsafe.Pointer(cardLayout)))

	descLabel := app.QLabelNew3(MiqtStr(desc))
	app.QLabelSetWordWrap(descLabel, true)
	app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(cardLayout)), (*qt6.QWidget)(unsafe.Pointer(descLabel)))

	stretch := app.QSpacerItemNew4(0, 0, 0, 7)
	app.QBoxLayoutAddSpacerItem((*qt6.QBoxLayout)(unsafe.Pointer(cardLayout)), stretch)

	btn := app.QPushButtonNew3(MiqtStr("Show All Features"))
	app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(cardLayout)), (*qt6.QWidget)(unsafe.Pointer(btn)))

	clickCb := windows.NewCallback(func(checked uintptr) uintptr {
		demoFn()
		return 0
	})
	app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(btn)), int(clickCb))

	app.QWidgetSetFixedSize2((*qt6.QWidget)(unsafe.Pointer(card)), 250, 150)
	app.QGridLayoutAddWidget2(gridLayout, (*qt6.QWidget)(unsafe.Pointer(card)), int32(row), int32(col))

	AllCards = append(AllCards, cardEntry{widget: (*qt6.QWidget)(unsafe.Pointer(card)), title: displayTitle})

	return uintptr(unsafe.Pointer(card))
}

func OpenDemoDialog(app *qt6.Qt6, title string, buildContent func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout)) {
	dialog := app.QDialogNew(nil)
	app.QWidgetResize((*qt6.QWidget)(unsafe.Pointer(dialog)), 900, 650)
	app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dialog)), MiqtStr(title))

	dlgLayout := app.QVBoxLayoutNew2()
	app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(dialog)), (*qt6.QLayout)(unsafe.Pointer(dlgLayout)))

	buildContent(dialog, dlgLayout)

	closeBtn := app.QPushButtonNew3(MiqtStr("Close"))
	closeCb := windows.NewCallback(func(checked uintptr) uintptr {
		app.QDialogAccept(dialog)
		return 0
	})
	app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(closeBtn)), int(closeCb))
	app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(closeBtn)))

	app.QDialogExec(dialog)
}

func FilterCards(app *qt6.Qt6, keyword string) {
	k := strings.ToLower(keyword)
	for _, c := range AllCards {
		if k == "" || strings.Contains(strings.ToLower(c.title), k) {
			app.QWidgetShow(c.widget)
		} else {
			app.QWidgetHide(c.widget)
		}
	}
}

func StatusIcon(app *qt6.Qt6, color int32) *qt6.QIcon {
	pixmap := app.QPixmapNew2(16, 16)
	painter := app.QPainterNew2((*qt6.QPaintDevice)(unsafe.Pointer(pixmap)))
	r := (color >> 16) & 0xFF
	g := (color >> 8) & 0xFF
	b := color & 0xFF
	colorObj := app.QColorNew3(int32(r), int32(g), int32(b))
	app.QPainterFillRect5(painter, 0, 0, 16, 16, (*qt6.QColor)(unsafe.Pointer(colorObj)))
	app.QPainterDelete(painter)
	icon := app.QIconNew2(pixmap)
	app.QPixmapDelete(pixmap)
	return icon
}
