package widgets

import (
	"unsafe"

	"github.com/ddkwork/qt6"
)

func NewLabelCard(app *qt6.Qt6, gridLayout *qt6.QGridLayout, row, col int) {
	NewCard(app, gridLayout, row, col, "QLabel",
		"Plain text, HTML, alignment, word wrap, indent, margin",
		func() { ShowLabelDemo(app) })
}

func ShowLabelDemo(app *qt6.Qt6) {
	OpenDemoDialog(app, "QLabel - All Features", func(dialog *qt6.QDialog, dlgLayout *qt6.QVBoxLayout) {
		lbl1 := app.QLabelNew3(MiqtStr("Plain text label"))
		app.QLabelSetAlignment(lbl1, 1)

		lbl2 := app.QLabelNew3(MiqtStr("<h3>HTML Label</h3><p>Supports <b>bold</b>, <i>italic</i>, <u>underline</u></p>"))
		app.QLabelSetTextFormat(lbl2, 1)
		app.QLabelSetWordWrap(lbl2, true)

		lbl3 := app.QLabelNew3(MiqtStr("Center aligned label with indent"))
		app.QLabelSetAlignment(lbl3, 4)
		app.QLabelSetIndent(lbl3, 20)

		lbl4 := app.QLabelNew3(MiqtStr("Right aligned with word wrap enabled - this long text demonstrates wrapping behavior in QLabel"))
		app.QLabelSetAlignment(lbl4, 2)
		app.QLabelSetWordWrap(lbl4, true)

		lbl5 := app.QLabelNew3(MiqtStr("Label with margin"))
		app.QLabelSetMargin(lbl5, 15)
		app.QFrameSetFrameStyle((*qt6.QFrame)(unsafe.Pointer(lbl5)), 6)
		app.QFrameSetLineWidth((*qt6.QFrame)(unsafe.Pointer(lbl5)), 1)

		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl1)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl2)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl3)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl4)))
		app.QBoxLayoutAddWidget((*qt6.QBoxLayout)(unsafe.Pointer(dlgLayout)), (*qt6.QWidget)(unsafe.Pointer(lbl5)))
	})
}
