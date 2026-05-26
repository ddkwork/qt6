package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewWizardCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QWizard",
		"Multi-step wizard, pages, fields, wizard style, options",
		func() { ShowWizardDemo(app) })
}

func ShowWizardDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QWizard - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		wizard := app.QWizardNew(nil)
		app.QWidgetResize((*qt6.QWidget)(unsafe.Pointer(wizard)), 700, 500)
		app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(wizard)), MiqtStr("Setup Wizard"))

		page1 := app.QWizardPageNew2()
		app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(page1)), MiqtStr("Welcome"))
		app.QWizardPageSetTitle(page1, MiqtStr("Welcome to the Setup Wizard"))
		app.QWizardPageSetSubTitle(page1, MiqtStr("This wizard will guide you through the setup process."))
		p1Layout := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(page1)), (*qt6.QLayout)(unsafe.Pointer(p1Layout)))
		p1Label := app.QLabelNew3(MiqtStr("Click Next to continue or Cancel to exit the wizard."))
		app.QLabelSetWordWrap(p1Label, true)
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(p1Layout)), (*qt6.QWidget)(unsafe.Pointer(p1Label)))

		page2 := app.QWizardPageNew2()
		app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(page2)), MiqtStr("License"))
		app.QWizardPageSetTitle(page2, MiqtStr("License Agreement"))
		app.QWizardPageSetSubTitle(page2, MiqtStr("Please read and accept the license agreement."))
		p2Layout := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(page2)), (*qt6.QLayout)(unsafe.Pointer(p2Layout)))
		p2Text := app.QPlainTextEditNew3(MiqtStr("This is a sample license agreement.\n\nBy clicking 'I Accept', you agree to the terms and conditions of this license.\n\n1. You may use this software for personal and commercial purposes.\n2. You may not redistribute this software without permission.\n3. The software is provided 'as is' without warranty."))
		app.QPlainTextEditSetReadOnly(p2Text, true)
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(p2Layout)), (*qt6.QWidget)(unsafe.Pointer(p2Text)))
		acceptCheck := app.QCheckBoxNew3(MiqtStr("I accept the license agreement"))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(p2Layout)), (*qt6.QWidget)(unsafe.Pointer(acceptCheck)))

		page3 := app.QWizardPageNew2()
		app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(page3)), MiqtStr("Configuration"))
		app.QWizardPageSetTitle(page3, MiqtStr("Configuration"))
		app.QWizardPageSetSubTitle(page3, MiqtStr("Configure your installation settings."))
		p3Layout := app.QFormLayoutNew(nil)
		app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(page3)), (*qt6.QLayout)(unsafe.Pointer(p3Layout)))
		p3Edit := app.QLineEditNew(nil)
		app.QFormLayoutAddRow3(p3Layout, MiqtStr("Installation Path:"), (*qt6.QWidget)(unsafe.Pointer(p3Edit)))
		p3Combo := app.QComboBoxNew(nil)
		app.QComboBoxAddItem(p3Combo, MiqtStr("Complete"))
		app.QComboBoxAddItem(p3Combo, MiqtStr("Minimal"))
		app.QComboBoxAddItem(p3Combo, MiqtStr("Custom"))
		app.QFormLayoutAddRow3(p3Layout, MiqtStr("Installation Type:"), (*qt6.QWidget)(unsafe.Pointer(p3Combo)))

		page4 := app.QWizardPageNew2()
		app.QWidgetSetWindowTitle((*qt6.QWidget)(unsafe.Pointer(page4)), MiqtStr("Complete"))
		app.QWizardPageSetTitle(page4, MiqtStr("Installation Complete"))
		app.QWizardPageSetSubTitle(page4, MiqtStr("The setup has been completed successfully."))
		p4Layout := app.QVBoxLayoutNew2()
		app.QWidgetSetLayout((*qt6.QWidget)(unsafe.Pointer(page4)), (*qt6.QLayout)(unsafe.Pointer(p4Layout)))
		p4Label := app.QLabelNew3(MiqtStr("Congratulations! The installation is complete.\n\nClick Finish to close the wizard."))
		app.QLabelSetWordWrap(p4Label, true)
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(p4Layout)), (*qt6.QWidget)(unsafe.Pointer(p4Label)))

		app.QWizardAddPage(wizard, page1)
		app.QWizardAddPage(wizard, page2)
		app.QWizardAddPage(wizard, page3)
		app.QWizardAddPage(wizard, page4)

		app.QWizardSetOption(wizard, 1)

		resultLabel := app.QLabelNew3(MiqtStr("Wizard result: Not started"))
		app.QLabelSetWordWrap(resultLabel, true)

		ctrlLayout := app.QHBoxLayoutNew2()

		execBtn := app.QPushButtonNew3(MiqtStr("Run Wizard"))
		execCb := windows.NewCallback(func(checked uintptr) uintptr {
			ret := app.QDialogExec((*qt6.QDialog)(unsafe.Pointer(wizard)))
			if ret == 1 {
				app.QLabelSetText(resultLabel, MiqtStr("Wizard result: Finished (Accepted)"))
			} else {
				app.QLabelSetText(resultLabel, MiqtStr("Wizard result: Cancelled"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(execBtn)), int(execCb))

		styleBtn := app.QPushButtonNew3(MiqtStr("Style: Classic"))
		styleCb := windows.NewCallback(func(checked uintptr) uintptr {
			style := app.QWizardWizardStyle(wizard)
			next := (style + 1) % 3
			app.QWizardSetWizardStyle(wizard, next)
			names := []string{"Classic", "Modern", "MacStyle"}
			app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(styleBtn)), MiqtStr(fmt.Sprintf("Style: %s", names[next])))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(styleBtn)), int(styleCb))

		optionsBtn := app.QPushButtonNew3(MiqtStr("Toggle Options"))
		optionsCb := windows.NewCallback(func(checked uintptr) uintptr {
			opts := app.QWizardOptions(wizard)
			if opts == 0 {
				app.QWizardSetOptions(wizard, 0x07)
				app.QLabelSetText(resultLabel, MiqtStr("Options: All enabled"))
			} else {
				app.QWizardSetOptions(wizard, 0)
				app.QLabelSetText(resultLabel, MiqtStr("Options: None"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(optionsBtn)), int(optionsCb))

		titleFmtBtn := app.QPushButtonNew3(MiqtStr("Toggle Title Fmt"))
		titleFmtCb := windows.NewCallback(func(checked uintptr) uintptr {
			current := app.QWizardTitleFormat(wizard)
			next := (current + 1) % 3
			app.QWizardSetTitleFormat(wizard, next)
			names := []string{"PlainText", "AutoText", "RichText"}
			app.QLabelSetText(resultLabel, MiqtStr(fmt.Sprintf("TitleFormat: %s", names[next])))
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(titleFmtBtn)), int(titleFmtCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(execBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(styleBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(optionsBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(titleFmtBtn)))

		infoLabel := app.QLabelNew3(MiqtStr("Features: Multiple pages | WizardPage | Title/SubTitle | WizardStyle | Options | TitleFormat | AddPage | SetPage | CurrentPage | VisitedIds | Fields"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(resultLabel)))
	})
}
