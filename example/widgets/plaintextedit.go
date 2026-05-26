package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewPlainTextEditCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QPlainTextEdit",
		"Plain text, line wrap, read-only, undo/redo, zoom, find",
		func() { ShowPlainTextEditDemo(app) })
}

func ShowPlainTextEditDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QPlainTextEdit - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		editor := app.QPlainTextEditNew3(MiqtStr("Line 1: Hello World\nLine 2: QPlainTextEdit Demo\nLine 3: Plain text only\nLine 4: No rich text\nLine 5: Multiple lines"))
		app.QPlainTextEditSetLineWrapMode(editor, 1)
		app.QPlainTextEditSetTabStopDistance(editor, 40.0)
		app.QPlainTextEditSetCursorWidth(editor, 2)

		ctrlLayout := app.QHBoxLayoutNew2()

		roBtn := app.QPushButtonNew3(MiqtStr("Toggle ReadOnly"))
		roCb := windows.NewCallback(func(checked uintptr) uintptr {
			ro := app.QPlainTextEditIsReadOnly(editor)
			app.QPlainTextEditSetReadOnly(editor, !ro)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(roBtn)), int(roCb))

		wrapBtn := app.QPushButtonNew3(MiqtStr("Toggle Wrap"))
		wrapCb := windows.NewCallback(func(checked uintptr) uintptr {
			mode := app.QPlainTextEditLineWrapMode(editor)
			if mode == 0 {
				app.QPlainTextEditSetLineWrapMode(editor, 1)
			} else {
				app.QPlainTextEditSetLineWrapMode(editor, 0)
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(wrapBtn)), int(wrapCb))

		undoBtn := app.QPushButtonNew3(MiqtStr("Undo"))
		undoCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QPlainTextEditUndo(editor)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(undoBtn)), int(undoCb))

		redoBtn := app.QPushButtonNew3(MiqtStr("Redo"))
		redoCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QPlainTextEditRedo(editor)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(redoBtn)), int(redoCb))

		zoomInBtn := app.QPushButtonNew3(MiqtStr("Zoom In"))
		zoomInCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QPlainTextEditZoomIn(editor)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(zoomInBtn)), int(zoomInCb))

		zoomOutBtn := app.QPushButtonNew3(MiqtStr("Zoom Out"))
		zoomOutCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QPlainTextEditZoomOut(editor)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(zoomOutBtn)), int(zoomOutCb))

		clearBtn := app.QPushButtonNew3(MiqtStr("Clear"))
		clearCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QPlainTextEditClear(editor)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(clearBtn)), int(clearCb))

		appendBtn := app.QPushButtonNew3(MiqtStr("Append"))
		appendCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QPlainTextEditAppendPlainText(editor, MiqtStr(fmt.Sprintf("Appended line %d", app.QPlainTextEditBlockCount(editor))))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(appendBtn)), int(appendCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(roBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(wrapBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(undoBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(redoBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(zoomInBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(zoomOutBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(clearBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(appendBtn)))

		blockLabel := app.QLabelNew3(MiqtStr("Block count: 5"))
		blockCb := windows.NewCallback(func(count uintptr) uintptr {
			app.QLabelSetText(blockLabel, MiqtStr(fmt.Sprintf("Block count: %d", int32(count))))
			return 0
		})
		app.QPlainTextEditConnectBlockCountChanged(editor, int(blockCb))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Plain text | Line wrap | ReadOnly | Undo/Redo | Zoom In/Out | Append | Clear | Block count | Tab stop | Cursor width"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(editor)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(blockLabel)))
	})
}
