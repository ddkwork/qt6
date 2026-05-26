package main

import (
	"fmt"
	"runtime"
	"unsafe"

	"github.com/ddkwork/qt6"
	"github.com/ddkwork/qt6/example/widgets"
	"golang.org/x/sys/windows"
)

func main() {
	runtime.LockOSThread()

	app := &qt6.Qt6{}

	argc := int32(0)
	app.QApplicationNew(&argc, nil)

	window := app.QWidgetNew(nil)
	app.QWidgetSetWindowTitle(window, widgets.MiqtStr("Qt6 Widgets Gallery - Card Preview"))
	app.QWidgetResize(window, 1200, 900)

	scrollArea := app.QScrollAreaNew2()
	app.QScrollAreaSetWidgetResizable(scrollArea, true)

	container := app.QWidgetNew(nil)
	containerLayout := app.QVBoxLayoutNew2()
	widgets.QWidgetSetLayout(app, container, containerLayout)

	gridLayout := app.QGridLayoutNew2()
	widgets.QBoxLayoutAddLayout(app, containerLayout, gridLayout)

	cards := []func(app *qt6.Qt6, grid *qt6.QGridLayout, row, col int){
		widgets.NewPushButtonCard,
		widgets.NewCheckBoxCard,
		widgets.NewRadioButtonCard,
		widgets.NewCommandLinkButtonCard,
		widgets.NewLineEditCard,
		widgets.NewLabelCard,
		widgets.NewComboBoxCard,
		widgets.NewSpinBoxCard,
		widgets.NewDoubleSpinBoxCard,
		widgets.NewFontComboBoxCard,
		widgets.NewSliderCard,
		widgets.NewScrollBarCard,
		widgets.NewProgressBarCard,
		widgets.NewTextEditCard,
		widgets.NewPlainTextEditCard,
		widgets.NewTextBrowserCard,
		widgets.NewDialCard,
		widgets.NewLCDNumberCard,
		widgets.NewDateEditCard,
		widgets.NewTimeEditCard,
		widgets.NewDateTimeEditCard,
		widgets.NewGroupBoxCard,
		widgets.NewFrameCard,
		widgets.NewTabWidgetCard,
		widgets.NewTabBarCard,
		widgets.NewStackedWidgetCard,
		widgets.NewToolBoxCard,
		widgets.NewToolButtonCard,
		widgets.NewToolBarCard,
		widgets.NewListWidgetCard,
		widgets.NewTableWidgetCard,
		widgets.NewTreeWidgetCard,
		widgets.NewColumnViewCard,
		widgets.NewFocusFrameCard,
		widgets.NewGraphicsViewCard,
		widgets.NewHeaderViewCard,
		widgets.NewKeySequenceEditCard,
		widgets.NewMainWindowCard,
		widgets.NewDockWidgetCard,
		widgets.NewMdiAreaCard,
		widgets.NewMenuBarCard,
		widgets.NewStatusBarCard,
		widgets.NewSplitterCard,
		widgets.NewDialogButtonBoxCard,
		widgets.NewCalendarWidgetCard,
		widgets.NewButtonGroupCard,
		widgets.NewMessageBoxCard,
		widgets.NewProgressDialogCard,
		widgets.NewInputDialogCard,
		widgets.NewColorDialogCard,
		widgets.NewFontDialogCard,
		widgets.NewFileDialogCard,
		widgets.NewErrorMessageCard,
		widgets.NewRubberBandCard,
		widgets.NewSystemTrayIconCard,
		widgets.NewWizardCard,
	}

	cols := 4
	for i, cardFn := range cards {
		row := i / cols
		col := i % cols
		cardFn(app, gridLayout, row, col)
	}

	stretch := app.QSpacerItemNew4(0, 0, 0, 7)
	widgets.QBoxLayoutAddSpacerItem(app, containerLayout, stretch)

	app.QScrollAreaSetWidget(scrollArea, container)

	mainLayout := app.QVBoxLayoutNew2()
	widgets.QWidgetSetLayout(app, window, mainLayout)

	titleLabel := app.QLabelNew3(widgets.MiqtStr("<h2>Qt6 Widgets Gallery</h2><p>Click 'Show All Features' to open a dialog demonstrating all behaviors and interactions for each widget.</p>"))
	app.QLabelSetTextFormat(titleLabel, 1)
	app.QLabelSetWordWrap(titleLabel, true)
	widgets.QBoxLayoutAddWidget(app, mainLayout, titleLabel)

	searchLayout := app.QHBoxLayoutNew2()
	searchLabel := app.QLabelNew3(widgets.MiqtStr("Search:"))
	searchEdit := app.QLineEditNew3(widgets.MiqtStr(""))
	app.QLineEditSetPlaceholderText(searchEdit, widgets.MiqtStr("Type to filter cards (e.g. dock, button, dialog...)"))
	searchCb := windows.NewCallback(func(text uintptr) uintptr {
		widgets.FilterCards(app, widgets.MiqtStringToString(*(*qt6.Miqt_string)(unsafe.Pointer(text))))
		return 0
	})
	app.QLineEditConnectTextChanged(searchEdit, int(searchCb))
	widgets.QBoxLayoutAddWidget(app, searchLayout, searchLabel)
	widgets.QBoxLayoutAddWidget(app, searchLayout, searchEdit)
	widgets.QBoxLayoutAddLayout(app, mainLayout, searchLayout)

	widgets.QBoxLayoutAddWidget(app, mainLayout, scrollArea)

	app.QWidgetShow(window)

	ret := app.QApplicationExec()
	fmt.Printf("exec returned: %d\n", ret)
}
