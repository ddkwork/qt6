package qt6

import (
	"unsafe"
)

type (
	QWidget struct{} // sync_stubs.h:4 -> QWidget
)

func (q *Qt6) QWidgetSetContextMenuPolicy(Self *QWidget, Policy uint32) {
	getProc("QWidget_setContextMenuPolicy").Call(uintptr(unsafe.Pointer(Self)), uintptr(Policy))
}

func (q *Qt6) QWidgetSetContextMenuPolicy(Self *QWidget, Policy uint32) {
	getProc("QWidget_setContextMenuPolicy").Call(uintptr(unsafe.Pointer(Self)), uintptr(Policy))
}

func (q *Qt6) QWidgetSetContextMenuPolicy(Self *QWidget, Policy uint32) {
	getProc("QWidget_setContextMenuPolicy").Call(uintptr(unsafe.Pointer(Self)), uintptr(Policy))
}
