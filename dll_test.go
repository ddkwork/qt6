package qt6

import (
	"testing"
)

var qt *Qt6

func TestMain(m *testing.M) {
	qt = &Qt6{}
	m.Run()
}

func TestTypesExist(t *testing.T) {
	var obj QObject
	var timer QTimer
	var app QCoreApplication
	t.Logf("Types exist: QObject=%T, QTimer=%T, QCoreApplication=%T", obj, timer, app)
}

func TestMiqtTypes(t *testing.T) {
	var ms Miqt_string
	t.Logf("Miqt_string{}: Len=%v Data=%v", ms.Len, ms.Data)

	var ma Miqt_array
	t.Logf("Miqt_array{}: Len=%v Data=%v", ma.Len, ma.Data)
}
