package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewMessageBoxCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QMessageBox",
		"Information, warning, critical, question, standard buttons",
		func() { ShowMessageBoxDemo(app) })
}

func ShowMessageBoxDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QMessageBox - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		resultLabel := app.QLabelNew3(MiqtStr("Last result: -"))
		app.QLabelSetWordWrap(resultLabel, true)

		ctrlLayout := app.QGridLayoutNew2()

		infoBtn := app.QPushButtonNew3(MiqtStr("Information"))
		infoCb := windows.NewCallback(func(checked uintptr) uintptr {
			msgBox := app.QMessageBoxNew3(1, MiqtStr("Information"), MiqtStr("This is an informational message box."))
			app.QMessageBoxSetStandardButtons(msgBox, 0x00000400)
			app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(msgBox)))
			app.QLabelSetText(resultLabel, MiqtStr("Last result: Information closed"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(infoBtn)), int(infoCb))

		warningBtn := app.QPushButtonNew3(MiqtStr("Warning"))
		warningCb := windows.NewCallback(func(checked uintptr) uintptr {
			msgBox := app.QMessageBoxNew3(2, MiqtStr("Warning"), MiqtStr("This is a warning message box."))
			app.QMessageBoxSetStandardButtons(msgBox, 0x00400800)
			app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(msgBox)))
			app.QLabelSetText(resultLabel, MiqtStr("Last result: Warning closed"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(warningBtn)), int(warningCb))

		criticalBtn := app.QPushButtonNew3(MiqtStr("Critical"))
		criticalCb := windows.NewCallback(func(checked uintptr) uintptr {
			msgBox := app.QMessageBoxNew3(3, MiqtStr("Critical"), MiqtStr("This is a critical error message box."))
			app.QMessageBoxSetStandardButtons(msgBox, 0x00000400)
			app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(msgBox)))
			app.QLabelSetText(resultLabel, MiqtStr("Last result: Critical closed"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(criticalBtn)), int(criticalCb))

		questionBtn := app.QPushButtonNew3(MiqtStr("Question"))
		questionCb := windows.NewCallback(func(checked uintptr) uintptr {
			msgBox := app.QMessageBoxNew3(4, MiqtStr("Question"), MiqtStr("Do you want to proceed?"))
			app.QMessageBoxSetStandardButtons(msgBox, 0x00004001)
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(msgBox)))
			if ret == 0x00004000 {
				app.QLabelSetText(resultLabel, MiqtStr("Last result: Question -> Yes"))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Last result: Question -> No"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(questionBtn)), int(questionCb))

		aboutBtn := app.QPushButtonNew3(MiqtStr("About"))
		aboutCb := windows.NewCallback(func(checked uintptr) uintptr {
			msgBox := app.QMessageBoxNew(nil)
			app.QMessageBoxSetWindowTitle(msgBox, MiqtStr("About"))
			app.QMessageBoxSetText(msgBox, MiqtStr("QMessageBox Demo v1.0\n\nA demonstration of all QMessageBox features."))
			app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(msgBox)))
			app.QLabelSetText(resultLabel, MiqtStr("Last result: About closed"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(aboutBtn)), int(aboutCb))

		customBtn := app.QPushButtonNew3(MiqtStr("Custom Buttons"))
		customCb := windows.NewCallback(func(checked uintptr) uintptr {
			msgBox := app.QMessageBoxNew(nil)
			app.QMessageBoxSetWindowTitle(msgBox, MiqtStr("Custom"))
			app.QMessageBoxSetText(msgBox, MiqtStr("This message box has custom buttons."))
			app.QMessageBoxAddButton2(msgBox, MiqtStr("Save && Continue"), 2)
			app.QMessageBoxAddButton2(msgBox, MiqtStr("Discard"), 4)
			app.QMessageBoxAddButton2(msgBox, MiqtStr("Cancel"), 1)
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(msgBox)))
			clicked := app.QMessageBoxClickedButton(msgBox)
			if clicked != nil {
				text := app.QAbstractButtonText((*qt6.QAbstractButton)(unsafe.Pointer(clicked)))
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Last result: Custom -> %s (ret=%d)", MiqtStringToString(text), ret)))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Last result: Custom (ret=%d)", ret)))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(customBtn)), int(customCb))

		detailedBtn := app.QPushButtonNew3(MiqtStr("With Details"))
		detailedCb := windows.NewCallback(func(checked uintptr) uintptr {
			msgBox := app.QMessageBoxNew3(2, MiqtStr("Error Details"), MiqtStr("An error occurred during operation."))
			app.QMessageBoxSetDetailedText(msgBox, MiqtStr("Stack trace:\n  at main() line 42\n  at process() line 18\n  at execute() line 7\n\nError code: 0x80070005"))
			app.QMessageBoxSetStandardButtons(msgBox, 0x00400800)
			app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(msgBox)))
			app.QLabelSetText(resultLabel, MiqtStr("Last result: Detailed closed"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(detailedBtn)), int(detailedCb))

		informativeBtn := app.QPushButtonNew3(MiqtStr("Informative Text"))
		informativeCb := windows.NewCallback(func(checked uintptr) uintptr {
			msgBox := app.QMessageBoxNew3(1, MiqtStr("Update Available"), MiqtStr("A new version is available."))
			app.QMessageBoxSetInformativeText(msgBox, MiqtStr("Version 2.0 includes bug fixes and performance improvements. Do you want to update now?"))
			app.QMessageBoxSetStandardButtons(msgBox, 0x00004001)
			app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(msgBox)))
			app.QLabelSetText(resultLabel, MiqtStr("Last result: Informative closed"))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(informativeBtn)), int(informativeCb))

		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(infoBtn)), 0, 0)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(warningBtn)), 0, 1)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(criticalBtn)), 0, 2)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(questionBtn)), 0, 3)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(aboutBtn)), 1, 0)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(customBtn)), 1, 1)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(detailedBtn)), 1, 2)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(informativeBtn)), 1, 3)

		infoLabel := app.QLabelNew3(MiqtStr("Features: Information | Warning | Critical | Question | About | Custom buttons | DetailedText | InformativeText | StandardButtons | ClickedButton"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(resultLabel)))
	})
}
