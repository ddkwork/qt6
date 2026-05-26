package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewFileDialogCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QFileDialog",
		"Open/Save file, directory, filters, view mode, options",
		func() { ShowFileDialogDemo(app) })
}

func ShowFileDialogDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QFileDialog - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		resultLabel := app.QLabelNew3(MiqtStr("Selected: -"))
		app.QLabelSetWordWrap(resultLabel, true)

		ctrlLayout := app.QGridLayoutNew2()

		openBtn := app.QPushButtonNew3(MiqtStr("Open File"))
		openCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QFileDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Open File"))
			app.QFileDialogSetAcceptMode(dlg, 0)
			app.QFileDialogSetFileMode(dlg, 1)
			app.QFileDialogSetNameFilter(dlg, MiqtStr("All Files (*);;Text Files (*.txt);;Go Files (*.go)"))
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				files := app.QFileDialogSelectedFiles(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Selected: %d file(s) (Open)", files.Len)))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Open: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(openBtn)), int(openCb))

		saveBtn := app.QPushButtonNew3(MiqtStr("Save File"))
		saveCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QFileDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Save File"))
			app.QFileDialogSetAcceptMode(dlg, 1)
			app.QFileDialogSetFileMode(dlg, 0)
			app.QFileDialogSetNameFilter(dlg, MiqtStr("All Files (*);;Text Files (*.txt)"))
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				files := app.QFileDialogSelectedFiles(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Selected: %d file(s) (Save)", files.Len)))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Save: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(saveBtn)), int(saveCb))

		dirBtn := app.QPushButtonNew3(MiqtStr("Select Directory"))
		dirCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QFileDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Select Directory"))
			app.QFileDialogSetFileMode(dlg, 4)
			app.QFileDialogSetOption2(dlg, 2, true)
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				files := app.QFileDialogSelectedFiles(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Selected: %d dir(s)", files.Len)))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Directory: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(dirBtn)), int(dirCb))

		multiBtn := app.QPushButtonNew3(MiqtStr("Multi-Select"))
		multiCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QFileDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Select Files"))
			app.QFileDialogSetFileMode(dlg, 3)
			app.QFileDialogSetNameFilter(dlg, MiqtStr("All Files (*);;Images (*.png *.jpg *.bmp)"))
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				files := app.QFileDialogSelectedFiles(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Selected: %d file(s) (Multi)", files.Len)))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Multi: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(multiBtn)), int(multiCb))

		detailBtn := app.QPushButtonNew3(MiqtStr("Detail View"))
		detailCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QFileDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("Detail View"))
			app.QFileDialogSetViewMode(dlg, 1)
			app.QFileDialogSetNameFilter(dlg, MiqtStr("All Files (*)"))
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				files := app.QFileDialogSelectedFiles(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Selected: %d file(s) (Detail)", files.Len)))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Detail: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(detailBtn)), int(detailCb))

		filterBtn := app.QPushButtonNew3(MiqtStr("Multiple Filters"))
		filterCb := windows.NewCallback(func(checked uintptr) uintptr {
			dlg := app.QFileDialogNew(nil)
			app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(dlg)), MiqtStr("With Filters"))
			app.QFileDialogSetNameFilters(dlg, MiqtArrayFromStrings([]string{
				"Go Files (*.go)",
				"C++ Files (*.cpp *.h *.hpp)",
				"Text Files (*.txt *.md)",
				"All Files (*)",
			}))
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(dlg)))
			if ret == 1 {
				filter := app.QFileDialogSelectedNameFilter(dlg)
				app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("Selected filter: %s", MiqtStringToString(filter))))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Filter: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(filterBtn)), int(filterCb))

		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(openBtn)), 0, 0)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(saveBtn)), 0, 1)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(dirBtn)), 0, 2)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(multiBtn)), 1, 0)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(detailBtn)), 1, 1)
		app.QGridLayoutAddWidget2(ctrlLayout, (*qt6.QWidget)(unsafe.Pointer(filterBtn)), 1, 2)

		infoLabel := app.QLabelNew3(MiqtStr("Features: Open/Save | FileMode | AcceptMode | NameFilter | ViewMode | SelectedFiles | SelectedNameFilter | Directory selection | Multi-select | ShowDirsOnly"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(resultLabel)))
	})
}
