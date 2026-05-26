package gen

import (
	"testing"

	"github.com/ddkwork/bindgen/cpp2c"
)

func TestAllowClass_PrimitiveTypesAlwaysPass(t *testing.T) {
	primitives := []string{
		"bool", "char", "signed char", "unsigned char",
		"short", "unsigned short", "int", "unsigned int",
		"long", "unsigned long", "long long", "unsigned long long",
		"float", "double", "long double",
		"void", "size_t", "ssize_t", "ptrdiff_t",
		"int8_t", "int16_t", "int32_t", "int64_t",
		"uint8_t", "uint16_t", "uint32_t", "uint64_t",
	}
	for _, p := range primitives {
		if !allowClass(p) {
			t.Errorf("allowClass(%q) should be true for primitive type", p)
		}
	}
}

func TestAllowClass_WhitelistClassesPass(t *testing.T) {
	classes := []string{
		"QApplication", "QTreeWidget", "QTreeWidgetItem", "QWidget",
		"QObject", "QString", "QByteArray", "QTimer", "QPushButton",
		"QMainWindow", "QLabel", "QVBoxLayout", "QHBoxLayout",
	}
	for _, c := range classes {
		if !allowClass(c) {
			t.Errorf("allowClass(%q) should be true, it's in whitelist", c)
		}
	}
}

func TestAllowClass_NonWhitelistClassesBlocked(t *testing.T) {
	classes := []string{
		"QAbstractAnimation", "QXmlStreamReader", "QJpegHandler",
		"QDnsLookup", "QSslCertificate", "QMediaPlayer",
	}
	for _, c := range classes {
		if allowClass(c) {
			t.Errorf("allowClass(%q) should be false, not in whitelist", c)
		}
	}
}

func TestAllowClass_DependencyExemptions(t *testing.T) {
	exemptions := []string{"QChar", "QGuiApplication"}
	for _, c := range exemptions {
		if !allowClass(c) {
			t.Errorf("allowClass(%q) should be true, it's a dependency exemption", c)
		}
	}
}

func TestAllowClass_BlockedClasses(t *testing.T) {
	blocked := []string{
		"std::string", "std::vector",
		"QtPrivate::Something", "QNativeInterface::ICoreApplication",
		"QPartialOrdering", "QMessageLogger",
	}
	for _, c := range blocked {
		if allowClass(c) {
			t.Errorf("allowClass(%q) should be false, it's blocked", c)
		}
	}
}

func TestAllowClassBase_DoesNotCheckWhitelist(t *testing.T) {
	if !allowClassBase("int") {
		t.Error("allowClassBase(\"int\") should be true")
	}
	if !allowClassBase("QChar") {
		t.Error("allowClassBase(\"QChar\") should be true (no whitelist check)")
	}
	if !allowClassBase("QAbstractAnimation") {
		t.Error("allowClassBase(\"QAbstractAnimation\") should be true (no whitelist check)")
	}
	if allowClassBase("std::string") {
		t.Error("allowClassBase(\"std::string\") should be false")
	}
}

func TestAllowType_DoesNotFilterByWhitelist(t *testing.T) {
	p := cpp2c.CppParameter{ParameterType: "QChar"}
	err := allowType(p, false)
	if err != nil {
		t.Errorf("allowType(QChar) should not error, got: %v", err)
	}
	p2 := cpp2c.CppParameter{ParameterType: "int"}
	err = allowType(p2, false)
	if err != nil {
		t.Errorf("allowType(int) should not error, got: %v", err)
	}
}

func TestAllowCtor_QApplication(t *testing.T) {
	ctor := cpp2c.CppMethod{
		MethodName: "QApplication",
		IsStatic:   true,
		Parameters: []cpp2c.CppParameter{
			{ParameterType: "int", ByRef: true, ParameterName: "argc"},
			{ParameterType: "char", Pointer: true, PointerCount: 2, ParameterName: "argv"},
		},
	}
	if !allowCtor("QApplication", ctor) {
		t.Error("QApplication constructor should be allowed")
	}
}

func TestAllowCtor_QTreeWidget(t *testing.T) {
	ctor := cpp2c.CppMethod{
		MethodName: "QTreeWidget",
		IsStatic:   true,
		Parameters: []cpp2c.CppParameter{
			{ParameterType: "QWidget", Pointer: true, ParameterName: "parent"},
		},
	}
	if !allowCtor("QTreeWidget", ctor) {
		t.Error("QTreeWidget constructor should be allowed")
	}
	ctor2 := cpp2c.CppMethod{
		MethodName: "QTreeWidget",
		IsStatic:   true,
	}
	if !allowCtor("QTreeWidget", ctor2) {
		t.Error("QTreeWidget default constructor should be allowed")
	}
}

func TestAllowCtor_QWidget(t *testing.T) {
	ctor := cpp2c.CppMethod{
		MethodName: "QWidget",
		IsStatic:   true,
		Parameters: []cpp2c.CppParameter{
			{ParameterType: "QWidget", Pointer: true, ParameterName: "parent"},
		},
	}
	if !allowCtor("QWidget", ctor) {
		t.Error("QWidget constructor should be allowed")
	}
}

func TestAllowCtor_BlockedConstructors(t *testing.T) {
	ctor := cpp2c.CppMethod{
		MethodName: "QDBusError",
		IsStatic:   true,
	}
	if allowCtor("QDBusError", ctor) {
		t.Error("QDBusError constructor should be blocked")
	}

	// QPropertyBindingSourceLocation: ALL constructors blocked (typedef'd to void*)
	ctorDefault := cpp2c.CppMethod{
		MethodName: "QPropertyBindingSourceLocation",
		IsStatic:   true,
	}
	if allowCtor("QPropertyBindingSourceLocation", ctorDefault) {
		t.Error("QPropertyBindingSourceLocation default constructor should be blocked")
	}

	// QUntypedPropertyBinding: ALL constructors blocked (typedef'd to void*)
	ctorUntyped := cpp2c.CppMethod{
		MethodName: "QUntypedPropertyBinding",
		IsStatic:   true,
	}
	if allowCtor("QUntypedPropertyBinding", ctorUntyped) {
		t.Error("QUntypedPropertyBinding default constructor should be blocked")
	}
}

func TestAllowMethod_QWidgetSetWindowTitle(t *testing.T) {
	mm := cpp2c.CppMethod{
		MethodName: "setWindowTitle",
		Parameters: []cpp2c.CppParameter{
			{ParameterType: "QString", ParameterName: "title"},
		},
	}
	err := allowMethod("QWidget", mm)
	if err != nil {
		t.Errorf("QWidget::setWindowTitle should be allowed, got: %v", err)
	}
}

func TestAllowMethod_QWidgetResize(t *testing.T) {
	mm := cpp2c.CppMethod{
		MethodName: "resize",
		Parameters: []cpp2c.CppParameter{
			{ParameterType: "int", ParameterName: "w"},
			{ParameterType: "int", ParameterName: "h"},
		},
	}
	err := allowMethod("QWidget", mm)
	if err != nil {
		t.Errorf("QWidget::resize should be allowed, got: %v", err)
	}
}

func TestDllFuncFilter_Whitelist(t *testing.T) {
	filter := func(name string) bool {
		if len(name) == 0 || name[0] != 'Q' {
			return false
		}
		className, _, _ := cutUnderscore(name)
		return widgetNeededClasses[className]
	}
	tests := []struct {
		name     string
		expected bool
	}{
		{"QApplication_new", true},
		{"QApplication_new2", true},
		{"QTreeWidget_new", true},
		{"QTreeWidget_new2", true},
		{"QWidget_setWindowTitle", true},
		{"QWidget_resize", true},
		{"QObject_objectName", true},
		{"QAbstractAnimation_new", false},
		{"QXmlStreamReader_new", false},
		{"miqt_string_new", false},
	}
	for _, tt := range tests {
		result := filter(tt.name)
		if result != tt.expected {
			t.Errorf("DllFuncFilter(%q) = %v, want %v", tt.name, result, tt.expected)
		}
	}
}

func cutUnderscore(s string) (string, string, bool) {
	for i := 0; i < len(s); i++ {
		if s[i] == '_' {
			return s[:i], s[i+1:], true
		}
	}
	return s, "", false
}
