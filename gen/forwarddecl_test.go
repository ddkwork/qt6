package gen

import (
	"strings"
	"testing"

	"github.com/ddkwork/bindgen/cpp2c"
)

func setupTestFilter() {
	cpp2c.SetActiveFilter(NewQtFilter())
	cpp2c.FlushKnownTypes()
	insertTypedefs()
}

func TestGetReferencedTypes_QCharInQStringConstructor(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QString",
				Ctors: []cpp2c.CppMethod{
					{
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QChar", Pointer: true, PointerCount: 1, ParameterName: "unicode"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQChar := false
	for _, t := range referencedTypes {
		if t == "QChar" {
			hasQChar = true
			break
		}
	}

	if !hasQChar {
		t.Errorf("getReferencedTypes should include QChar when used as QString constructor parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QIODeviceInMethod(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextStream",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "setDevice",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QIODevice", Pointer: true, PointerCount: 1, ParameterName: "device"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQIODevice := false
	for _, t := range referencedTypes {
		if t == "QIODevice" {
			hasQIODevice = true
			break
		}
	}

	if !hasQIODevice {
		t.Errorf("getReferencedTypes should include QIODevice when used as method parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QRegularExpressionMatch(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QRegularExpression",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "match",
						ReturnType: cpp2c.CppParameter{ParameterType: "QRegularExpressionMatch"},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasMatch := false
	for _, t := range referencedTypes {
		if t == "QRegularExpressionMatch" {
			hasMatch = true
			break
		}
	}

	if !hasMatch {
		t.Errorf("getReferencedTypes should include QRegularExpressionMatch when used as return type, got: %v", referencedTypes)
	}
}

func TestEmitBindingHeader_ForwardDeclarationForReferencedTypes(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QString",
				Ctors: []cpp2c.CppMethod{
					{
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QChar", Pointer: true, PointerCount: 1, ParameterName: "unicode"},
						},
					},
				},
			},
		},
	}

	cfg := cpp2c.EmitConfig{
		SkipEnumGeneration: true,
	}

	headerContent, _, err := cpp2c.EmitBindingHeaderForTest(src, "test.h", "qt6", cfg)
	if err != nil {
		t.Fatalf("emitBindingHeader failed: %v", err)
	}

	if !strings.Contains(headerContent, "class QChar;") {
		t.Errorf("Header should contain 'class QChar;' forward declaration for referenced type.\nHeader content:\n%s", headerContent)
	}
}

func TestAllowClass_QCharInWhitelist(t *testing.T) {
	setupTestFilter()

	if !allowClass("QChar") {
		t.Error("allowClass(QChar) should return true because QChar is now in widgetNeededClasses whitelist")
	}
}

func TestAllowClass_QStringInWhitelist(t *testing.T) {
	setupTestFilter()

	if !allowClass("QString") {
		t.Error("allowClass(QString) should return true because QString is in widgetNeededClasses whitelist")
	}
}

func TestAllowClass_QWidgetInWhitelist(t *testing.T) {
	setupTestFilter()

	if !allowClass("QWidget") {
		t.Error("allowClass(QWidget) should return true because QWidget is in widgetNeededClasses whitelist")
	}
}

func TestRenderTypeCabi_QChar(t *testing.T) {
	setupTestFilter()

	p := cpp2c.CppParameter{ParameterType: "QChar", Pointer: true, PointerCount: 1}
	got := p.RenderTypeCabi()

	if got != "QChar*" {
		t.Errorf("RenderTypeCabi(QChar*) = %q, want %q", got, "QChar*")
	}
}

func TestRenderTypeCabi_Disambiguated_t(t *testing.T) {
	setupTestFilter()

	p := cpp2c.CppParameter{ParameterType: "Disambiguated_t"}
	got := p.RenderTypeCabi()

	if got != "int" {
		t.Errorf("RenderTypeCabi(Disambiguated_t) = %q, want %q", got, "int")
	}
}

func TestRenderTypeCabi_FromBase64Result(t *testing.T) {
	setupTestFilter()

	p := cpp2c.CppParameter{ParameterType: "QByteArray::FromBase64Result"}
	got := p.RenderTypeCabi()

	if got != "void*" {
		t.Errorf("RenderTypeCabi(QByteArray::FromBase64Result) = %q, want %q", got, "void*")
	}
}

func TestPreventStructDeclaration_QChar(t *testing.T) {
	filter := NewQtFilter()

	if filter.PreventStructDeclaration("QChar") {
		t.Error("PreventStructDeclaration(QChar) should return false - QChar is a value type that needs forward declaration")
	}
}

func TestPreventStructDeclaration_Disambiguated_t(t *testing.T) {
	filter := NewQtFilter()

	if !filter.PreventStructDeclaration("Disambiguated_t") {
		t.Error("PreventStructDeclaration(Disambiguated_t) should return true - it's mapped to int")
	}
}

func TestPreventStructDeclaration_FromBase64Result(t *testing.T) {
	filter := NewQtFilter()

	if !filter.PreventStructDeclaration("QByteArray::FromBase64Result") {
		t.Error("PreventStructDeclaration(QByteArray::FromBase64Result) should return true - it's mapped to void*")
	}
}

func TestKnownTypedefs_Disambiguated_t(t *testing.T) {
	setupTestFilter()

	if !cpp2c.KnownTypedefs.Has("Disambiguated_t") {
		t.Error("KnownTypedefs should contain Disambiguated_t")
	}
}

func TestKnownTypedefs_FromBase64Result(t *testing.T) {
	setupTestFilter()

	if !cpp2c.KnownTypedefs.Has("QByteArray::FromBase64Result") {
		t.Error("KnownTypedefs should contain QByteArray::FromBase64Result")
	}
}

func TestGetReferencedTypes_QMetaObjectAsReturnType(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QMetaType",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "metaObject",
						ReturnType: cpp2c.CppParameter{ParameterType: "QMetaObject", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQMetaObject := false
	for _, t := range referencedTypes {
		if t == "QMetaObject" {
			hasQMetaObject = true
			break
		}
	}

	if !hasQMetaObject {
		t.Errorf("getReferencedTypes should include QMetaObject when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QThreadAsParameter(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QObject",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "moveToThread",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QThread", Pointer: true, PointerCount: 1, ParameterName: "thread"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQThread := false
	for _, t := range referencedTypes {
		if t == "QThread" {
			hasQThread = true
			break
		}
	}

	if !hasQThread {
		t.Errorf("getReferencedTypes should include QThread when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QMetaMethodAsParameter(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QObject",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "connect",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QMetaMethod", ParameterName: "method"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQMetaMethod := false
	for _, t := range referencedTypes {
		if t == "QMetaMethod" {
			hasQMetaMethod = true
			break
		}
	}

	if !hasQMetaMethod {
		t.Errorf("getReferencedTypes should include QMetaMethod when used as parameter, got: %v", referencedTypes)
	}
}

func TestRenderTypeCabi_Disambiguated_tPointer(t *testing.T) {
	setupTestFilter()

	p := cpp2c.CppParameter{ParameterType: "Disambiguated_t", Pointer: true, PointerCount: 1}
	got := p.RenderTypeCabi()

	if got != "int*" {
		t.Errorf("RenderTypeCabi(Disambiguated_t*) = %q, want %q", got, "int*")
	}
}

func TestGetReferencedTypes_QMetaProperty(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QMetaObject",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "property",
						ReturnType: cpp2c.CppParameter{ParameterType: "QMetaProperty", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQMetaProperty := false
	for _, t := range referencedTypes {
		if t == "QMetaProperty" {
			hasQMetaProperty = true
			break
		}
	}

	if !hasQMetaProperty {
		t.Errorf("getReferencedTypes should include QMetaProperty when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QGenericArgument(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QMetaObject",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "invokeMethod",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QGenericArgument", ParameterName: "arg"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQGenericArgument := false
	for _, t := range referencedTypes {
		if t == "QGenericArgument" {
			hasQGenericArgument = true
			break
		}
	}

	if !hasQGenericArgument {
		t.Errorf("getReferencedTypes should include QGenericArgument when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QGenericReturnArgument(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QMetaObject",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "invokeMethod",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QGenericReturnArgument", ParameterName: "ret"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQGenericReturnArgument := false
	for _, t := range referencedTypes {
		if t == "QGenericReturnArgument" {
			hasQGenericReturnArgument = true
			break
		}
	}

	if !hasQGenericReturnArgument {
		t.Errorf("getReferencedTypes should include QGenericReturnArgument when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QUntypedPropertyData(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QPropertyBinding",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "setPropertyData",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QUntypedPropertyData", Pointer: true, PointerCount: 1, ParameterName: "data"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQUntypedPropertyData := false
	for _, t := range referencedTypes {
		if t == "QUntypedPropertyData" {
			hasQUntypedPropertyData = true
			break
		}
	}

	if !hasQUntypedPropertyData {
		t.Errorf("getReferencedTypes should include QUntypedPropertyData when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QModelRoleData(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QModelRoleDataSpan",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "data",
						ReturnType: cpp2c.CppParameter{ParameterType: "QModelRoleData", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQModelRoleData := false
	for _, t := range referencedTypes {
		if t == "QModelRoleData" {
			hasQModelRoleData = true
			break
		}
	}

	if !hasQModelRoleData {
		t.Errorf("getReferencedTypes should include QModelRoleData when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QFileDevice(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QFile",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "open",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QFileDevice", Pointer: true, PointerCount: 1, ParameterName: "device"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQFileDevice := false
	for _, t := range referencedTypes {
		if t == "QFileDevice" {
			hasQFileDevice = true
			break
		}
	}

	if !hasQFileDevice {
		t.Errorf("getReferencedTypes should include QFileDevice when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QAbstractEventDispatcher(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QCoreApplication",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "setEventDispatcher",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QAbstractEventDispatcher", Pointer: true, PointerCount: 1, ParameterName: "dispatcher"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQAbstractEventDispatcher := false
	for _, t := range referencedTypes {
		if t == "QAbstractEventDispatcher" {
			hasQAbstractEventDispatcher = true
			break
		}
	}

	if !hasQAbstractEventDispatcher {
		t.Errorf("getReferencedTypes should include QAbstractEventDispatcher when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QItemSelectionRange(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QItemSelection",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "split",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QItemSelectionRange", ParameterName: "range"},
							{ParameterType: "QItemSelectionRange", ParameterName: "other"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQItemSelectionRange := false
	for _, t := range referencedTypes {
		if t == "QItemSelectionRange" {
			hasQItemSelectionRange = true
			break
		}
	}

	if !hasQItemSelectionRange {
		t.Errorf("getReferencedTypes should include QItemSelectionRange when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QJsonParseError(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QJsonDocument",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "fromJson",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QJsonParseError", Pointer: true, PointerCount: 1, ParameterName: "error"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQJsonParseError := false
	for _, t := range referencedTypes {
		if t == "QJsonParseError" {
			hasQJsonParseError = true
			break
		}
	}

	if !hasQJsonParseError {
		t.Errorf("getReferencedTypes should include QJsonParseError when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QJsonValueRef(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QJsonArray",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "at",
						ReturnType: cpp2c.CppParameter{ParameterType: "QJsonValueRef", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQJsonValueRef := false
	for _, t := range referencedTypes {
		if t == "QJsonValueRef" {
			hasQJsonValueRef = true
			break
		}
	}

	if !hasQJsonValueRef {
		t.Errorf("getReferencedTypes should include QJsonValueRef when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QMetaEnum(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QMetaObject",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "enumerator",
						ReturnType: cpp2c.CppParameter{ParameterType: "QMetaEnum", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQMetaEnum := false
	for _, t := range referencedTypes {
		if t == "QMetaEnum" {
			hasQMetaEnum = true
			break
		}
	}

	if !hasQMetaEnum {
		t.Errorf("getReferencedTypes should include QMetaEnum when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QRgba64(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QColor",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "setRgba64",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QRgba64", ParameterName: "rgba"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQRgba64 := false
	for _, t := range referencedTypes {
		if t == "QRgba64" {
			hasQRgba64 = true
			break
		}
	}

	if !hasQRgba64 {
		t.Errorf("getReferencedTypes should include QRgba64 when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QColorSpace(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QImage",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "colorSpace",
						ReturnType: cpp2c.CppParameter{ParameterType: "QColorSpace"},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQColorSpace := false
	for _, t := range referencedTypes {
		if t == "QColorSpace" {
			hasQColorSpace = true
			break
		}
	}

	if !hasQColorSpace {
		t.Errorf("getReferencedTypes should include QColorSpace when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QColorTransform(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QColorSpace",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "transformationToColorSpace",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QColorTransform", ParameterName: "transform"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQColorTransform := false
	for _, t := range referencedTypes {
		if t == "QColorTransform" {
			hasQColorTransform = true
			break
		}
	}

	if !hasQColorTransform {
		t.Errorf("getReferencedTypes should include QColorTransform when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QPaintEngine(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QPaintDevice",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "paintEngine",
						ReturnType: cpp2c.CppParameter{ParameterType: "QPaintEngine", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQPaintEngine := false
	for _, t := range referencedTypes {
		if t == "QPaintEngine" {
			hasQPaintEngine = true
			break
		}
	}

	if !hasQPaintEngine {
		t.Errorf("getReferencedTypes should include QPaintEngine when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QPixelFormat(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QImage",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "pixelFormat",
						ReturnType: cpp2c.CppParameter{ParameterType: "QPixelFormat"},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQPixelFormat := false
	for _, t := range referencedTypes {
		if t == "QPixelFormat" {
			hasQPixelFormat = true
			break
		}
	}

	if !hasQPixelFormat {
		t.Errorf("getReferencedTypes should include QPixelFormat when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QImageReader(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QImage",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "fromData",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QImageReader", Pointer: true, PointerCount: 1, ParameterName: "reader"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQImageReader := false
	for _, t := range referencedTypes {
		if t == "QImageReader" {
			hasQImageReader = true
			break
		}
	}

	if !hasQImageReader {
		t.Errorf("getReferencedTypes should include QImageReader when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QIconEngine(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QIcon",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "fromTheme",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QIconEngine", Pointer: true, PointerCount: 1, ParameterName: "engine"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQIconEngine := false
	for _, t := range referencedTypes {
		if t == "QIconEngine" {
			hasQIconEngine = true
			break
		}
	}

	if !hasQIconEngine {
		t.Errorf("getReferencedTypes should include QIconEngine when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QVector2D(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QMatrix4x4",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "map",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QVector2D", ParameterName: "point"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQVector2D := false
	for _, t := range referencedTypes {
		if t == "QVector2D" {
			hasQVector2D = true
			break
		}
	}

	if !hasQVector2D {
		t.Errorf("getReferencedTypes should include QVector2D when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QVector4D(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QMatrix4x4",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "map",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QVector4D", ParameterName: "point"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQVector4D := false
	for _, t := range referencedTypes {
		if t == "QVector4D" {
			hasQVector4D = true
			break
		}
	}

	if !hasQVector4D {
		t.Errorf("getReferencedTypes should include QVector4D when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QSessionManager(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QGuiApplication",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "sessionManager",
						ReturnType: cpp2c.CppParameter{ParameterType: "QSessionManager", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQSessionManager := false
	for _, t := range referencedTypes {
		if t == "QSessionManager" {
			hasQSessionManager = true
			break
		}
	}

	if !hasQSessionManager {
		t.Errorf("getReferencedTypes should include QSessionManager when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QPointingDeviceUniqueId(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QPointingDevice",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "uniqueId",
						ReturnType: cpp2c.CppParameter{ParameterType: "QPointingDeviceUniqueId"},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQPointingDeviceUniqueId := false
	for _, t := range referencedTypes {
		if t == "QPointingDeviceUniqueId" {
			hasQPointingDeviceUniqueId = true
			break
		}
	}

	if !hasQPointingDeviceUniqueId {
		t.Errorf("getReferencedTypes should include QPointingDeviceUniqueId when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QAbstractTextDocumentLayout(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextDocument",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "documentLayout",
						ReturnType: cpp2c.CppParameter{ParameterType: "QAbstractTextDocumentLayout", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQAbstractTextDocumentLayout := false
	for _, t := range referencedTypes {
		if t == "QAbstractTextDocumentLayout" {
			hasQAbstractTextDocumentLayout = true
			break
		}
	}

	if !hasQAbstractTextDocumentLayout {
		t.Errorf("getReferencedTypes should include QAbstractTextDocumentLayout when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextStreamManipulator(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QDebug",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "operatorShiftLeft",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QTextStreamManipulator", Pointer: true, PointerCount: 1, ParameterName: "m"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextStreamManipulator := false
	for _, t := range referencedTypes {
		if t == "QTextStreamManipulator" {
			hasQTextStreamManipulator = true
			break
		}
	}

	if !hasQTextStreamManipulator {
		t.Errorf("getReferencedTypes should include QTextStreamManipulator when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QAbstractNativeEventFilter(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QCoreApplication",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "installNativeEventFilter",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QAbstractNativeEventFilter", Pointer: true, PointerCount: 1, ParameterName: "filterObj"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQAbstractNativeEventFilter := false
	for _, t := range referencedTypes {
		if t == "QAbstractNativeEventFilter" {
			hasQAbstractNativeEventFilter = true
			break
		}
	}

	if !hasQAbstractNativeEventFilter {
		t.Errorf("getReferencedTypes should include QAbstractNativeEventFilter when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextObject(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextDocument",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "object",
						ReturnType: cpp2c.CppParameter{ParameterType: "QTextObject", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextObject := false
	for _, t := range referencedTypes {
		if t == "QTextObject" {
			hasQTextObject = true
			break
		}
	}

	if !hasQTextObject {
		t.Errorf("getReferencedTypes should include QTextObject when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextFormat(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextObject",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "format",
						ReturnType: cpp2c.CppParameter{ParameterType: "QTextFormat"},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextFormat := false
	for _, t := range referencedTypes {
		if t == "QTextFormat" {
			hasQTextFormat = true
			break
		}
	}

	if !hasQTextFormat {
		t.Errorf("getReferencedTypes should include QTextFormat when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QAbstractUndoItem(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextDocument",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "createObject",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QAbstractUndoItem", Pointer: true, PointerCount: 1, ParameterName: "item"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQAbstractUndoItem := false
	for _, t := range referencedTypes {
		if t == "QAbstractUndoItem" {
			hasQAbstractUndoItem = true
			break
		}
	}

	if !hasQAbstractUndoItem {
		t.Errorf("getReferencedTypes should include QAbstractUndoItem when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QGradient(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QBrush",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "setGradient",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QGradient", ParameterName: "gradient"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQGradient := false
	for _, t := range referencedTypes {
		if t == "QGradient" {
			hasQGradient = true
			break
		}
	}

	if !hasQGradient {
		t.Errorf("getReferencedTypes should include QGradient when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextBlockFormat(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextCursor",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "setBlockFormat",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QTextBlockFormat", ParameterName: "format"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextBlockFormat := false
	for _, t := range referencedTypes {
		if t == "QTextBlockFormat" {
			hasQTextBlockFormat = true
			break
		}
	}

	if !hasQTextBlockFormat {
		t.Errorf("getReferencedTypes should include QTextBlockFormat when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextListFormat(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextCursor",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "insertList",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QTextListFormat", ParameterName: "format"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextListFormat := false
	for _, t := range referencedTypes {
		if t == "QTextListFormat" {
			hasQTextListFormat = true
			break
		}
	}

	if !hasQTextListFormat {
		t.Errorf("getReferencedTypes should include QTextListFormat when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextList(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextCursor",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "createList",
						ReturnType: cpp2c.CppParameter{ParameterType: "QTextList", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextList := false
	for _, t := range referencedTypes {
		if t == "QTextList" {
			hasQTextList = true
			break
		}
	}

	if !hasQTextList {
		t.Errorf("getReferencedTypes should include QTextList when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextTableFormat(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextCursor",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "insertTable",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QTextTableFormat", ParameterName: "format"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextTableFormat := false
	for _, t := range referencedTypes {
		if t == "QTextTableFormat" {
			hasQTextTableFormat = true
			break
		}
	}

	if !hasQTextTableFormat {
		t.Errorf("getReferencedTypes should include QTextTableFormat when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextTable(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextCursor",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "insertTable",
						ReturnType: cpp2c.CppParameter{ParameterType: "QTextTable", Pointer: true, PointerCount: 1},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextTable := false
	for _, t := range referencedTypes {
		if t == "QTextTable" {
			hasQTextTable = true
			break
		}
	}

	if !hasQTextTable {
		t.Errorf("getReferencedTypes should include QTextTable when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextFrameFormat(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextCursor",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "insertFrame",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QTextFrameFormat", ParameterName: "format"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextFrameFormat := false
	for _, t := range referencedTypes {
		if t == "QTextFrameFormat" {
			hasQTextFrameFormat = true
			break
		}
	}

	if !hasQTextFrameFormat {
		t.Errorf("getReferencedTypes should include QTextFrameFormat when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextDocumentFragment(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextCursor",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "insertFragment",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QTextDocumentFragment", ParameterName: "fragment"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextDocumentFragment := false
	for _, t := range referencedTypes {
		if t == "QTextDocumentFragment" {
			hasQTextDocumentFragment = true
			break
		}
	}

	if !hasQTextDocumentFragment {
		t.Errorf("getReferencedTypes should include QTextDocumentFragment when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextImageFormat(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextCursor",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "insertImage",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QTextImageFormat", ParameterName: "format"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextImageFormat := false
	for _, t := range referencedTypes {
		if t == "QTextImageFormat" {
			hasQTextImageFormat = true
			break
		}
	}

	if !hasQTextImageFormat {
		t.Errorf("getReferencedTypes should include QTextImageFormat when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QAccessibleEvent(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QAccessible",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "updateAccessibility",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QAccessibleEvent", Pointer: true, PointerCount: 1, ParameterName: "event"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQAccessibleEvent := false
	for _, t := range referencedTypes {
		if t == "QAccessibleEvent" {
			hasQAccessibleEvent = true
			break
		}
	}

	if !hasQAccessibleEvent {
		t.Errorf("getReferencedTypes should include QAccessibleEvent when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTextLength(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QTextFormat",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "lengthProperty",
						ReturnType: cpp2c.CppParameter{ParameterType: "QTextLength"},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTextLength := false
	for _, t := range referencedTypes {
		if t == "QTextLength" {
			hasQTextLength = true
			break
		}
	}

	if !hasQTextLength {
		t.Errorf("getReferencedTypes should include QTextLength when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QSurfaceFormat(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QSurface",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "format",
						ReturnType: cpp2c.CppParameter{ParameterType: "QSurfaceFormat"},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQSurfaceFormat := false
	for _, t := range referencedTypes {
		if t == "QSurfaceFormat" {
			hasQSurfaceFormat = true
			break
		}
	}

	if !hasQSurfaceFormat {
		t.Errorf("getReferencedTypes should include QSurfaceFormat when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QExposeEvent(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QWindow",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "exposeEvent",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QExposeEvent", Pointer: true, PointerCount: 1, ParameterName: "event"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQExposeEvent := false
	for _, t := range referencedTypes {
		if t == "QExposeEvent" {
			hasQExposeEvent = true
			break
		}
	}

	if !hasQExposeEvent {
		t.Errorf("getReferencedTypes should include QExposeEvent when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QTouchEvent(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QWindow",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "touchEvent",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QTouchEvent", Pointer: true, PointerCount: 1, ParameterName: "event"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQTouchEvent := false
	for _, t := range referencedTypes {
		if t == "QTouchEvent" {
			hasQTouchEvent = true
			break
		}
	}

	if !hasQTouchEvent {
		t.Errorf("getReferencedTypes should include QTouchEvent when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QQuaternion(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QMatrix4x4",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "rotate",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QQuaternion", ParameterName: "quaternion"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQQuaternion := false
	for _, t := range referencedTypes {
		if t == "QQuaternion" {
			hasQQuaternion = true
			break
		}
	}

	if !hasQQuaternion {
		t.Errorf("getReferencedTypes should include QQuaternion when used as parameter, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QPageLayout(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QPagedPaintDevice",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "pageLayout",
						ReturnType: cpp2c.CppParameter{ParameterType: "QPageLayout"},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQPageLayout := false
	for _, t := range referencedTypes {
		if t == "QPageLayout" {
			hasQPageLayout = true
			break
		}
	}

	if !hasQPageLayout {
		t.Errorf("getReferencedTypes should include QPageLayout when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QPageSize(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QPageLayout",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "pageSize",
						ReturnType: cpp2c.CppParameter{ParameterType: "QPageSize"},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQPageSize := false
	for _, t := range referencedTypes {
		if t == "QPageSize" {
			hasQPageSize = true
			break
		}
	}

	if !hasQPageSize {
		t.Errorf("getReferencedTypes should include QPageSize when used as return type, got: %v", referencedTypes)
	}
}

func TestGetReferencedTypes_QPageRanges(t *testing.T) {
	setupTestFilter()

	src := &cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "QPrintDevice",
				Methods: []cpp2c.CppMethod{
					{
						MethodName: "setPageRanges",
						Parameters: []cpp2c.CppParameter{
							{ParameterType: "QPageRanges", ParameterName: "ranges"},
						},
					},
				},
			},
		},
	}

	referencedTypes := cpp2c.GetReferencedTypesForTest(src)

	hasQPageRanges := false
	for _, t := range referencedTypes {
		if t == "QPageRanges" {
			hasQPageRanges = true
			break
		}
	}

	if !hasQPageRanges {
		t.Errorf("getReferencedTypes should include QPageRanges when used as parameter, got: %v", referencedTypes)
	}
}
