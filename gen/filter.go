package gen

import (
	"strings"

	"github.com/ddkwork/bindgen/cpp2c"
)

type QtFilter struct{}

func NewQtFilter() *QtFilter {
	return &QtFilter{}
}

func (f *QtFilter) AllowClass(className string) bool {
	return allowClass(className)
}

func (f *QtFilter) AllowMethod(className string, mm cpp2c.CppMethod) error {
	return allowMethod(className, mm)
}

func (f *QtFilter) AllowFreeFunction(fn cpp2c.CppFreeFunction) error {
	return allowFreeFunction(fn)
}

func (f *QtFilter) AllowSignal(mm cpp2c.CppMethod) bool {
	return allowSignal(mm)
}

func (f *QtFilter) AllowInheritedParent(className string) bool {
	return allowInheritedParent(className)
}

func (f *QtFilter) AllowVirtual(mm cpp2c.CppMethod) bool {
	return allowVirtual(mm)
}

func (f *QtFilter) AllowVirtualForClass(className string) bool {
	return allowVirtualForClass(className)
}

func (f *QtFilter) AllowCtor(className string, mm cpp2c.CppMethod) bool {
	return allowCtor(className, mm)
}

func (f *QtFilter) AllowType(p cpp2c.CppParameter, isReturnType bool) error {
	return allowType(p, isReturnType)
}

func (f *QtFilter) InsertTypedefs() {
	insertTypedefs()
}

func (f *QtFilter) HeaderPlatformRestriction(fullpath string) cpp2c.AllowedPlatformInfo {
	return headerPlatformRestriction(fullpath)
}

func (f *QtFilter) GetPureVirtualDefaults(className string) []cpp2c.PureVirtualDefault {
	return getPureVirtualDefaults(className)
}

func (f *QtFilter) ApplyQuirks(packageName, className string, mm *cpp2c.CppMethod) {
	applyQuirks(packageName, className, mm)
}

func (f *QtFilter) PreventStructDeclaration(className string) bool {
	switch className {
	case "QString", "QByteArray":
		return true
	case "QList", "QSet", "QMap", "QHash", "QPair", "QVector":
		return true
	case "iterator", "const_iterator", "reverse_iterator", "const_reverse_iterator",
		"key_value_iterator", "const_key_value_iterator":
		return true
	case "QUtf8StringView", "QAnyStringView", "QLatin1StringView", "QStringView", "QByteArrayView", "QStringRef":
		return true
	case "Disambiguated_t":
		return true
	case "strong_ordering", "weak_ordering", "partial_ordering":
		return true
	case "QByteArray::DataPointer", "QArrayDataPointer<char>":
		return true
	case "QChar::fromUcs4::R", "QChar::fromUcs2::R":
		return true
	case "QBasicAtomicInteger<int>":
		return true
	case "QQmlV4FunctionPtr":
		return true
	case "QVariantRef", "QVariantPointer":
		return true
	case "QVariant::PrivateShared", "QVariant::Private":
		return true
	case "QMetaObject::SuperData", "QMetaObject::Data":
		return true
	default:
		if strings.HasPrefix(className, "QNativeInterface__") {
			return true
		}
		if strings.Contains(className, "QNativeInterface") {
			return true
		}
		if strings.Contains(className, "<") {
			return true
		}
	}
	return false
}

func (f *QtFilter) ShouldEmitForwardDeclaration(className string) bool {
	switch className {
	case "QString", "QByteArray":
		return true
	case "QVariant::PrivateShared", "QVariant::Private":
		return true
	case "QMetaObject::SuperData", "QMetaObject::Data":
		return true
	default:
		return false
	}
}

func (f *QtFilter) ShouldEmitStructDefinition(className string) bool {
	return false
}

func (f *QtFilter) ShouldEmitEnumDefinition(enumName string) bool {
	return false
}
