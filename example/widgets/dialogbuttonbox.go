package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewDialogButtonBoxCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QDialogButtonBox",
		"Standard buttons, orientation, clicked, accepted/rejected",
		func() { ShowDialogButtonBoxDemo(app) })
}

func ShowDialogButtonBoxDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QDialogButtonBox - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		bbox1 := app.QDialogButtonBoxNew4(0x00400800)
		okBtn := app.QDialogButtonBoxButton(bbox1, 0x00000400)
		cancelBtn := app.QDialogButtonBoxButton(bbox1, 0x00400000)
		_ = okBtn
		_ = cancelBtn

		bbox2 := app.QDialogButtonBoxNew4(0x02001800)
		saveBtn := app.QDialogButtonBoxButton(bbox2, 0x00000800)
		discardBtn := app.QDialogButtonBoxButton(bbox2, 0x00001000)
		cancelBtn2 := app.QDialogButtonBoxButton(bbox2, 0x00400000)
		_ = saveBtn
		_ = discardBtn
		_ = cancelBtn2

		bbox3 := app.QDialogButtonBoxNew4(0x00004001)
		yesBtn := app.QDialogButtonBoxButton(bbox3, 0x00004000)
		noBtn := app.QDialogButtonBoxButton(bbox3, 0x00000001)
		_ = yesBtn
		_ = noBtn

		clickLabel := app.QLabelNew3(MiqtStr("Clicked: -"))
		clickCb := windows.NewCallback(func(button uintptr) uintptr {
			btn := (*qt6.QPushButton)(unsafe.Pointer(button))
			text := app.QAbstractButtonText((*qt6.QAbstractButton)(unsafe.Pointer(btn)))
			app.QLabelSetText(clickLabel, MiqtStr(fmt.Sprintf("Clicked: %s", MiqtStringToString(text))))
			return 0
		})
		app.QDialogButtonBoxConnectClicked(bbox1, int(clickCb))
		app.QDialogButtonBoxConnectClicked(bbox2, int(clickCb))
		app.QDialogButtonBoxConnectClicked(bbox3, int(clickCb))

		acceptLabel := app.QLabelNew3(MiqtStr(""))
		acceptCb := windows.NewCallback(func() uintptr {
			app.QLabelSetText(acceptLabel, MiqtStr("Accepted!"))
			return 0
		})
		app.QDialogButtonBoxConnectAccepted(bbox1, int(acceptCb))

		rejectCb := windows.NewCallback(func() uintptr {
			app.QLabelSetText(acceptLabel, MiqtStr("Rejected!"))
			return 0
		})
		app.QDialogButtonBoxConnectRejected(bbox1, int(rejectCb))

		ctrlLayout := app.QHBoxLayoutNew2()
		centerBtn := app.QPushButtonNew3(MiqtStr("Toggle CenterButtons"))
		centerCb := windows.NewCallback(func(checked uintptr) uintptr {
			c := app.QDialogButtonBoxCenterButtons(bbox1)
			app.QDialogButtonBoxSetCenterButtons(bbox1, !c)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(centerBtn)), int(centerCb))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(centerBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: OK/Cancel | Save/Discard/Cancel | Yes/No | Clicked signal | Accepted/Rejected | CenterButtons | StandardButtons"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(bbox1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(bbox2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(bbox3)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(clickLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(acceptLabel)))
	})
}
