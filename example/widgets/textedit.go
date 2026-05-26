package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewTextEditCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QTextEdit",
		"Rich text, HTML, read-only, undo/redo, text changed",
		func() { ShowTextEditDemo(app) })
}

func ShowTextEditDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QTextEdit - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Rich text editor:"))
		te1 := app.QTextEditNew(nil)
		app.QTextEditSetHtml(te1, MiqtStr("<h2>Rich Text</h2><p>Edit <b>bold</b>, <i>italic</i>, <u>underline</u></p><ul><li>Item 1</li><li>Item 2</li></ul>"))

		lbl2 := app.QLabelNew3(MiqtStr("Read-only:"))
		te2 := app.QTextEditNew(nil)
		app.QTextEditSetPlainText(te2, MiqtStr("This is read-only text.\nYou cannot edit this."))
		app.QTextEditSetReadOnly(te2, true)

		changeLabel := app.QLabelNew3(MiqtStr("Changes: 0"))
		changeCount := 0
		te1Cb := windows.NewCallback(func(text uintptr) uintptr {
			changeCount++
			app.QLabelSetText(changeLabel, MiqtStr(fmt.Sprintf("Changes: %d", changeCount)))
			return 0
		})
		app.QTextEditConnectTextChanged(te1, int(te1Cb))

		btnLayout := app.QHBoxLayoutNew2()
		undoBtn := app.QPushButtonNew3(MiqtStr("Undo"))
		redoBtn := app.QPushButtonNew3(MiqtStr("Redo"))
		clearBtn := app.QPushButtonNew3(MiqtStr("Clear"))

		undoCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTextEditUndo(te1)
			return 0
		})
		redoCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTextEditRedo(te1)
			return 0
		})
		clearCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTextEditClear(te1)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(undoBtn)), int(undoCb))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(redoBtn)), int(redoCb))
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(clearBtn)), int(clearCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(undoBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(redoBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(btnLayout)), (*qt6.QWidget)(unsafe.Pointer(clearBtn)))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(te1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(changeLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(btnLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(te2)))
	})
}
