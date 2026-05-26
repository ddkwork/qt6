package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewKeySequenceEditCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QKeySequenceEdit",
		"Keyboard shortcut input, clear button, editing finished",
		func() { ShowKeySequenceEditDemo(app) })
}

func ShowKeySequenceEditDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QKeySequenceEdit - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		edit1 := app.QKeySequenceEditNew(nil)
		app.QKeySequenceEditSetClearButtonEnabled(edit1, true)

		edit2 := app.QKeySequenceEditNew(nil)
		app.QKeySequenceEditSetMaximumSequenceLength(edit2, 1)
		app.QKeySequenceEditSetClearButtonEnabled(edit2, true)

		changeLabel := app.QLabelNew3(MiqtStr("KeySequence changed: -"))
		changeCb := windows.NewCallback(func(ks uintptr) uintptr {
			seq := (*qt6.QKeySequence)(unsafe.Pointer(ks))
			s := app.QKeySequenceToString(seq)
			app.QLabelSetText(changeLabel, MiqtStr(fmt.Sprintf("KeySequence changed: %s", MiqtStringToString(s))))
			return 0
		})
		app.QKeySequenceEditConnectKeySequenceChanged(edit1, int(changeCb))

		finishedLabel := app.QLabelNew3(MiqtStr("Editing finished: -"))
		finishedCb := windows.NewCallback(func() uintptr {
			seq := app.QKeySequenceEditKeySequence(edit1)
			s := app.QKeySequenceToString(seq)
			app.QLabelSetText(finishedLabel, MiqtStr(fmt.Sprintf("Editing finished: %s", MiqtStringToString(s))))
			return 0
		})
		app.QKeySequenceEditConnectEditingFinished(edit1, int(finishedCb))

		ctrlLayout := app.QHBoxLayoutNew2()

		clearBtn := app.QPushButtonNew3(MiqtStr("Clear"))
		clearCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QKeySequenceEditClear(edit1)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(clearBtn)), int(clearCb))

		clearBtn2 := app.QPushButtonNew3(MiqtStr("Clear Single"))
		clearCb2 := windows.NewCallback(func(checked uintptr) uintptr {
			app.QKeySequenceEditClear(edit2)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(clearBtn2)), int(clearCb2))

		toggleClearBtn := app.QPushButtonNew3(MiqtStr("ClearBtn: ON"))
		toggleClearCb := windows.NewCallback(func(checked uintptr) uintptr {
			enabled := app.QKeySequenceEditIsClearButtonEnabled(edit1)
			app.QKeySequenceEditSetClearButtonEnabled(edit1, !enabled)
			if !enabled {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(toggleClearBtn)), MiqtStr("ClearBtn: ON"))
			} else {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(toggleClearBtn)), MiqtStr("ClearBtn: OFF"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(toggleClearBtn)), int(toggleClearCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(clearBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(clearBtn2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(toggleClearBtn)))

		formLayout := app.QFormLayoutNew(nil)
		app.QFormLayoutAddRow3(formLayout, MiqtStr("Full shortcut:"), (*qt6.QWidget)(unsafe.Pointer(edit1)))
		app.QFormLayoutAddRow3(formLayout, MiqtStr("Single key:"), (*qt6.QWidget)(unsafe.Pointer(edit2)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: KeySequence input | ClearButton | MaximumSequenceLength | KeySequenceChanged | EditingFinished | Clear"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(formLayout)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(changeLabel)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(finishedLabel)))
	})
}
