package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewSystemTrayIconCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QSystemTrayIcon",
		"System tray, context menu, tooltip, show message",
		func() { ShowSystemTrayIconDemo(app) })
}

func ShowSystemTrayIconDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QSystemTrayIcon - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		infoLabel := app.QLabelNew3(MiqtStr("QSystemTrayIcon provides an icon in the system tray with context menu and notifications."))
		app.QLabelSetWordWrap(infoLabel, true)

		available := app.QSystemTrayIconIsSystemTrayAvailable()
		supportsMsg := app.QSystemTrayIconSupportsMessages()

		statusLabel := app.QLabelNew3(MiqtStr(fmt.Sprintf("System tray available: %v | Supports messages: %v", available, supportsMsg)))
		app.QLabelSetWordWrap(statusLabel, true)

		trayIcon := app.QSystemTrayIconNew()
		pixmap := app.QPixmapNew2(16, 16)
		painter := app.QPainterNew2((*qt6.QPaintDevice)(unsafe.Pointer(pixmap)))
		colorObj := app.QColorNew3(0, 170, 0)
		app.QPainterFillRect5(painter, 0, 0, 16, 16, (*qt6.QColor)(unsafe.Pointer(colorObj)))
		app.QPainterDelete(painter)
		icon := app.QIconNew2(pixmap)
		app.QPixmapDelete(pixmap)
		app.QSystemTrayIconSetIcon(trayIcon, icon)
		app.QSystemTrayIconSetToolTip(trayIcon, MiqtStr("Qt6 Demo Tray Icon"))

		menu := app.QMenuNew(nil)
		showAction := app.QActionNew2(MiqtStr("Show Message"))
		hideAction := app.QActionNew2(MiqtStr("Hide Tray Icon"))
		quitAction := app.QActionNew2(MiqtStr("Quit"))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(showAction)))
		app.QMenuAddSeparator(menu)
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(hideAction)))
		app.QWidgetAddAction((*qt6.QWidget)(unsafe.Pointer(menu)), (*qt6.QAction)(unsafe.Pointer(quitAction)))
		app.QSystemTrayIconSetContextMenu(trayIcon, menu)

		activatedLabel := app.QLabelNew3(MiqtStr("Activated: -"))
		activatedCb := windows.NewCallback(func(reason uintptr) uintptr {
			names := map[int32]string{1: "Context", 2: "DoubleClick", 3: "Trigger", 4: "MiddleClick"}
			name := "Unknown"
			if n, ok := names[int32(reason)]; ok {
				name = n
			}
			app.QLabelSetText(activatedLabel, MiqtStr(fmt.Sprintf("Activated: %s", name)))
			return 0
		})
		app.QSystemTrayIconConnectActivated(trayIcon, int(activatedCb))

		messageClickedLabel := app.QLabelNew3(MiqtStr("Message clicked: -"))
		msgClickedCb := windows.NewCallback(func() uintptr {
			app.QLabelSetText(messageClickedLabel, MiqtStr("Message clicked!"))
			return 0
		})
		app.QSystemTrayIconConnectMessageClicked(trayIcon, int(msgClickedCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		showTrayBtn := app.QPushButtonNew3(MiqtStr("Show Tray Icon"))
		showTrayCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QSystemTrayIconShow(trayIcon)
			app.QLabelSetText(statusLabel, MiqtStr("Tray icon visible: true"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(showTrayBtn)), int(showTrayCb))

		hideTrayBtn := app.QPushButtonNew3(MiqtStr("Hide Tray Icon"))
		hideTrayCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QSystemTrayIconHide(trayIcon)
			app.QLabelSetText(statusLabel, MiqtStr("Tray icon visible: false"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(hideTrayBtn)), int(hideTrayCb))

		messageBtn := app.QPushButtonNew3(MiqtStr("Show Message"))
		messageCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QSystemTrayIconShowMessage2(trayIcon, MiqtStr("Qt6 Demo"), MiqtStr("This is a system tray notification message!"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(messageBtn)), int(messageCb))

		tooltipBtn := app.QPushButtonNew3(MiqtStr("Change Tooltip"))
		tooltipCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QSystemTrayIconSetToolTip(trayIcon, MiqtStr(fmt.Sprintf("Updated tooltip %d", app.QSystemTrayIconToolTip(trayIcon).Len)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(tooltipBtn)), int(tooltipCb))

		visibleBtn := app.QPushButtonNew3(MiqtStr("Toggle Visible"))
		visibleCb := windows.NewCallback(func(checked uintptr) uintptr {
			vis := app.QSystemTrayIconIsVisible(trayIcon)
			app.QSystemTrayIconSetVisible(trayIcon, !vis)
			app.QLabelSetText(statusLabel, MiqtStr(fmt.Sprintf("Tray icon visible: %v", !vis)))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(visibleBtn)), int(visibleCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(showTrayBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(hideTrayBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(messageBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(tooltipBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(visibleBtn)))

		featuresLabel := app.QLabelNew3(MiqtStr("Features: Show/Hide | ContextMenu | ToolTip | ShowMessage | Activated signal | MessageClicked | IsSystemTrayAvailable | SupportsMessages | SetIcon | SetVisible"))
		app.QLabelSetWordWrap(featuresLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(featuresLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(statusLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(activatedLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(messageClickedLabel)))
	})
}
