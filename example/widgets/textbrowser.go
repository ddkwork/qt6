package widgets

import (
	"fmt"
	"unsafe"

	"github.com/ddkwork/qt6"
	"golang.org/x/sys/windows"
)

func NewTextBrowserCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QTextBrowser",
		"Rich text, HTML, anchors, back/forward, open links",
		func() { ShowTextBrowserDemo(app) })
}

func ShowTextBrowserDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QTextBrowser - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		browser := app.QTextBrowserNew(nil)
		app.QTextBrowserSetOpenExternalLinks(browser, true)
		app.QTextBrowserSetOpenLinks(browser, true)

		html := `<h2>QTextBrowser Demo</h2>
<p>This is a <b>rich text</b> browser with HTML support.</p>
<ul>
<li><a href="#section1">Go to Section 1</a></li>
<li><a href="#section2">Go to Section 2</a></li>
<li><a href="https://www.qt.io">External Link (Qt)</a></li>
</ul>
<hr>
<a name="section1"><h3>Section 1</h3></a>
<p>This is section 1 content. You can navigate using the Back/Forward buttons.</p>
<p>Features include:</p>
<ol>
<li>HTML rendering</li>
<li>Anchor navigation</li>
<li>Back/Forward history</li>
<li>External link opening</li>
</ol>
<a name="section2"><h3>Section 2</h3></a>
<p>This is section 2 content. Try clicking the links above and using the navigation buttons.</p>
<table border="1"><tr><td>Cell 1</td><td>Cell 2</td></tr><tr><td>Cell 3</td><td>Cell 4</td></tr></table>`
		app.QTextEditSetHtml((*qt6.QTextEdit)(unsafe.Pointer(browser)), MiqtStr(html))

		ctrlLayout := app.QHBoxLayoutNew2()

		backBtn := app.QPushButtonNew3(MiqtStr("Back"))
		backCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTextBrowserBackward(browser)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(backBtn)), int(backCb))

		forwardBtn := app.QPushButtonNew3(MiqtStr("Forward"))
		forwardCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTextBrowserForward(browser)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(forwardBtn)), int(forwardCb))

		homeBtn := app.QPushButtonNew3(MiqtStr("Home"))
		homeCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTextBrowserHome(browser)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(homeBtn)), int(homeCb))

		reloadBtn := app.QPushButtonNew3(MiqtStr("Reload"))
		reloadCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTextBrowserReload(browser)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(reloadBtn)), int(reloadCb))

		clearHistBtn := app.QPushButtonNew3(MiqtStr("Clear History"))
		clearHistCb := windows.NewCallback(func(checked uintptr) uintptr {
			app.QTextBrowserClearHistory(browser)
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(clearHistBtn)), int(clearHistCb))

		extLinksBtn := app.QPushButtonNew3(MiqtStr("ExtLinks: ON"))
		extLinksCb := windows.NewCallback(func(checked uintptr) uintptr {
			open := app.QTextBrowserOpenExternalLinks(browser)
			app.QTextBrowserSetOpenExternalLinks(browser, !open)
			if !open {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(extLinksBtn)), MiqtStr("ExtLinks: ON"))
			} else {
				app.QAbstractButtonSetText((*qt6.QAbstractButton)(unsafe.Pointer(extLinksBtn)), MiqtStr("ExtLinks: OFF"))
			}
			return 0
		})
		app.QAbstractButtonConnectClicked((*qt6.QAbstractButton)(unsafe.Pointer(extLinksBtn)), int(extLinksCb))

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(backBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(forwardBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(homeBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(reloadBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(clearHistBtn)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(ctrlLayout)), (*qt6.QWidget)(unsafe.Pointer(extLinksBtn)))

		historyLabel := app.QLabelNew3(MiqtStr("Back: 0 | Forward: 0"))
		histCb := windows.NewCallback(func(checked uintptr) uintptr {
			back := app.QTextBrowserBackwardHistoryCount(browser)
			fwd := app.QTextBrowserForwardHistoryCount(browser)
			app.QLabelSetText(historyLabel, MiqtStr(fmt.Sprintf("Back: %d | Forward: %d", back, fwd)))
			return 0
		})
		app.QTextBrowserConnectHistoryChanged(browser, int(histCb))

		infoLabel := app.QLabelNew3(MiqtStr("Features: HTML rendering | Anchor navigation | Back/Forward | History | Open external links | Reload | Clear history"))
		app.QLabelSetWordWrap(infoLabel, true)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(infoLabel)))
		app.QBoxLayoutAddLayout((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QLayout)(unsafe.Pointer(ctrlLayout)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(browser)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(historyLabel)))
	})
}
