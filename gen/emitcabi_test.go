package gen

import (
	"strings"
	"testing"

	"github.com/ddkwork/bindgen/cpp2c"
)

func TestRenderTypeCabiChronoDuration(t *testing.T) {
	setupTestFilter()

	tests := []struct {
		input    cpp2c.CppParameter
		expected string
	}{
		{
			cpp2c.CppParameter{ParameterType: "duration<long long, milli>"},
			"int64_t",
		},
		{
			cpp2c.CppParameter{ParameterType: "duration<long long, nano>"},
			"int64_t",
		},
		{
			cpp2c.CppParameter{ParameterType: "duration<long long>"},
			"int64_t",
		},
		{
			cpp2c.CppParameter{ParameterType: "std::chrono::milliseconds"},
			"int64_t",
		},
		{
			cpp2c.CppParameter{ParameterType: "std::chrono::nanoseconds"},
			"int64_t",
		},
		{
			cpp2c.CppParameter{ParameterType: "std::chrono::days"},
			"int64_t",
		},
	}

	for _, tc := range tests {
		got := tc.input.RenderTypeCabi()
		if got != tc.expected {
			t.Errorf("RenderTypeCabi(%q) = %q, want %q", tc.input.ParameterType, got, tc.expected)
		}
	}
}

func TestRenderTypeCabiPointerTypes(t *testing.T) {
	tests := []struct {
		input    cpp2c.CppParameter
		expected string
	}{
		{
			cpp2c.CppParameter{ParameterType: "unsigned char", Const: true, Pointer: true, PointerCount: 1},
			"const unsigned char*",
		},
		{
			cpp2c.CppParameter{ParameterType: "unsigned char", Pointer: true, PointerCount: 1},
			"unsigned char*",
		},
		{
			cpp2c.CppParameter{ParameterType: "unsigned char", Const: true, Pointer: true, PointerCount: 1},
			"const unsigned char*",
		},
		{
			cpp2c.CppParameter{ParameterType: "char", Pointer: true, PointerCount: 1},
			"char*",
		},
		{
			cpp2c.CppParameter{ParameterType: "void", Pointer: true, PointerCount: 1},
			"void*",
		},
	}

	for _, tc := range tests {
		got := tc.input.RenderTypeCabi()
		if got != tc.expected {
			t.Errorf("RenderTypeCabi(%+v) = %q, want %q", tc.input, got, tc.expected)
		}
	}
}

func TestRenderTypeCabiKnownEnum(t *testing.T) {
	setupTestFilter()

	cpp2c.KnownEnums.Set("TestEnum", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{
		EnumName: "TestEnum",
		UnderlyingType: cpp2c.CppParameter{
			ParameterType: "int",
		},
	}})

	p := cpp2c.CppParameter{ParameterType: "TestEnum"}
	got := p.RenderTypeCabi()
	if got != "int" {
		t.Errorf("RenderTypeCabi(TestEnum) = %q, want %q", got, "int")
	}

	p2 := cpp2c.CppParameter{ParameterType: "TestEnum", Pointer: true, PointerCount: 1}
	got2 := p2.RenderTypeCabi()
	if got2 != "int*" {
		t.Errorf("RenderTypeCabi(TestEnum*) = %q, want %q", got2, "int*")
	}
}

func TestRenderTypeCabiQString(t *testing.T) {
	p := cpp2c.CppParameter{ParameterType: "QString"}
	got := p.RenderTypeCabi()
	if got != "struct miqt_string" {
		t.Errorf("RenderTypeCabi(QString) = %q, want %q", got, "struct miqt_string")
	}

	p2 := cpp2c.CppParameter{ParameterType: "QByteArray"}
	got2 := p2.RenderTypeCabi()
	if got2 != "struct miqt_string" {
		t.Errorf("RenderTypeCabi(QByteArray) = %q, want %q", got2, "struct miqt_string")
	}
}

func TestEmitCABI2CppForwardingChrono(t *testing.T) {
	tests := []struct {
		input         cpp2c.CppParameter
		expectedFwd   string
		expectedPream string
	}{
		{
			cpp2c.CppParameter{ParameterType: "duration<long long, milli>", ParameterName: "msecs"},
			"std::chrono::milliseconds(msecs)",
			"",
		},
		{
			cpp2c.CppParameter{ParameterType: "duration<long long, nano>", ParameterName: "nsec"},
			"std::chrono::nanoseconds(nsec)",
			"",
		},
		{
			cpp2c.CppParameter{ParameterType: "duration<long long>", ParameterName: "secs"},
			"std::chrono::seconds(secs)",
			"",
		},
		{
			cpp2c.CppParameter{ParameterType: "std::chrono::milliseconds", ParameterName: "msecs"},
			"std::chrono::milliseconds(msecs)",
			"",
		},
	}

	for _, tc := range tests {
		preamble, fwd := cpp2c.EmitCABI2CppForwarding(tc.input, "", "")
		if fwd != tc.expectedFwd {
			t.Errorf("emitCABI2CppForwarding(%q) fwd = %q, want %q", tc.input.ParameterType, fwd, tc.expectedFwd)
		}
		if strings.TrimSpace(preamble) != tc.expectedPream {
			t.Errorf("emitCABI2CppForwarding(%q) preamble = %q, want %q", tc.input.ParameterType, preamble, tc.expectedPream)
		}
	}
}

func TestEmitCABI2CppForwardingConstUnsignedCharPtr(t *testing.T) {
	p := cpp2c.CppParameter{
		ParameterType: "unsigned char",
		Const:         true,
		Pointer:       true,
		PointerCount:  1,
		ParameterName: "data",
	}

	preamble, fwd := cpp2c.EmitCABI2CppForwarding(p, "", "")
	if fwd != "data" {
		t.Errorf("emitCABI2CppForwarding(const unsigned char* data) fwd = %q, want %q", fwd, "data")
	}
	if preamble != "" {
		t.Errorf("emitCABI2CppForwarding(const unsigned char* data) preamble = %q, want empty", preamble)
	}
}

func TestEmitCABI2CppForwardingDecltypeNullptr(t *testing.T) {
	p := cpp2c.CppParameter{
		ParameterType: "decltype(nullptr)",
		ParameterName: "param1",
	}
	preamble, fwd := cpp2c.EmitCABI2CppForwarding(p, "", "")
	if fwd != "param1" {
		t.Errorf("emitCABI2CppForwarding(decltype(nullptr)) fwd = %q, want %q", fwd, "param1")
	}
	if preamble != "" {
		t.Errorf("emitCABI2CppForwarding(decltype(nullptr)) preamble = %q, want empty", preamble)
	}
}

func TestEmitCABI2CppForwardingQString(t *testing.T) {
	p := cpp2c.CppParameter{
		ParameterType: "QString",
		ParameterName: "str",
	}
	preamble, fwd := cpp2c.EmitCABI2CppForwarding(p, "\t", "")
	if !strings.Contains(preamble, "QString") || !strings.Contains(preamble, "fromUtf8") {
		t.Errorf("emitCABI2CppForwarding(QString) preamble should contain QString conversion, got: %q", preamble)
	}
	if fwd != "str_QString" {
		t.Errorf("emitCABI2CppForwarding(QString) fwd = %q, want %q", fwd, "str_QString")
	}
}

func TestEmitAssignCppToCabiChronoReturn(t *testing.T) {
	p := cpp2c.CppParameter{
		ParameterType: "duration<long long, milli>",
	}
	result := cpp2c.EmitAssignCppToCabi("\treturn ", p, "self->intervalAsDuration()")
	if !strings.Contains(result, ".count()") {
		t.Errorf("emitAssignCppToCabi(chrono return) should contain .count(), got: %q", result)
	}
	if !strings.Contains(result, "int64_t") {
		t.Errorf("emitAssignCppToCabi(chrono return) should contain int64_t, got: %q", result)
	}
}

func TestEmitAssignCppToCabiQStringReturn(t *testing.T) {
	p := cpp2c.CppParameter{
		ParameterType: "QString",
	}
	result := cpp2c.EmitAssignCppToCabi("\treturn ", p, "self->someString()")
	if !strings.Contains(result, "toUtf8") {
		t.Errorf("emitAssignCppToCabi(QString return) should contain toUtf8, got: %q", result)
	}
	if !strings.Contains(result, "struct miqt_string") {
		t.Errorf("emitAssignCppToCabi(QString return) should contain miqt_string, got: %q", result)
	}
}

func TestEmitAssignCppToCabiQListReturn(t *testing.T) {
	p := cpp2c.CppParameter{
		ParameterType: "QList<QString>",
	}
	result := cpp2c.EmitAssignCppToCabi("\treturn ", p, "self->someList()")
	if !strings.Contains(result, "malloc") {
		t.Errorf("emitAssignCppToCabi(QList return) should contain malloc, got: %q", result)
	}
	if !strings.Contains(result, "struct miqt_array") {
		t.Errorf("emitAssignCppToCabi(QList return) should contain miqt_array, got: %q", result)
	}
}

func TestEmitParametersCabi(t *testing.T) {
	m := cpp2c.CppMethod{
		IsStatic: false,
		Parameters: []cpp2c.CppParameter{
			{ParameterType: "int", ParameterName: "x"},
			{ParameterType: "QString", ParameterName: "str"},
			{ParameterType: "bool", ParameterName: "flag"},
		},
	}
	result := cpp2c.EmitParametersCabi(m, "QTestClass*")
	if !strings.Contains(result, "QTestClass* self") {
		t.Errorf("emitParametersCabi should include self parameter, got: %q", result)
	}
	if !strings.Contains(result, "int x") {
		t.Errorf("emitParametersCabi should include int x, got: %q", result)
	}
	if !strings.Contains(result, "struct miqt_string str") {
		t.Errorf("emitParametersCabi should include miqt_string str, got: %q", result)
	}
	if !strings.Contains(result, "bool flag") {
		t.Errorf("emitParametersCabi should include bool flag, got: %q", result)
	}
}

func TestEmitParametersCabiStatic(t *testing.T) {
	m := cpp2c.CppMethod{
		IsStatic: true,
		Parameters: []cpp2c.CppParameter{
			{ParameterType: "int", ParameterName: "x"},
		},
	}
	result := cpp2c.EmitParametersCabi(m, "")
	if !strings.Contains(result, "int x") {
		t.Errorf("emitParametersCabi(static) should include int x, got: %q", result)
	}
	if strings.Contains(result, "self") {
		t.Errorf("emitParametersCabi(static) should NOT have self parameter, got: %q", result)
	}
}

func TestCabiClassName(t *testing.T) {
	tests := []struct {
		input    string
		expected string
	}{
		{"QTest", "QTest"},
		{"Qt::AlignmentFlag", "AlignmentFlag"},
		{"QWidget::RenderFlag", "QWidget__RenderFlag"},
		{"QDateTime::TransitionResolution", "QDateTime__TransitionResolution"},
	}

	for _, tc := range tests {
		got := cpp2c.CabiClassName(tc.input)
		if got != tc.expected {
			t.Errorf("cabiClassName(%q) = %q, want %q", tc.input, got, tc.expected)
		}
	}
}

func TestCppSubclassName(t *testing.T) {
	got := cpp2c.CppSubclassName(cpp2c.CppClass{ClassName: "QTimer"})
	if got != "MiqtVirtualQTimer" {
		t.Errorf("cppSubclassName(QTimer) = %q, want %q", got, "MiqtVirtualQTimer")
	}

	got2 := cpp2c.CppSubclassName(cpp2c.CppClass{ClassName: "QWidget::Render"})
	if got2 != "MiqtVirtualQWidgetRender" {
		t.Errorf("cppSubclassName(QWidget::Render) = %q, want %q", got2, "MiqtVirtualQWidgetRender")
	}
}

func TestIsDirectCType(t *testing.T) {
	tests := []struct {
		input    string
		expected bool
	}{
		{"int", true},
		{"bool", true},
		{"void", true},
		{"char", true},
		{"size_t", true},
		{"int64_t", true},
		{"uintptr_t", true},
		{"QString", false},
		{"QWidget", false},
		{"unsigned char", true},
		{"signed char", true},
		{"QFlags<Qt::AlignmentFlag>", false},
	}

	for _, tc := range tests {
		got := cpp2c.IsDirectCType(tc.input)
		if got != tc.expected {
			t.Errorf("isDirectCType(%q) = %v, want %v", tc.input, got, tc.expected)
		}
	}
}

func TestCReservedWord(t *testing.T) {
	tests := []struct {
		input    string
		expected bool
	}{
		{"default", true},
		{"int", false},
		{"class", false},
		{"const", false},
	}

	for _, tc := range tests {
		got := cpp2c.CReservedWord(tc.input)
		if got != tc.expected {
			t.Errorf("cReservedWord(%q) = %v, want %v", tc.input, got, tc.expected)
		}
	}
}

func TestGetCppZeroValue(t *testing.T) {
	tests := []struct {
		input    cpp2c.CppParameter
		expected string
	}{
		{cpp2c.CppParameter{ParameterType: "int"}, "0"},
		{cpp2c.CppParameter{ParameterType: "bool"}, "false"},
		{cpp2c.CppParameter{ParameterType: "void"}, ""},
		{cpp2c.CppParameter{ParameterType: "QString"}, "QString()"},
		{cpp2c.CppParameter{ParameterType: "int", Pointer: true, PointerCount: 1}, "nullptr"},
		{cpp2c.CppParameter{ParameterType: "QString", Pointer: true, PointerCount: 1}, "nullptr"},
	}

	for _, tc := range tests {
		got := cpp2c.GetCppZeroValue(tc.input)
		if got != tc.expected {
			t.Errorf("getCppZeroValue(%+v) = %q, want %q", tc.input, got, tc.expected)
		}
	}
}

func TestGetCabiZeroValue(t *testing.T) {
	tests := []struct {
		input    cpp2c.CppParameter
		expected string
	}{
		{cpp2c.CppParameter{ParameterType: "int"}, "0"},
		{cpp2c.CppParameter{ParameterType: "bool"}, "false"},
		{cpp2c.CppParameter{ParameterType: "void"}, ""},
		{cpp2c.CppParameter{ParameterType: "int", Pointer: true, PointerCount: 1}, "nullptr"},
	}

	for _, tc := range tests {
		got := cpp2c.GetCabiZeroValue(tc.input)
		if got != tc.expected {
			t.Errorf("getCabiZeroValue(%+v) = %q, want %q", tc.input, got, tc.expected)
		}
	}
}

func TestCppComment(t *testing.T) {
	result := cpp2c.CppComment("test comment")
	if !strings.Contains(result, "test comment") {
		t.Errorf("cppComment should contain comment text, got: %q", result)
	}
	if !strings.Contains(result, "/*") || !strings.Contains(result, "*/") {
		t.Errorf("cppComment should have comment delimiters, got: %q", result)
	}
}

func TestMakeNamePrefix(t *testing.T) {
	tests := []struct {
		input    string
		expected string
	}{
		{"simple", "simple"},
		{"arr[0]", "arr_0"},
		{"complex.name", "complex_name"},
	}

	for _, tc := range tests {
		got := cpp2c.MakeNamePrefix(tc.input)
		if got != tc.expected {
			t.Errorf("makeNamePrefix(%q) = %q, want %q", tc.input, got, tc.expected)
		}
	}
}

func TestEmitParametersCABI2CppForwarding(t *testing.T) {
	params := []cpp2c.CppParameter{
		{ParameterType: "int", ParameterName: "x"},
		{ParameterType: "QString", ParameterName: "str"},
		{ParameterType: "duration<long long, milli>", ParameterName: "msecs"},
	}

	preamble, forwarding := cpp2c.EmitParametersCABI2CppForwarding(params, "\t", "")
	if !strings.Contains(forwarding, "x") {
		t.Errorf("forwarding should contain 'x', got: %q", forwarding)
	}
	if !strings.Contains(forwarding, "str_QString") {
		t.Errorf("forwarding should contain 'str_QString', got: %q", forwarding)
	}
	if !strings.Contains(forwarding, "std::chrono::milliseconds") {
		t.Errorf("forwarding should contain 'milliseconds', got: %q", forwarding)
	}
	if !strings.Contains(preamble, "fromUtf8") {
		t.Errorf("preamble should contain QString conversion, got: %q", preamble)
	}
}

func TestKnownEnumsAfterInsert(t *testing.T) {
	setupTestFilter()

	checkEnum := func(name string) {
		if !cpp2c.KnownEnums.Has(name) {
			t.Errorf("KnownEnums[%q] should exist after InsertTypedefs", name)
		}
	}

	checkEnum("QByteArray::Base64Option")
	checkEnum("QString::NormalizationForm")
	checkEnum("QChar::UnicodeVersion")
	checkEnum("QString::SectionFlag")
	checkEnum("QEventLoop::ProcessEventsFlag")
	checkEnum("QAbstractAnimation::Direction")
	checkEnum("QDeadlineTimer::ForeverConstant")
	checkEnum("QIODeviceBase::OpenModeFlag")
	checkEnum("QDataStream::Status")
	checkEnum("QTextStream::Status")
	checkEnum("QTextStream::RealNumberNotation")
	checkEnum("QTextStream::FieldAlignment")
	checkEnum("QTextStream::NumberFlag")
	checkEnum("QAbstractItemModel::CheckIndexOptions")
	checkEnum("QVariant::Type")
	checkEnum("QLocale::Language")
	checkEnum("QLocale::Territory")
	checkEnum("QLocale::Script")
	checkEnum("QLocale::FormatType")
	checkEnum("QDateTime::TransitionResolution")
	checkEnum("QRegularExpression::PatternOption")
	checkEnum("QRegularExpression::MatchType")
	checkEnum("QRegularExpression::MatchOption")
	checkEnum("QLocale::TagSeparator")
	checkEnum("QLocale::CurrencySymbolFormat")
	checkEnum("QLocale::DataSizeFormat")
	checkEnum("QLocale::QuotationStyle")
	checkEnum("QUrl::ParsingMode")
	checkEnum("QUrl::UrlFormattingOption")
	checkEnum("QUrl::UserInputResolutionOption")
	checkEnum("QUrl::AceProcessingOption")
	checkEnum("QCborError::Code")
	checkEnum("QCborValue::EncodingOption")
	checkEnum("QCborValue::DiagnosticNotationOption")
	checkEnum("QUuid::StringFormat")
}

func TestKnownBareEnumsAfterInsert(t *testing.T) {
	setupTestFilter()

	checkBareEnum := func(name string) {
		if !cpp2c.KnownEnums.Has(name) {
			t.Errorf("KnownEnums[%q] bare enum should exist after InsertTypedefs", name)
		}
	}

	checkBareEnum("NormalizationForm")
	checkBareEnum("UnicodeVersion")
	checkBareEnum("SectionFlag")
	checkBareEnum("ProcessEventsFlag")
	checkBareEnum("ForeverConstant")
	checkBareEnum("OpenModeFlag")
	checkBareEnum("RealNumberNotation")
	checkBareEnum("FieldAlignment")
	checkBareEnum("NumberFlag")
	checkBareEnum("CheckIndexOptions")
	checkBareEnum("Type")
	checkBareEnum("Language")
	checkBareEnum("Territory")
	checkBareEnum("Country")
	checkBareEnum("Script")
	checkBareEnum("FormatType")
	checkBareEnum("TransitionResolution")
	checkBareEnum("PatternOption")
	checkBareEnum("MatchType")
	checkBareEnum("MatchOption")
	checkBareEnum("TagSeparator")
	checkBareEnum("CurrencySymbolFormat")
	checkBareEnum("DataSizeFormat")
	checkBareEnum("QuotationStyle")
	checkBareEnum("ParsingMode")
	checkBareEnum("UrlFormattingOption")
	checkBareEnum("UserInputResolutionOption")
	checkBareEnum("AceProcessingOption")
	checkBareEnum("Code")
	checkBareEnum("EncodingOption")
	checkBareEnum("DiagnosticNotationOption")
	checkBareEnum("StringFormat")

	// "Direction" bare name should NOT be registered due to ambiguity
	if cpp2c.KnownEnums.Has("Direction") {
		t.Errorf("KnownEnums[%q] should NOT be registered (ambiguous)", "Direction")
	}
}

func TestKnownTypedefsAfterInsert(t *testing.T) {
	setupTestFilter()

	checkTypedef := func(name string) {
		if !cpp2c.KnownTypedefs.Has(name) {
			t.Errorf("KnownTypedefs[%q] should exist after InsertTypedefs", name)
		}
	}

	checkTypedef("qsizetype")
	checkTypedef("quintptr")
	checkTypedef("qintptr")
	checkTypedef("Base64Options")
	checkTypedef("Base64Option")
	checkTypedef("SectionFlags")
	checkTypedef("ProcessEventsFlags")
}

func TestCabiPreventStructDeclaration(t *testing.T) {
	tests := []struct {
		input    string
		expected bool
	}{
		{"QString", true},
		{"QByteArray", true},
		{"QWidget", false},
		{"QTimer", false},
	}

	filter := NewQtFilter()
	for _, tc := range tests {
		got := filter.PreventStructDeclaration(tc.input)
		if got != tc.expected {
			t.Errorf("PreventStructDeclaration(%q) = %v, want %v", tc.input, got, tc.expected)
		}
	}
}

func TestRenderTypeCabiQtClassType(t *testing.T) {
	p := cpp2c.CppParameter{ParameterType: "QWidget"}
	got := p.RenderTypeCabi()
	if got != "QWidget*" {
		t.Errorf("RenderTypeCabi(QWidget) = %q, want %q", got, "QWidget*")
	}

	p2 := cpp2c.CppParameter{ParameterType: "QTimer", Pointer: true, PointerCount: 1}
	got2 := p2.RenderTypeCabi()
	if got2 != "QTimer*" {
		t.Errorf("RenderTypeCabi(QTimer*) = %q, want %q", got2, "QTimer*")
	}
}

func TestRenderTypeCabiQFlags(t *testing.T) {
	setupTestFilter()

	p := cpp2c.CppParameter{ParameterType: "QFlags<Qt::AlignmentFlag>"}
	got := p.RenderTypeCabi()
	if got != "int" {
		t.Errorf("RenderTypeCabi(QFlags<>) = %q, want %q", got, "int")
	}
}

func TestRenderTypeCabiQSpan(t *testing.T) {
	p := cpp2c.CppParameter{ParameterType: "QSpan<QString>"}
	got := p.RenderTypeCabi()
	if got != "void*" {
		t.Errorf("RenderTypeCabi(QSpan<>) = %q, want %q", got, "void*")
	}
}

func TestRenderTypeCabiQPartialOrdering(t *testing.T) {
	p := cpp2c.CppParameter{ParameterType: "QPartialOrdering"}
	got := p.RenderTypeCabi()
	if got != "int" {
		t.Errorf("RenderTypeCabi(QPartialOrdering) = %q, want %q", got, "int")
	}
}

func TestRenderTypeCabiKnownTypedef(t *testing.T) {
	setupTestFilter()

	cpp2c.KnownTypedefs.Set("TestTypedef", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{
		Alias:          "TestTypedef",
		UnderlyingType: cpp2c.ParseSingleTypeString("int"),
	}})

	p := cpp2c.CppParameter{ParameterType: "TestTypedef"}
	p = cpp2c.ApplyTypedefs(p)
	got := p.RenderTypeCabi()
	if got != "int" {
		t.Errorf("RenderTypeCabi(TestTypedef) = %q, want %q", got, "int")
	}
}
