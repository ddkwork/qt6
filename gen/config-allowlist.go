package gen

import (
	"path/filepath"
	"strings"

	"github.com/ddkwork/bindgen/cpp2c"
)

func insertTypedefs() {
	cpp2c.KnownClassnames.Set("QPaintDevice", cpp2c.LookupResultClass{"qt6", cpp2c.CppClass{ClassName: "QPaintDevice"}})
	cpp2c.KnownClassnames.Set("QPaintDeviceWindow", cpp2c.LookupResultClass{"qt6", cpp2c.CppClass{ClassName: "QPaintDeviceWindow"}})
	cpp2c.KnownClassnames.Set("QObjectData", cpp2c.LookupResultClass{"qt6", cpp2c.CppClass{ClassName: "QObjectData"}})

	pp := "qt6"

	// QString is deleted from this binding
	cpp2c.KnownTypedefs.Set("QStringList", cpp2c.LookupResultTypedef{pp, cpp2c.CppTypedef{"QStringList", cpp2c.ParseSingleTypeString("QList<QString>")}})

	// FIXME this isn't picked up automatically because QFile inherits QFileDevice and the name refers to its parent class
	cpp2c.KnownTypedefs.Set("QFile::FileTime", cpp2c.LookupResultTypedef{pp, cpp2c.CppTypedef{"QFile::FileTime", cpp2c.ParseSingleTypeString("QFileDevice::FileTime")}})

	// Must be removed for Qt 6

	// Not sure the reason for this one
	cpp2c.KnownTypedefs.Set("QSocketDescriptor::DescriptorType", cpp2c.LookupResultTypedef{pp, cpp2c.CppTypedef{"QSocketDescriptor::DescriptorType", cpp2c.ParseSingleTypeString("QSocketNotifier::Type")}})

	// QFile doesn't see QFileDevice parent class enum
	cpp2c.KnownTypedefs.Set("QFile::Permissions", cpp2c.LookupResultTypedef{pp, cpp2c.CppTypedef{"QFile::Permissions", cpp2c.ParseSingleTypeString("QFileDevice::Permissions")}})
	cpp2c.KnownTypedefs.Set("QFileDevice::Permissions", cpp2c.LookupResultTypedef{pp, cpp2c.CppTypedef{"QFile::Permissions", cpp2c.ParseSingleTypeString("QFlags<QFileDevice::Permission>")}})
	cpp2c.KnownTypedefs.Set("QIODevice::OpenMode", cpp2c.LookupResultTypedef{pp, cpp2c.CppTypedef{"QIODevice::OpenMode", cpp2c.ParseSingleTypeString("QIODeviceBase::OpenMode")}})

	// Qt 6 QVariant helper types - needs investigation
	cpp2c.KnownTypedefs.Set("QVariantHash", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QVariantHash", cpp2c.ParseSingleTypeString("QHash<QString,QVariant>")}})
	cpp2c.KnownTypedefs.Set("QVariantList", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QVariantList", cpp2c.ParseSingleTypeString("QList<QVariant>")}})
	cpp2c.KnownTypedefs.Set("QVariantMap", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QVariantMap", cpp2c.ParseSingleTypeString("QMap<QString,QVariant>")}})

	// Qt 6 renamed the enum to LibraryPath, but left some uses of LibraryLocation with a typedef
	cpp2c.KnownTypedefs.Set("QLibraryInfo::LibraryLocation", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QLibraryInfo::LibraryLocation", cpp2c.ParseSingleTypeString("QLibraryInfo::LibraryPath")}})

	// Qt 6 string view types - these are typedefs in q_no_char8_t namespace,
	// forward-declaring them as class causes ambiguous symbol errors
	cpp2c.KnownTypedefs.Set("QUtf8StringView", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QUtf8StringView", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QAnyStringView", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QAnyStringView", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QStringView", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QStringView", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QByteArrayView", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QByteArrayView", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QLatin1StringView", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QLatin1StringView", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QLatin1String", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QLatin1String", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QStringRef", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QStringRef", cpp2c.ParseSingleTypeString("void*")}})

	// C++20 ordering types - these are std types, not Qt classes
	cpp2c.KnownTypedefs.Set("strong_ordering", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"strong_ordering", cpp2c.ParseSingleTypeString("int")}})
	cpp2c.KnownTypedefs.Set("weak_ordering", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"weak_ordering", cpp2c.ParseSingleTypeString("int")}})
	cpp2c.KnownTypedefs.Set("partial_ordering", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"partial_ordering", cpp2c.ParseSingleTypeString("int")}})
	cpp2c.KnownTypedefs.Set("Disambiguated_t", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"Disambiguated_t", cpp2c.ParseSingleTypeString("int")}})

	// Qt internal types that should be treated as opaque
	cpp2c.KnownTypedefs.Set("QByteArray::FromBase64Result", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QByteArray::FromBase64Result", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("FromBase64Result", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"FromBase64Result", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QByteArray::DataPointer", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QByteArray::DataPointer", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QMetaObject::Connection", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QMetaObject::Connection", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("Connection", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"Connection", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QChar::fromUcs4::R", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QChar::fromUcs4::R", cpp2c.ParseSingleTypeString("int")}})
	cpp2c.KnownTypedefs.Set("QChar::fromUcs2::R", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QChar::fromUcs2::R", cpp2c.ParseSingleTypeString("int")}})
	cpp2c.KnownTypedefs.Set("QBasicAtomicInteger<int>", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QBasicAtomicInteger<int>", cpp2c.ParseSingleTypeString("int")}})
	cpp2c.KnownTypedefs.Set("QUntypedPropertyBinding", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QUntypedPropertyBinding", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QPropertyObserver", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QPropertyObserver", cpp2c.ParseSingleTypeString("void*")}})
	cpp2c.KnownTypedefs.Set("QPropertyBindingSourceLocation", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QPropertyBindingSourceLocation", cpp2c.ParseSingleTypeString("void*")}})

	cpp2c.KnownEnums.Set("QPaintDevice::PaintDeviceMetric", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{
		EnumName: "QPaintDevice::PaintDeviceMetric",
		UnderlyingType: cpp2c.CppParameter{
			ParameterType: "int",
		},
	}})
	cpp2c.KnownEnums.Set("PaintDeviceMetric", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{
		EnumName: "QPaintDevice::PaintDeviceMetric",
		UnderlyingType: cpp2c.CppParameter{
			ParameterType: "int",
		},
	}})

	cpp2c.KnownTypedefs.Set("QWidget::RenderFlags", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QWidget::RenderFlags", cpp2c.ParseSingleTypeString("QFlags<QWidget::RenderFlag>")}})
	cpp2c.KnownTypedefs.Set("RenderFlags", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QWidget::RenderFlags", cpp2c.ParseSingleTypeString("QFlags<QWidget::RenderFlag>")}})

	// Prevent template expansion of QIntegerForSizeof<std::size_t>
	// which would generate invalid C++ (std__size_t is not a valid type name)
	cpp2c.KnownTypedefs.Set("qsizetype", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"qsizetype", cpp2c.ParseSingleTypeString("int64_t")}})
	cpp2c.KnownTypedefs.Set("quintptr", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"quintptr", cpp2c.ParseSingleTypeString("uint64_t")}})
	cpp2c.KnownTypedefs.Set("qintptr", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"qintptr", cpp2c.ParseSingleTypeString("int64_t")}})
	cpp2c.KnownTypedefs.Set("qptrdiff", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"qptrdiff", cpp2c.ParseSingleTypeString("int64_t")}})
	cpp2c.KnownTypedefs.Set("WId", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"WId", cpp2c.ParseSingleTypeString("uintptr_t")}})
	cpp2c.KnownTypedefs.Set("QWidget::WId", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QWidget::WId", cpp2c.ParseSingleTypeString("uintptr_t")}})
	cpp2c.KnownTypedefs.Set("QWidgetData::WId", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QWidgetData::WId", cpp2c.ParseSingleTypeString("uintptr_t")}})
	cpp2c.KnownTypedefs.Set("QWidgetList", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QWidgetList", cpp2c.ParseSingleTypeString("QList<QWidget*>")}})

	// QByteArray Base64Options
	cpp2c.KnownTypedefs.Set("Base64Options", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"Base64Options", cpp2c.ParseSingleTypeString("QFlags<QByteArray::Base64Option>")}})
	cpp2c.KnownTypedefs.Set("Base64Option", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"Base64Option", cpp2c.ParseSingleTypeString("QByteArray::Base64Option")}})
	cpp2c.KnownEnums.Set("QByteArray::Base64Option", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QByteArray::Base64Option", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QString variants
	cpp2c.KnownEnums.Set("QString::NormalizationForm", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QString::NormalizationForm", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("NormalizationForm", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QString::NormalizationForm", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QChar::UnicodeVersion", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QChar::UnicodeVersion", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("UnicodeVersion", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QChar::UnicodeVersion", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QString SectionFlag/SectionFlags
	cpp2c.KnownEnums.Set("QString::SectionFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QString::SectionFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("SectionFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QString::SectionFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownTypedefs.Set("SectionFlags", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"SectionFlags", cpp2c.ParseSingleTypeString("QFlags<QString::SectionFlag>")}})

	// QEventLoop enums
	cpp2c.KnownEnums.Set("QEventLoop::ProcessEventsFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QEventLoop::ProcessEventsFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ProcessEventsFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QEventLoop::ProcessEventsFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownTypedefs.Set("ProcessEventsFlags", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"ProcessEventsFlags", cpp2c.ParseSingleTypeString("QFlags<QEventLoop::ProcessEventsFlag>")}})

	// QAbstractAnimation::Direction
	cpp2c.KnownEnums.Set("QAbstractAnimation::Direction", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QAbstractAnimation::Direction", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// NOTE: bare name "Direction" intentionally NOT registered due to ambiguity (QChar::Direction vs QAbstractAnimation::Direction)

	// QDeadlineTimer::ForeverConstant
	cpp2c.KnownEnums.Set("QDeadlineTimer::ForeverConstant", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDeadlineTimer::ForeverConstant", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ForeverConstant", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDeadlineTimer::ForeverConstant", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QIODeviceBase::OpenModeFlag / OpenMode
	cpp2c.KnownEnums.Set("QIODeviceBase::OpenModeFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QIODeviceBase::OpenModeFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("OpenModeFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QIODeviceBase::OpenModeFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownTypedefs.Set("QIODeviceBase::OpenMode", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"QIODeviceBase::OpenMode", cpp2c.ParseSingleTypeString("QFlags<QIODeviceBase::OpenModeFlag>")}})

	// QDataStream::Status
	cpp2c.KnownEnums.Set("QDataStream::Status", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDataStream::Status", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QTextStream enums
	cpp2c.KnownEnums.Set("QTextStream::Status", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextStream::Status", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QTextStream::RealNumberNotation", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextStream::RealNumberNotation", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("RealNumberNotation", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextStream::RealNumberNotation", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QTextStream::FieldAlignment", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextStream::FieldAlignment", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("FieldAlignment", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextStream::FieldAlignment", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QTextStream::NumberFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextStream::NumberFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("NumberFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextStream::NumberFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownTypedefs.Set("NumberFlags", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"NumberFlags", cpp2c.ParseSingleTypeString("QFlags<QTextStream::NumberFlag>")}})

	// QAbstractItemModel::CheckIndexOptions
	cpp2c.KnownEnums.Set("QAbstractItemModel::CheckIndexOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QAbstractItemModel::CheckIndexOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("CheckIndexOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QAbstractItemModel::CheckIndexOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QVariant::Type
	cpp2c.KnownEnums.Set("QVariant::Type", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QVariant::Type", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Type", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QVariant::Type", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QLocale enums
	cpp2c.KnownEnums.Set("QLocale::Language", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::Language", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Language", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::Language", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QLocale::Territory", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::Territory", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Territory", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::Territory", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QLocale::Country", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::Territory", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}}) // aliased
	cpp2c.KnownEnums.Set("Country", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::Territory", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QLocale::Script", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::Script", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Script", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::Script", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QLocale::FormatType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::FormatType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("FormatType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::FormatType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	cpp2c.KnownEnums.Set("QDateTime::TransitionResolution", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDateTime::TransitionResolution", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("TransitionResolution", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDateTime::TransitionResolution", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QRegularExpression
	cpp2c.KnownEnums.Set("QRegularExpression::PatternOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::PatternOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("PatternOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::PatternOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QRegularExpression::MatchType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::MatchType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MatchType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::MatchType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QRegularExpression::MatchOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::MatchOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MatchOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::MatchOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QFlags typedefs for QRegularExpression (bare names need resolution)
	cpp2c.KnownEnums.Set("PatternOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::PatternOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MatchOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::MatchOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QRegularExpression::WildcardConversionOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::WildcardConversionOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("WildcardConversionOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::WildcardConversionOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("WildcardConversionOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRegularExpression::WildcardConversionOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QLocale
	cpp2c.KnownEnums.Set("QLocale::TagSeparator", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::TagSeparator", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("TagSeparator", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::TagSeparator", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QLocale::CurrencySymbolFormat", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::CurrencySymbolFormat", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("CurrencySymbolFormat", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::CurrencySymbolFormat", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QLocale::DataSizeFormat", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::DataSizeFormat", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("DataSizeFormat", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::DataSizeFormat", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("DataSizeFormats", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::DataSizeFormats", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QLocale::QuotationStyle", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::QuotationStyle", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QuotationStyle", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::QuotationStyle", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QCalendar
	cpp2c.KnownEnums.Set("QCalendar::System", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCalendar::System", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("System", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCalendar::System", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QUrl
	cpp2c.KnownEnums.Set("QUrl::ParsingMode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::ParsingMode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ParsingMode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::ParsingMode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QUrl::UrlFormattingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::UrlFormattingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("UrlFormattingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::UrlFormattingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("FormattingOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::FormattingOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QUrl::ComponentFormattingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::ComponentFormattingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ComponentFormattingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::ComponentFormattingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ComponentFormattingOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::ComponentFormattingOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QCborError
	cpp2c.KnownEnums.Set("QCborError::Code", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborError::Code", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Code", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborError::Code", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QCborValue
	cpp2c.KnownEnums.Set("QCborValue::EncodingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborValue::EncodingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("EncodingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborValue::EncodingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("EncodingOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborValue::EncodingOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QCborValue::DiagnosticNotationOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborValue::DiagnosticNotationOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("DiagnosticNotationOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborValue::DiagnosticNotationOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("DiagnosticNotationOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborValue::DiagnosticNotationOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QUrl
	cpp2c.KnownEnums.Set("QUrl::UserInputResolutionOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::UserInputResolutionOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("UserInputResolutionOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::UserInputResolutionOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("UserInputResolutionOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::UserInputResolutionOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QUrl::AceProcessingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::AceProcessingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("AceProcessingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::AceProcessingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("AceProcessingOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUrl::AceProcessingOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QUuid
	cpp2c.KnownEnums.Set("QUuid::StringFormat", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUuid::StringFormat", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("StringFormat", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QUuid::StringFormat", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QCryptographicHash
	cpp2c.KnownEnums.Set("QCryptographicHash::Algorithm", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCryptographicHash::Algorithm", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Algorithm", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCryptographicHash::Algorithm", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QTouchEvent
	cpp2c.KnownEnums.Set("Qt::TouchPointState", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "Qt::TouchPointState", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("State", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "Qt::TouchPointState", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QFontDatabase
	cpp2c.KnownEnums.Set("QFontDatabase::WritingSystem", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFontDatabase::WritingSystem", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("WritingSystem", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFontDatabase::WritingSystem", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QTextOption
	cpp2c.KnownEnums.Set("QTextOption::Tab", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextOption::Tab", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Tab", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextOption::Tab", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QInputDevice
	cpp2c.KnownEnums.Set("QInputDevice::Capability", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QInputDevice::Capability", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Capability", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QInputDevice::Capability", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Capabilities", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QInputDevice::Capabilities", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QPointingDevice
	cpp2c.KnownEnums.Set("QPointingDevice::PointerType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPointingDevice::PointerType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("PointerType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPointingDevice::PointerType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QPointingDevice::GrabTransition", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPointingDevice::GrabTransition", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("GrabTransition", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPointingDevice::GrabTransition", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QNetworkInformation
	cpp2c.KnownEnums.Set("QNetworkInformation::Reachability", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkInformation::Reachability", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Reachability", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkInformation::Reachability", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QNetworkInformation::TransportMedium", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkInformation::TransportMedium", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("TransportMedium", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkInformation::TransportMedium", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QNetworkCookie
	cpp2c.KnownEnums.Set("QNetworkCookie::SameSite", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkCookie::SameSite", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("SameSite", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkCookie::SameSite", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QTextBlockFormat
	cpp2c.KnownEnums.Set("QTextBlockFormat::MarkerType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextBlockFormat::MarkerType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MarkerType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextBlockFormat::MarkerType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QPixelFormat
	cpp2c.KnownEnums.Set("QPixelFormat::ByteOrder", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPixelFormat::ByteOrder", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QDnsTlsAssociationRecord
	cpp2c.KnownEnums.Set("QDnsTlsAssociationRecord::CertificateUsage", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDnsTlsAssociationRecord::CertificateUsage", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("CertificateUsage", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDnsTlsAssociationRecord::CertificateUsage", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QNetworkRequest
	cpp2c.KnownEnums.Set("QNetworkRequest::Priority", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkRequest::Priority", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Priority", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkRequest::Priority", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// MarkdownFeature - correct qualified name is QTextDocument::MarkdownFeature, not Qt::MarkdownFeature
	cpp2c.KnownEnums.Set("Qt::MarkdownFeature", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextDocument::MarkdownFeature", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MarkdownFeature", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextDocument::MarkdownFeature", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QDBusConnectionInterface
	cpp2c.KnownEnums.Set("QDBusConnectionInterface::RegisterServiceReply", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDBusConnectionInterface::RegisterServiceReply", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("RegisterServiceReply", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDBusConnectionInterface::RegisterServiceReply", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QInputDevice::DeviceType
	cpp2c.KnownEnums.Set("QInputDevice::DeviceType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QInputDevice::DeviceType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("DeviceType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QInputDevice::DeviceType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QCommandLineParser
	cpp2c.KnownEnums.Set("QCommandLineParser::SingleDashWordOptionMode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCommandLineParser::SingleDashWordOptionMode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("SingleDashWordOptionMode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCommandLineParser::SingleDashWordOptionMode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QCommandLineParser::OptionsAfterPositionalArgumentsMode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCommandLineParser::OptionsAfterPositionalArgumentsMode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("OptionsAfterPositionalArgumentsMode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCommandLineParser::OptionsAfterPositionalArgumentsMode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QCommandLineParser::MessageType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCommandLineParser::MessageType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MessageType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCommandLineParser::MessageType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QCborStreamReader
	cpp2c.KnownEnums.Set("QCborStreamReader::StringResultCode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborStreamReader::StringResultCode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("StringResultCode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborStreamReader::StringResultCode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QtMsgType (used by QCommandLineParser)
	cpp2c.KnownEnums.Set("QtMsgType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QtMsgType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// Qt::EncodingOption (used by QCborValueConstRef::toCbor) - NOTE: Clang drops QCborValue:: prefix
	cpp2c.KnownEnums.Set("QCborValue::EncodingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborValue::EncodingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("EncodingOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCborValue::EncodingOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QFlags<QCborValue::EncodingOption>", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFlags<QCborValue::EncodingOption>", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QLocale::NumberOption / NumberOptions
	cpp2c.KnownEnums.Set("QLocale::NumberOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::NumberOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("NumberOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::NumberOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("NumberOptions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocale::NumberOptions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QFileDevice::Permission
	cpp2c.KnownEnums.Set("QFileDevice::Permission", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFileDevice::Permission", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Permission", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFileDevice::Permission", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QDataStream
	cpp2c.KnownEnums.Set("QDataStream::ByteOrder", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDataStream::ByteOrder", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ByteOrder", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDataStream::ByteOrder", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QDataStream::FloatingPointPrecision", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDataStream::FloatingPointPrecision", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("FloatingPointPrecision", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDataStream::FloatingPointPrecision", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QFile::MemoryMapFlag
	cpp2c.KnownEnums.Set("QFile::MemoryMapFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFile::MemoryMapFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MemoryMapFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFile::MemoryMapFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QFile::MemoryMapFlags", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFile::MemoryMapFlags", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// Qt::HANDLE is void* on Windows, used by QThread::threadId
	cpp2c.KnownTypedefs.Set("Qt::HANDLE", cpp2c.LookupResultTypedef{"qt6", cpp2c.CppTypedef{"Qt::HANDLE", cpp2c.ParseSingleTypeString("void*")}})

	// QDir::Filter / Filters
	cpp2c.KnownEnums.Set("QDir::Filter", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDir::Filter", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Filter", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDir::Filter", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Filters", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDir::Filters", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QDirIterator::IteratorFlag
	cpp2c.KnownEnums.Set("QDirIterator::IteratorFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDirIterator::IteratorFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("IteratorFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDirIterator::IteratorFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("IteratorFlags", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDirIterator::IteratorFlags", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QTimeZone
	cpp2c.KnownEnums.Set("QTimeZone::Initialization", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTimeZone::Initialization", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Initialization", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTimeZone::Initialization", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QTimeZone::TimeType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTimeZone::TimeType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("TimeType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTimeZone::TimeType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// QMetaObject::Connection (RestrictedBool return type issue)
	cpp2c.KnownEnums.Set("QMetaObject::Connection::RestrictedBool", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QMetaObject::Connection::RestrictedBool", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("RestrictedBool", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QMetaObject::Connection::RestrictedBool", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})

	// Additional bare enum names that Clang resolves without namespace prefix
	// NOTE: Only add entries here if the bare name is UNIQUE across all Qt classes.
	// If multiple classes have the same bare enum name (e.g. State, Direction),
	// do NOT add it here - let GetQtCppType() resolve the correct qualified name instead.
	cpp2c.KnownEnums.Set("Permissions", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFileDevice::Permissions", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MemoryMapFlags", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFile::MemoryMapFlags", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("NameType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTimeZone::NameType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QualityOfService", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QThread::QualityOfService", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QThread::Priority", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QThread::Priority", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Selector", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDnsTlsAssociationRecord::Selector", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QDnsTlsAssociationRecord::Selector", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDnsTlsAssociationRecord::Selector", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MatchingType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDnsTlsAssociationRecord::MatchingType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QDnsTlsAssociationRecord::MatchingType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDnsTlsAssociationRecord::MatchingType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QNetworkProxy::Capabilities", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkProxy::Capabilities", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QNetworkProxy::Capability", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QNetworkProxy::Capability", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Transformation", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QImageIOHandler::Transformation", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QImageIOHandler::Transformation", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QImageIOHandler::Transformation", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("WritingSystem", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFontDatabase::WritingSystem", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QFontDatabase::WritingSystem", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFontDatabase::WritingSystem", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("FormatOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSurfaceFormat::FormatOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QSurfaceFormat::FormatOption", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSurfaceFormat::FormatOption", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("GlyphRunRetrievalFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextLayout::GlyphRunRetrievalFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QTextLayout::GlyphRunRetrievalFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextLayout::GlyphRunRetrievalFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MarkdownFeature", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextDocument::MarkdownFeature", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QTextDocument::MarkdownFeature", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextDocument::MarkdownFeature", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Primaries", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QColorSpace::Primaries", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QColorSpace::Primaries", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QColorSpace::Primaries", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("TransferFunction", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QColorSpace::TransferFunction", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QColorSpace::TransferFunction", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QColorSpace::TransferFunction", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("TransformModel", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QColorSpace::TransformModel", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QColorSpace::TransformModel", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QColorSpace::TransformModel", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ColorModel", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QColorSpace::ColorModel", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QColorSpace::ColorModel", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QColorSpace::ColorModel", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MessageType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDBusMessage::MessageType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QDBusMessage::MessageType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDBusMessage::MessageType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QCommandLineParser::MessageType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QCommandLineParser::MessageType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ExclusionPolicy", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QActionGroup::ExclusionPolicy", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QActionGroup::ExclusionPolicy", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QActionGroup::ExclusionPolicy", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QImageIOPlugin::Capabilities", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QImageIOPlugin::Capabilities", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QImageIOPlugin::Capability", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QImageIOPlugin::Capability", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QEventPoint::States", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QEventPoint::States", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QEventPoint::State", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QEventPoint::State", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("PointerType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPointingDevice::PointerType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QPointingDevice::PointerType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPointingDevice::PointerType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("DirtyFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPaintEngine::DirtyFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QPaintEngine::DirtyFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPaintEngine::DirtyFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("RenderHint", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPainter::RenderHint", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QPainter::RenderHint", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QPainter::RenderHint", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("RenderFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QWidget::RenderFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QWidget::RenderFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QWidget::RenderFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("SelectionFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QItemSelectionModel::SelectionFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("LibraryPath", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLibraryInfo::LibraryPath", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("LibraryLocation", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLibraryInfo::LibraryLocation", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("MatchMode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QMimeDatabase::MatchMode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("JsonFormat", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QJsonDocument::JsonFormat", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ParseError", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QJsonParseError::ParseError", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Accuracy", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocationPermission::Accuracy", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Availability", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QLocationPermission::Availability", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QSizePolicy enums
	cpp2c.KnownEnums.Set("ControlType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSizePolicy::ControlType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QSizePolicy::ControlType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSizePolicy::ControlType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ControlTypes", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSizePolicy::ControlTypes", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QSizePolicy::ControlTypes", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSizePolicy::ControlTypes", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QStyle enums
	cpp2c.KnownEnums.Set("StateFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::StateFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyle::StateFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::StateFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("SubControl", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::SubControl", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyle::SubControl", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::SubControl", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("SubControls", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::SubControls", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyle::SubControls", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::SubControls", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ComplexControl", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::ComplexControl", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyle::ComplexControl", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::ComplexControl", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("PixelMetric", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::PixelMetric", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyle::PixelMetric", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::PixelMetric", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ContentsType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::ContentsType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyle::ContentsType", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::ContentsType", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("PrimitiveElement", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::PrimitiveElement", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyle::PrimitiveElement", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::PrimitiveElement", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("ControlElement", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::ControlElement", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyle::ControlElement", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyle::ControlElement", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QAbstractSpinBox enums
	cpp2c.KnownEnums.Set("StepEnabledFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QAbstractSpinBox::StepEnabledFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QAbstractSpinBox::StepEnabledFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QAbstractSpinBox::StepEnabledFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("StepEnabled", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QAbstractSpinBox::StepEnabled", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QAbstractSpinBox::StepEnabled", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QAbstractSpinBox::StepEnabled", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QStyleOptionFrame enums
	cpp2c.KnownEnums.Set("FrameFeature", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyleOptionFrame::FrameFeature", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyleOptionFrame::FrameFeature", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyleOptionFrame::FrameFeature", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("FrameFeatures", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyleOptionFrame::FrameFeatures", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QStyleOptionFrame::FrameFeatures", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QStyleOptionFrame::FrameFeatures", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QSizePolicy::Policy and PolicyFlag
	cpp2c.KnownEnums.Set("PolicyFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSizePolicy::PolicyFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QSizePolicy::PolicyFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSizePolicy::PolicyFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("Policy", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSizePolicy::Policy", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QSizePolicy::Policy", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QSizePolicy::Policy", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QComboBox enums
	cpp2c.KnownEnums.Set("LabelDrawingMode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QComboBox::LabelDrawingMode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QComboBox::LabelDrawingMode", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QComboBox::LabelDrawingMode", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("SizeAdjustPolicy", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QComboBox::SizeAdjustPolicy", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QComboBox::SizeAdjustPolicy", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QComboBox::SizeAdjustPolicy", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("InsertPolicy", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QComboBox::InsertPolicy", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QComboBox::InsertPolicy", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QComboBox::InsertPolicy", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QDockWidget enums
	cpp2c.KnownEnums.Set("DockWidgetFeature", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDockWidget::DockWidgetFeature", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QDockWidget::DockWidgetFeature", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDockWidget::DockWidgetFeature", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("DockWidgetFeatures", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDockWidget::DockWidgetFeatures", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QDockWidget::DockWidgetFeatures", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QDockWidget::DockWidgetFeatures", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QFormLayout enums
	cpp2c.KnownEnums.Set("ItemRole", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFormLayout::ItemRole", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QFormLayout::ItemRole", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QFormLayout::ItemRole", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QGraphicsScene enums
	cpp2c.KnownEnums.Set("SceneLayer", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QGraphicsScene::SceneLayer", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QGraphicsScene::SceneLayer", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QGraphicsScene::SceneLayer", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("SceneLayers", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QGraphicsScene::SceneLayers", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QGraphicsScene::SceneLayers", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QGraphicsScene::SceneLayers", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QTextDocument enums
	cpp2c.KnownEnums.Set("FindFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextDocument::FindFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QTextDocument::FindFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextDocument::FindFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("FindFlags", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextDocument::FindFlags", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QTextDocument::FindFlags", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTextDocument::FindFlags", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QRhiWidget enums
	cpp2c.KnownEnums.Set("Api", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRhiWidget::Api", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QRhiWidget::Api", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRhiWidget::Api", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("TextureFormat", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRhiWidget::TextureFormat", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QRhiWidget::TextureFormat", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QRhiWidget::TextureFormat", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QGraphicsBlurEffect enums
	cpp2c.KnownEnums.Set("BlurHint", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QGraphicsBlurEffect::BlurHint", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QGraphicsBlurEffect::BlurHint", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QGraphicsBlurEffect::BlurHint", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("BlurHints", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QGraphicsBlurEffect::BlurHints", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QGraphicsBlurEffect::BlurHints", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QGraphicsBlurEffect::BlurHints", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	// QTreeWidgetItemIterator enums
	cpp2c.KnownEnums.Set("QTreeWidgetItemIterator::IteratorFlag", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTreeWidgetItemIterator::IteratorFlag", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
	cpp2c.KnownEnums.Set("QTreeWidgetItemIterator::IteratorFlags", cpp2c.LookupResultEnum{"qt6", cpp2c.CppEnum{EnumName: "QTreeWidgetItemIterator::IteratorFlags", UnderlyingType: cpp2c.CppParameter{ParameterType: "int"}}})
}

type AndroidBlockedPlatform struct{}

func (abp AndroidBlockedPlatform) GoBuildTag() string {
	return `!android`
}

func (abp AndroidBlockedPlatform) CxxIf() string {
	return `! defined(Q_OS_ANDROID)`
}

func headerPlatformRestriction(fullpath string) cpp2c.AllowedPlatformInfo {
	fname := filepath.Base(fullpath)

	if fname == `qsharedmemory.h` {
		// Not implemented on Android nor iOS
		// Qt 5: Classes are present but do not work
		// Qt 6: Class definition is not present and our generated subclass fails to compile
		return AndroidBlockedPlatform{}
	}

	// No platform restriction
	return nil
}

func isBlockedInternalStructType(typeName string) bool {
	switch typeName {
	case
		"QQuickItem::ItemChangeData",
		"QQuickItem::UpdatePaintNodeData",
		"QSGGeometry::AttributeSet",
		"QSGGeometry::Attribute",
		"QSGGeometry::ColoredPoint2D",
		"QSGGeometry::Point2D",
		"QSGGeometry::TexturedPoint2D",
		"QSGGeometry::Point2D5",
		"QSGMaterialShader::RenderState",
		"QSGMaterialShader::GraphicsPipelineState",
		"QSGRenderNode::RenderState",
		"QQuickFramebufferObject::Renderer",
		"QQuickWindow::GraphicsStateInfo",
		"QQmlContext::PropertyPair",
		"QDtlsClientVerifier::GeneratorParameters",
		"QDtlsClientVerifier::VerifiedTLS",
		"QNetworkReply::RawHeaderPair",
		"RawHeaderPair",
		"QOpenGLVertexArrayObject::Binder",
		"Binder",
		"ItemChangeData",
		"UpdatePaintNodeData",
		"AttributeSet",
		"Attribute",
		"ColoredPoint2D",
		"Point2D",
		"TexturedPoint2D",
		"RenderState",
		"GraphicsPipelineState",
		"Renderer",
		"GraphicsStateInfo",
		"PropertyPair",
		"GeneratorParameters",
		"QQmlSA::Element",
		"Binding",
		"QMediaTimeRange::Interval",
		"QAbstractVideoBuffer::MapData",
		"QQmlSA::SourceLocation",
		"QQmlSA::Method",
		"QQmlSA::Property",
		"QQmlSA::LoggerWarningId",
		"QMediaFormat::VideoCodec",
		"QMediaFormat::AudioCodec",
		"Qt::ParamTypeFlag":
		return true
	}
	if strings.HasPrefix(typeName, "const ") && strings.HasSuffix(typeName, " &") {
		baseType := typeName[6 : len(typeName)-2]
		return isBlockedInternalStructType(baseType)
	}
	if strings.HasPrefix(typeName, "const ") && strings.HasSuffix(typeName, "*") {
		baseType := typeName[6 : len(typeName)-1]
		return isBlockedInternalStructType(baseType)
	}
	if strings.HasSuffix(typeName, " *") {
		baseType := typeName[:len(typeName)-2]
		return isBlockedInternalStructType(baseType)
	}
	if strings.HasSuffix(typeName, " &") {
		baseType := typeName[:len(typeName)-2]
		return isBlockedInternalStructType(baseType)
	}
	return false
}

func allowClassBase(className string) bool {
	switch className {
	case "bool", "char", "signed char", "unsigned char",
		"short", "unsigned short", "int", "unsigned int",
		"long", "unsigned long", "long long", "unsigned long long",
		"float", "double", "long double",
		"void", "size_t", "ssize_t", "ptrdiff_t",
		"int8_t", "int16_t", "int32_t", "int64_t",
		"uint8_t", "uint16_t", "uint32_t", "uint64_t",
		"ImU8", "ImU16", "ImU32", "ImU64",
		"ImS8", "ImS16", "ImS32", "ImS64",
		"ImWchar", "ImWchar16", "ImWchar32":
		return true
	}

	if len(cpp2c.ActiveAllowedClassPrefix) > 0 {
		allowed := false
		for _, prefix := range cpp2c.ActiveAllowedClassPrefix {
			if strings.HasPrefix(className, prefix) {
				allowed = true
				break
			}
		}
		if !allowed {
			return false
		}
	}

	if strings.Contains(className, "Private::") {
		return false
	}
	if strings.HasPrefix(className, `std::`) {
		return false
	}
	if strings.Contains(className, "QNativeInterface") {
		return false
	}
	if strings.HasPrefix(className, "QQmlSA::") || strings.HasPrefix(className, "QQmlSA__") {
		return false
	}

	return true
}

func isBlockedClass(className string) bool {
	switch className {
	case
		"QPartialOrdering",
		"strong_ordering", "weak_ordering", "partial_ordering",
		"Qt::strong_ordering", "Qt::weak_ordering", "Qt::partial_ordering",
		"QMessageLogger",
		"_GUID",
		"GUID",
		"ResultItem",
		"QtPrivate__ResultStoreBase",
		"QtPrivate__ResultItem",
		"QtPrivate__QMetaTypeInterface",
		"QNoDebug",
		"QGenericRunnable",
		"QMetaObject__Connection",
		"QMetaObject::Connection",
		"Connection",
		"QDtlsClientVerifier",
		"QDtlsClientVerifier::GeneratorParameters",
		"QOpenGLVertexArrayObject::Binder",
		"QDtls",
		"QSGGeometry::Attribute",
		"QSGGeometry__Attribute",
		"Attribute",
		"QSGRenderNode::RenderState",
		"QSGRenderNode__RenderState",
		"RenderState",
		"QQmlSA::Element",
		"QQmlSA__Element",
		"Element",
		"QQmlSA::Binding",
		"QQmlSA__Binding",
		"QQmlSA::SourceLocation",
		"QQmlSA__SourceLocation",
		"SourceLocation",
		"QQmlSA::Method",
		"QQmlSA__Method",
		"QQmlSA::Property",
		"QQmlSA__Property",
		"QQmlSA::LoggerWarningId",
		"QQmlSA__LoggerWarningId",
		"LoggerWarningId",
		"QMediaFormat::VideoCodec",
		"QMediaFormat__VideoCodec",
		"VideoCodec",
		"QMediaFormat::AudioCodec",
		"QMediaFormat__AudioCodec",
		"AudioCodec",
		"Qt::ParamTypeFlag",
		"Qt__ParamTypeFlag",
		"ParamTypeFlag",
		"QMediaTimeRange::Interval",
		"QMediaTimeRange__Interval",
		"Interval",
		"QAbstractVideoBuffer::MapData",
		"QAbstractVideoBuffer__MapData",
		"MapData",
		"QVideoFrame::PaintOptions",
		"QVideoFrame__PaintOptions",
		"PaintOptions",
		"QObject (*)()",
		"QInternal",
		"qInternalCallback",
		"QtPrivate__Deprecated_t",
		"Deprecated_t",
		"QtPrivate__CompareAgainstLiteralZero",
		"CompareAgainstLiteralZero",
		"QtPrivate__QVersionTag",
		"QVersionTag",
		"QtPrivate__SlotObjSharedPtr",
		"SlotObjSharedPtr",
		"QByteArray__FromBase64Result",
		"QByteArray::FromBase64Result",
		"FromBase64Result",
		"QChar__fromUcs4__R",
		"QChar::fromUcs4::R",
		"QBasicAtomicInteger",
		"QByteArrayView__const_pointer",
		"QByteArrayView::const_pointer",
		"const_pointer",
		"std::pair",
		"QUuid__operator__GUID",
		"QOperatingSystemVersionBase",
		"QOperatingSystemVersionUnexported",
		"QWeakPointer",
		"QSharedPointer",
		"QFuture",
		"QPixmapCache::Key",
		"QPixmapCache__Key",
		"QStringView",
		"QByteArrayView",
		"QLatin1StringView",
		"QLatin1String",
		"QUtf8StringView",
		"QAnyStringView",
		"QStringRef",
		"QtMetaContainerPrivate::QMetaContainerInterface",
		"QtMetaContainerPrivate::QMetaSequenceInterface",
		"QtMetaContainerPrivate::QMetaAssociationInterface",
		"QtMetaContainerPrivate::SequentialConstIterator",
		"QtMetaContainerPrivate::SequentialIterator",
		"QtMetaContainerPrivate::AssociativeConstIterator",
		"QtMetaContainerPrivate::AssociativeIterator",
		"QtMetaContainerPrivate::Sequence",
		"QtMetaContainerPrivate::Association",
		"QMetaContainerInterface",
		"QMetaSequenceInterface",
		"QMetaAssociationInterface",
		"QtMetaTypePrivate::QPairVariantInterfaceImpl",
		"QPairVariantInterfaceImpl",
		"QRangeModelDetails::PropertyCache",
		"QRangeModelDetails::ConnectionStorage",
		"QObjectData",
		"Qt::Disambiguated_t",
		"QNativeInterface::QWindowsScreen",
		"QNativeInterface::QWindowsApplication",
		"QNativeInterface::QWindowsWindow",
		"QNativeInterface::QWindowsFontDatabase",
		"QNativeInterface::QWGLContext",
		"QInputMethodEvent::Attribute",
		"QAbstractTextDocumentLayout::Selection",
		"QAccessibleObject",
		"QAccessibleStateChangeEvent",
		"QtSharedPointer::ExternalRefCountData",
		"QMetaObject::SuperData",
		"QRangeModelDetails::AutoConnectContext",
		"QFutureWatcherBase",
		"QDirListing::sentinel",
		"QElapsedTimer::Duration",
		"QProcess::CreateProcessArgumentModifier",
		"QCborMap::value_type",
		"QMetaObject::Data",
		"QAbstractEventDispatcher::TimerInfo",
		"QStringConverterBase::State",
		"QAbstractEventDispatcher::TimerInfoV2",
		"QAbstractTextDocumentLayout::PaintContext",
		"QPainterPath::Element",
		"QTextEdit::ExtraSelection",
		"QWindowsMimeConverter",
		"QAbstractEventDispatcherV2",
		"QFormLayout::TakeRowResult",
		"QTextBlock::iterator",
		"QMetaObject::Data::StaticMetacallFunction",
		"QStringConverterBase::State::ClearDataFn",
		"QStringConverterBase::State::Flags",
		"QMetaObject::Data::SuperData",
		"QEventPoint::States",
		"QQuaternion::Axes",
		"QVariantAnimation::KeyValues",
		"QAbstractEventDispatcher::Duration",
		"QUuid::Id128Bytes",
		"QCborArray::Iterator",
		"QCborArray::ConstIterator",
		"QCborMap::Iterator",
		"QCborMap::ConstIterator",
		"QVariant::Private",
		"QVariant::PrivateShared",
		"QCalendar::SystemId",
		"QCalendar::YearMonthDay",
		"qfloat16",
		"QCborValueRef",
		"QCborValueConstRef",
		"QJsonArray::Iterator",
		"QJsonArray::ConstIterator",
		"QJsonArray::iterator",
		"QJsonArray::const_iterator",
		"QJsonObject::Iterator",
		"QJsonObject::ConstIterator",
		"QJsonObject::iterator",
		"QJsonObject::const_iterator",
		"QTimeZone::OffsetData",
		"QAccessible::State",
		"QAccessible::ActivationObserver",
		"QFont::Tag",
		"QTextOption::Tab",
		"QTextLayout::FormatRange",
		"QGradient::QGradientData",
		"QColorSpace::PrimaryPoints",
		"QIconEngine::ScaledPixmapArgument",
		"QPageRanges::Range",
		"QPainter::PixmapFragment",
		"QQuaternion::Axis",
		"QTextFrame::iterator":
		return true
	}
	if strings.HasPrefix(className, "QNativeInterface__") || strings.Contains(className, "QNativeInterface") {
		return true
	}
	if strings.Contains(className, "<") {
		return true
	}
	return false
}

func allowClass(className string) bool {
	switch className {
	case "bool", "char", "signed char", "unsigned char",
		"short", "unsigned short", "int", "unsigned int",
		"long", "unsigned long", "long long", "unsigned long long",
		"float", "double", "long double",
		"void", "size_t", "ssize_t", "ptrdiff_t",
		"int8_t", "int16_t", "int32_t", "int64_t",
		"uint8_t", "uint16_t", "uint32_t", "uint64_t",
		"ImU8", "ImU16", "ImU32", "ImU64",
		"ImS8", "ImS16", "ImS32", "ImS64",
		"ImWchar", "ImWchar16", "ImWchar32":
		return true
	}

	if !widgetNeededClasses[className] {
		if strings.Contains(className, "::") {
			baseClass := strings.Split(className, "::")[0]
			if widgetNeededClasses[baseClass] {
				if isBlockedClass(className) {
					return false
				}
				return true
			}
		}
		return false
	}

	if len(cpp2c.ActiveAllowedClassPrefix) > 0 {
		allowed := false
		for _, prefix := range cpp2c.ActiveAllowedClassPrefix {
			if strings.HasPrefix(className, prefix) {
				allowed = true
				break
			}
		}
		if !allowed {
			return false
		}
	}

	// QtPrivate:: types are internal implementation details in public headers,
	// not real API classes. Block them to avoid __ type name mismatches.
	if strings.Contains(className, "Private::") {
		return false
	}
	if strings.HasPrefix(className, `std::`) {
		return false
	}
	if strings.Contains(className, "QNativeInterface") {
		return false
	}
	if strings.HasPrefix(className, "QQmlSA::") || strings.HasPrefix(className, "QQmlSA__") {
		return false
	}

	if isBlockedClass(className) {
		return false
	}

	return true
}

func allowSignal(mm cpp2c.CppMethod) bool {
	if !mm.ReturnType.Void() {
		// This affects how we cast the signal function pointer for connect
		// It would be fixable, but, real signals always have void return types anyway
		return false
	}

	switch mm.MethodName {
	case `metaObject`, `qt_metacast`,
		`clone`,
		`installNativeEventFilter`, `removeNativeEventFilter`:
		return false
	default:
		return true
	}
}

func allowInheritedParent(className string) bool {
	if strings.HasPrefix(className, `QList<`) {
		return false
	}

	return true
}

func allowVirtual(mm cpp2c.CppMethod) bool {
	if mm.MethodName == "metaObject" || mm.MethodName == "qt_metacast" {
		return false
	}
	// Block protected virtual methods - they cause linking issues
	if mm.IsProtected {
		return false
	}
	// Block virtual methods that already have PureVirtualDefaults to prevent
	// duplicate override definitions (C2535). The PureVirtualDefault provides
	// the base implementation, and without this block the engine would also
	// generate a callback-based override, causing two overrides of the same method.
	switch mm.MethodName {
	case "capabilities", "validate", "standardIcon", "standardPixmap",
		"scrollTo", "moveCursor", "recognize",
		"drawPrimitive", "drawControl", "subElementRect",
		"drawComplexControl", "hitTestComplexControl", "subControlRect",
		"pixelMetric", "sizeFromContents", "styleHint":
		return false
	}
	return true // allowSignal(mm)
}

func allowVirtualForClass(className string) bool {
	// Block virtual overrides for abstract classes that cannot be instantiated
	switch className {
	case "QListWidgetItem", "QTableWidgetItem", "QTreeWidgetItem":
		return false
	case "QAbstractButton":
		return false
	case "QAbstractItemView":
		return false
	case "QGraphicsLayoutItem":
		return false
	case "QGraphicsLayout":
		return false
	case "QGraphicsEffect":
		return false
	case "QAbstractEventDispatcher":
		return false
	case "QAbstractNativeEventFilter":
		return false
	case "QIODevice":
		return false
	case "QAbstractTextDocumentLayout":
		return false
	case "QPaintEngine":
		return false
	case "QAccessibleWidget", "QAccessibleWidgetV2":
		return false
	}
	return true
}

func allowFreeFunction(fn cpp2c.CppFreeFunction) error {
	if strings.HasPrefix(fn.FunctionName, "qt_") {
		return cpp2c.ErrTooComplex
	}
	// Also block Qt::qt_* namespaced functions (CabiClassName strips Qt:: prefix later)
	if strings.HasPrefix(fn.FunctionName, "Qt::qt_") {
		return cpp2c.ErrTooComplex
	}
	// Block QtPrivate:: internal functions - they conflict with Qt inline implementations
	if strings.HasPrefix(fn.FunctionName, "QtPrivate__") || strings.HasPrefix(fn.FunctionName, "QtPrivate::") {
		return cpp2c.ErrTooComplex
	}
	// Block QtSharedPointer:: internal functions - they use template types QWeakPointer/QSharedPointer
	if strings.HasPrefix(fn.FunctionName, "QtSharedPointer::") || strings.HasPrefix(fn.FunctionName, "QtSharedPointer__") {
		return cpp2c.ErrTooComplex
	}
	// Block QtFuture:: internal functions - they use template type QFuture<void>
	if strings.HasPrefix(fn.FunctionName, "QtFuture::") || strings.HasPrefix(fn.FunctionName, "QtFuture__") {
		return cpp2c.ErrTooComplex
	}
	blockedQtFuncs := []string{
		"qBadAlloc", "qSNaN", "qQNaN", "qInf",
		"qMallocAligned", "qReallocAligned", "qFreeAligned",
		"qInstallMessageHandler", "qt_error_string",
		"qgetenv", "qunsetenv", "qtTrId",
		"qEnvironmentVariableIsEmpty", "qEnvironmentVariableIsSet",
		"qEnvironmentVariableIntValue", "qEnvironmentVariableIntegerValue",
		// Qt internal functions that conflict with inline Qt implementations
		"qFlagLocation",
		"qstrdup", "qstrlen", "qstrnlen", "qstrcpy", "qstrncpy",
		"qstrcmp", "qstrncmp", "qstricmp", "qstrnicmp",
		"qGlobalQHashSeed", "qSetGlobalQHashSeed",
		"qFastSin",
		// qfloat16-related functions - _Float16 type not supported by MSVC
		"qFloatToFloat16", "qFloatFromFloat16",
		// Qt math functions that conflict with inline Qt implementations
		"qFastCos",
		// Qt core application functions - conflict with inline Qt implementations
		"qAppName",
		// Qt NTFS permission check functions - conflict with inline Qt implementations
		"qEnableNtfsPermissionChecks", "qDisableNtfsPermissionChecks",
		"qAreNtfsPermissionChecksEnabled",
		// qSharedBuild is a constexpr function in Qt headers
		"qSharedBuild",
		// Qt startup/cleanup functions - take function pointer parameters, mapped as int incorrectly
		"qAddPreRoutine", "qAddPostRoutine", "qRemovePostRoutine",
		// decodeMSG uses Windows MSG type which is not declared
		"decodeMSG",
		// qputenv uses void* that can't be dereferenced
		"qputenv",
		// qPluginArchRequirements is constexpr in Qt headers
		"qPluginArchRequirements",
		// C math functions accidentally captured - int/double pointer mismatch in forwarding
		"modf", "modff", "modfl", "lround", "lroundf", "lroundl",
		"nearbyint", "nearbyintf", "nearbyintl",
		"nextafter", "nextafterf", "nextafterl",
		"nexttoward", "nexttowardf", "nexttowardl",
		"remainder", "remainderf", "remainderl",
		"remquo", "remquof", "remquol",
		"rint", "rintf", "rintl",
		"scalbn", "scalbnf", "scalbnl",
		"logb", "logbf", "logbl",
		"ilogb", "ilogbf", "ilogbl",
		// Qt internal registration functions - template-heavy, not bindable
		"qRegisterMetaType",
		// QTextStream manipulator functions - use function pointer typedef
		"qSetFieldWidth", "qSetPadChar", "qSetRealNumberPrecision",
		// qvariant_cast
		"qvariant_cast",
		// Return type conflicts: qRgb/qRgba return int but QRgb is the real Qt type
		"qRgb", "qRgba",
		// swap is a template function - void* params can't be dereferenced for C ABI
		"swap",
		// qvsnprintf uses va_list parameter which can't be mapped through C ABI
		"qvsnprintf",
		// qChecksum has void* parameter that gets dereferenced incorrectly
		"qChecksum",
		// findByteArray/lastIndexOf/findString use void* references that can't be dereferenced
		"findByteArray", "lastIndexOf", "findString",
		// isLatin1 generates recursive self-call wrapper (C2100 void* dereference)
		"isLatin1",
		// qobject_interface_iid also generates recursive self-call wrapper
		"qobject_interface_iid",
		// qgraphicsitem_cast is a template - T can't be deduced
		"qgraphicsitem_cast",
		// qRequireVersion has void* parameter that gets dereferenced
		"qRequireVersion",
		// Cross-module redefinition: QTextStream manipulators (keep bom/ws, others filtered by module matcher)
		"bom", "ws",
	}
	for _, blocked := range blockedQtFuncs {
		if fn.FunctionName == blocked {
			return cpp2c.ErrTooComplex
		}
	}
	// Block all qHash* functions - they are inline template functions in Qt headers
	// and cannot be exported via C ABI without conflicting with original definitions
	if strings.HasPrefix(fn.FunctionName, "qHash") {
		return cpp2c.ErrTooComplex
	}
	// Block all qRegisterNormalizedMetaType* functions
	if strings.HasPrefix(fn.FunctionName, "qRegisterNormalizedMetaType") {
		return cpp2c.ErrTooComplex
	}
	// Block qobject_cast template function - T can't be deduced from QObject*
	if strings.HasPrefix(fn.FunctionName, "qobject_cast") {
		return cpp2c.ErrTooComplex
	}
	// Block Qt::mightBeRichText (void* dereference) and Qt::convertFromPlainText (WhiteSpaceMode enum)
	if strings.HasPrefix(fn.FunctionName, "Qt::mightBeRichText") {
		return cpp2c.ErrTooComplex
	}
	if strings.HasPrefix(fn.FunctionName, "Qt::convertFromPlainText") {
		return cpp2c.ErrTooComplex
	}
	// Block any function whose parameters or return type uses qfloat16* - MSVC
	// does not support _Float16 as a C ABI type, and qfloat16 class is blocked.
	for _, p := range fn.Parameters {
		if strings.Contains(p.ParameterType, "qfloat16") {
			return cpp2c.ErrTooComplex
		}
		if strings.Contains(p.ParameterType, "QPixmapCache") {
			return cpp2c.ErrTooComplex
		}
		if strings.Contains(p.ParameterType, "QFuture") {
			return cpp2c.ErrTooComplex
		}
		if strings.Contains(p.ParameterType, "QWeakPointer") {
			return cpp2c.ErrTooComplex
		}
		if strings.Contains(p.ParameterType, "QSharedPointer") {
			return cpp2c.ErrTooComplex
		}
	}
	if strings.Contains(fn.ReturnType.ParameterType, "qfloat16") {
		return cpp2c.ErrTooComplex
	}
	if strings.Contains(fn.ReturnType.ParameterType, "QPixmapCache") {
		return cpp2c.ErrTooComplex
	}
	if strings.Contains(fn.ReturnType.ParameterType, "QFuture") {
		return cpp2c.ErrTooComplex
	}
	if strings.Contains(fn.ReturnType.ParameterType, "QWeakPointer") {
		return cpp2c.ErrTooComplex
	}
	if strings.Contains(fn.ReturnType.ParameterType, "QSharedPointer") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range fn.Parameters {
		if p.ParameterType == "void" && p.Pointer {
			return cpp2c.ErrTooComplex
		}
		if p.ParameterName == "" && (p.ParameterType == "int" || p.ParameterType == "...") {
			return cpp2c.ErrTooComplex
		}
		if p.ParameterType == "..." || strings.HasPrefix(p.ParameterType, "...") {
			return cpp2c.ErrTooComplex
		}
		if p.ParameterType == "int" && (strings.HasSuffix(p.ParameterName, "getter") ||
			strings.HasSuffix(p.ParameterName, "callback") ||
			strings.HasSuffix(p.ParameterName, "func") ||
			strings.HasSuffix(p.ParameterName, "handler") ||
			strings.Contains(p.ParameterName, "callback") ||
			strings.Contains(p.ParameterName, "getter")) {
			return cpp2c.ErrTooComplex
		}
	}
	return nil
}

func allowMethod(className string, mm cpp2c.CppMethod) error {
	// Block assignment operators
	if strings.HasPrefix(mm.MethodName, "operator=") {
		return cpp2c.ErrTooComplex
	}
	// Block internal Qt functions
	if strings.HasPrefix(mm.MethodName, "d_func") || strings.HasPrefix(mm.MethodName, "data_ptr") {
		return cpp2c.ErrTooComplex
	}
	// Block Qt internal functions that conflict with Qt headers
	if strings.HasPrefix(mm.MethodName, "qt_") {
		return cpp2c.ErrTooComplex
	}
	// Block Qt internal q* functions that conflict with Qt headers
	if mm.MethodName == "qBadAlloc" || mm.MethodName == "qSNaN" || mm.MethodName == "qQNaN" ||
		mm.MethodName == "qMallocAligned" || mm.MethodName == "qReallocAligned" || mm.MethodName == "qFreeAligned" {
		return cpp2c.ErrTooComplex
	}
	// Block qt_getEnumMetaObject and qt_getEnumName - they use unqualified enum types
	if strings.HasPrefix(mm.MethodName, "qt_getEnum") {
		return cpp2c.ErrTooComplex
	}

	// ORIGINAL CODE (preserved for rollback):

	for _, p := range mm.Parameters {
		if strings.HasSuffix(p.ParameterType, "Private") {
			return cpp2c.ErrTooComplex // Skip private type
		}
		if p.ParameterType == "SystemId" {
			return cpp2c.ErrTooComplex // Skip QCalendar::SystemId inner class
		}
		if p.ParameterType == "ConverterFunction" || p.ParameterType == "MutableViewFunction" {
			return cpp2c.ErrTooComplex // Skip std::function types
		}
		if p.ParameterType == "SuperData" || p.ParameterType == "Data" {
			return cpp2c.ErrTooComplex // Skip unqualified QMetaObject::SuperData/Data
		}
		if p.ParameterType == "TimerInfo" {
			return cpp2c.ErrTooComplex // Skip unqualified QAbstractEventDispatcher::TimerInfo
		}
		if p.ParameterType == "PrivateShared" || p.ParameterType == "Private" {
			return cpp2c.ErrTooComplex // Skip unqualified QVariant::PrivateShared/Private
		}
		if p.ParameterType == "Element" {
			return cpp2c.ErrTooComplex // Skip unqualified QPainterPath::Element
		}
		if p.ParameterType == "OffsetData" {
			return cpp2c.ErrTooComplex // Skip unqualified QTimeZone::OffsetData
		}
		// Block parameters with string view types (mapped to void* but not convertible)
		if p.ParameterType == "QStringView" || p.ParameterType == "QByteArrayView" ||
			p.ParameterType == "QLatin1StringView" || p.ParameterType == "QLatin1String" ||
			p.ParameterType == "QUtf8StringView" || p.ParameterType == "QAnyStringView" ||
			p.ParameterType == "QStringRef" {
			return cpp2c.ErrTooComplex
		}
		if p.ParameterType == "QQmlV4FunctionPtr" {
			return cpp2c.ErrTooComplex
		}
		if p.ParameterType == "void" && p.Pointer {
			return cpp2c.ErrTooComplex
		}
		// Block Disambiguated_t parameters - they are internal Qt types
		if p.ParameterType == "Disambiguated_t" || p.ParameterType == "Qt::Disambiguated_t" {
			return cpp2c.ErrTooComplex
		}
		// Block variadic functions - parameter name is empty when parsed incorrectly
		if p.ParameterName == "" && (p.ParameterType == "int" || p.ParameterType == "...") {
			return cpp2c.ErrTooComplex
		}
		// Block function pointer parameters - they are parsed as int but are actually function pointers
		if p.ParameterType == "int" && (strings.HasSuffix(p.ParameterName, "getter") ||
			strings.HasSuffix(p.ParameterName, "callback") ||
			strings.HasSuffix(p.ParameterName, "func") ||
			strings.HasSuffix(p.ParameterName, "handler") ||
			strings.Contains(p.ParameterName, "callback") ||
			strings.Contains(p.ParameterName, "getter")) {
			return cpp2c.ErrTooComplex
		}
		// Block internal struct types that can't be bound
		if isBlockedInternalStructType(p.ParameterType) {
			return cpp2c.ErrTooComplex
		}
		if isBlockedInternalStructType(className + "::" + p.ParameterType) {
			return cpp2c.ErrTooComplex
		}
	}
	if strings.HasSuffix(mm.ReturnType.ParameterType, "Private") {
		return cpp2c.ErrTooComplex // Skip private type
	}
	if mm.ReturnType.ParameterType == "SuperData" || mm.ReturnType.ParameterType == "Data" {
		return cpp2c.ErrTooComplex
	}
	if mm.ReturnType.ParameterType == "TimerInfo" {
		return cpp2c.ErrTooComplex
	}
	if mm.ReturnType.ParameterType == "PrivateShared" || mm.ReturnType.ParameterType == "Private" {
		return cpp2c.ErrTooComplex
	}
	if mm.ReturnType.ParameterType == "Element" {
		return cpp2c.ErrTooComplex
	}
	if mm.ReturnType.ParameterType == "OffsetData" {
		return cpp2c.ErrTooComplex
	}
	// Block return types with internal struct types
	if isBlockedInternalStructType(mm.ReturnType.ParameterType) {
		return cpp2c.ErrTooComplex
	}
	if isBlockedInternalStructType(className + "::" + mm.ReturnType.ParameterType) {
		return cpp2c.ErrTooComplex
	}
	// Block return types with string view types
	if mm.ReturnType.ParameterType == "QStringView" || mm.ReturnType.ParameterType == "QByteArrayView" ||
		mm.ReturnType.ParameterType == "QLatin1StringView" || mm.ReturnType.ParameterType == "QLatin1String" ||
		mm.ReturnType.ParameterType == "QUtf8StringView" || mm.ReturnType.ParameterType == "QAnyStringView" ||
		mm.ReturnType.ParameterType == "QStringRef" {
		return cpp2c.ErrTooComplex
	}

	if strings.Contains(mm.MethodName, `QGADGET`) {
		return cpp2c.ErrTooComplex // Skipping method with weird QGADGET behaviour
	}

	if mm.IsReceiverMethod() {
		return cpp2c.ErrTooComplex
	}

	// Block getDate which has int* parameter forwarding issues
	if className == "QDate" && mm.MethodName == "getDate" {
		return cpp2c.ErrTooComplex
	}

	// Block QChar::direction due to Direction enum ambiguity
	if className == "QChar" && mm.MethodName == "direction" {
		return cpp2c.ErrTooComplex
	}

	// Block QCborArray::extract with Iterator (inner class, not enum)
	if className == "QCborArray" && mm.MethodName == "extract" {
		return cpp2c.ErrTooComplex
	}

	// Block erase methods that take iterator parameters (mapped to void*)
	if mm.MethodName == "erase" || mm.MethodName == "eraseWithIt" {
		return cpp2c.ErrTooComplex
	}

	// Block data_ptr methods that return DataPointer (internal type)
	if mm.MethodName == "data_ptr" {
		return cpp2c.ErrTooComplex
	}

	// Block finalize methods that return FinalizeResult (internal template type)
	if mm.MethodName == "finalize" {
		return cpp2c.ErrTooComplex
	}

	// Block connect_ methods that have QMetaObject::Connection return type issues
	if strings.HasPrefix(mm.MethodName, "connect_") || strings.Contains(mm.MethodName, "_connect_") {
		return cpp2c.ErrTooComplex
	}
	// Block QMetaObject::connect methods - return QMetaObject::Connection which can't be mapped properly
	if className == "QMetaObject" && mm.MethodName == "connect" {
		return cpp2c.ErrTooComplex
	}

	// Block disconnect methods with QMetaObject::Connection parameter
	if strings.HasPrefix(mm.MethodName, "disconnect") && len(mm.Parameters) == 1 {
		return cpp2c.ErrTooComplex
	}

	// Block signal methods with QPrivateSignal parameter (internal Qt signal type)
	for _, p := range mm.Parameters {
		if p.ParameterType == "QPrivateSignal" || strings.HasSuffix(p.ParameterType, "::QPrivateSignal") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with decltype(nullptr) parameters
	for _, p := range mm.Parameters {
		if strings.HasPrefix(p.ParameterType, "decltype") {
			return cpp2c.ErrTooComplex
		}
		if strings.Contains(p.ParameterType, "BindingFunctionVTable") {
			return cpp2c.ErrTooComplex
		}
		if p.ParameterType == "std::nullptr_t" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block QUuid operator _GUID (Windows struct redefinition)
	if className == "QUuid" && strings.Contains(mm.MethodName, "_GUID") {
		return cpp2c.ErrTooComplex
	}

	// Block QByteArray::fromBase64Encoding - returns FromBase64Result value type that can't convert to void*
	if className == "QByteArray" && strings.HasPrefix(mm.MethodName, "fromBase64Encoding") {
		return cpp2c.ErrTooComplex
	}

	// Block QUntypedPropertyBinding/QUntypedBindable methods that return QPropertyBindingError (no forward decl)
	if className == "QUntypedPropertyBinding" && mm.MethodName == "error" {
		return cpp2c.ErrTooComplex
	}
	// Block constructors on property binding types that take void* - can't convert
	if (className == "QUntypedPropertyBinding" || className == "QPropertyBindingSourceLocation") && mm.MethodName == className {
		for _, p := range mm.Parameters {
			if p.ParameterType == "void" && p.Pointer {
				return cpp2c.ErrTooComplex
			}
		}
	}
	// Block QUntypedBindable methods that take/return QPropertyBindingSourceLocation/QUntypedPropertyBinding as value types
	if className == "QUntypedBindable" && (mm.MethodName == "makeBinding" || mm.MethodName == "makeBindingWithLocation" || mm.MethodName == "setBinding" || mm.MethodName == "binding" || mm.MethodName == "takeBinding") {
		return cpp2c.ErrTooComplex
	}

	// Block QCborValue::fromCbor with unsigned char* (const + pointer cast issue)
	if className == "QCborValue" && strings.HasPrefix(mm.MethodName, "fromCbor") {
		for _, p := range mm.Parameters {
			if strings.Contains(p.ParameterType, "unsigned char") && p.Pointer {
				return cpp2c.ErrTooComplex
			}
		}
	}

	// Block hashInto (void* dereference not supported)
	if strings.HasPrefix(mm.MethodName, "hashInto") {
		return cpp2c.ErrTooComplex
	}

	// Block QUntypedPropertyBinding methods with BindingFunctionVTable (inner class)
	if className == "QUntypedPropertyBinding" && strings.Contains(mm.MethodName, "BindingFunctionVTable") {
		return cpp2c.ErrTooComplex
	}

	// Block methods with struct types that can't be projected as int
	if mm.ReturnType.ParameterType == "YearMonthDay" || mm.ReturnType.ParameterType == "Id128Bytes" || mm.ReturnType.ParameterType == "OffsetData" {
		return cpp2c.ErrTooComplex
	}

	for _, p := range mm.Parameters {
		if p.ParameterType == "YearMonthDay" || p.ParameterType == "Id128Bytes" || p.ParameterType == "OffsetData" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with iterator return types that can't be converted to void*
	if strings.Contains(mm.ReturnType.ParameterType, "::iterator") || strings.Contains(mm.ReturnType.ParameterType, "::const_iterator") {
		return cpp2c.ErrTooComplex
	}

	// Block methods with iterator parameters
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "::iterator") || strings.Contains(p.ParameterType, "::const_iterator") ||
			p.ParameterType == "iterator" || p.ParameterType == "const_iterator" ||
			p.ParameterType == "Iterator" || p.ParameterType == "ConstIterator" ||
			p.ParameterType == "reverse_iterator" || p.ParameterType == "const_reverse_iterator" ||
			strings.Contains(p.ParameterType, "::reverse_iterator") || strings.Contains(p.ParameterType, "::const_reverse_iterator") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods returning sentinel types
	if strings.Contains(mm.ReturnType.ParameterType, "::sentinel") || mm.ReturnType.ParameterType == "sentinel" {
		return cpp2c.ErrTooComplex
	}

	// Block methods returning QPartialOrdering - cannot be converted to int in cpp
	if mm.ReturnType.ParameterType == "QPartialOrdering" || strings.HasPrefix(mm.ReturnType.ParameterType, "Qt::") && strings.HasSuffix(mm.ReturnType.ParameterType, "_ordering") {
		return cpp2c.ErrTooComplex
	}

	// Block methods returning Duration types (std::chrono)
	if strings.Contains(mm.ReturnType.ParameterType, "::Duration") || strings.Contains(mm.ReturnType.ParameterType, "Duration") {
		return cpp2c.ErrTooComplex
	}

	// Block methods with CreateProcessArgumentModifier parameter
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "CreateProcessArgumentModifier") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods returning value_type struct
	if strings.Contains(mm.ReturnType.ParameterType, "::value_type") || mm.ReturnType.ParameterType == "value_type" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "::value_type") || p.ParameterType == "value_type" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods returning QMetaObject::Connection (not just connect_ methods)
	if mm.ReturnType.ParameterType == "QMetaObject::Connection" {
		return cpp2c.ErrTooComplex
	}

	// Block methods with QMetaObject::Connection parameters
	for _, p := range mm.Parameters {
		if p.ParameterType == "QMetaObject::Connection" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods returning QFormLayout::TakeRowResult struct
	if mm.ReturnType.ParameterType == "QFormLayout::TakeRowResult" || mm.ReturnType.ParameterType == "TakeRowResult" {
		return cpp2c.ErrTooComplex
	}

	// Block methods returning QAbstractTextDocumentLayout::PaintContext struct
	if mm.ReturnType.ParameterType == "PaintContext" && (className == "QAbstractTextDocumentLayout" || className == "QPlainTextDocumentLayout") {
		return cpp2c.ErrTooComplex
	}

	// Block methods returning QPainterPath::Element struct
	if mm.ReturnType.ParameterType == "Element" && className == "QPainterPath" {
		return cpp2c.ErrTooComplex
	}

	// Block methods returning QTextEdit::ExtraSelection struct
	if mm.ReturnType.ParameterType == "ExtraSelection" && className == "QTextEdit" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "ExtraSelection" && className == "QTextEdit" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QEventPoint::States type (QFlags typedef mismatch)
	if mm.ReturnType.ParameterType == "States" || strings.Contains(mm.ReturnType.ParameterType, "QEventPoint::States") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "States" || strings.Contains(p.ParameterType, "QEventPoint::States") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QAbstractItemView::State vs Qt::TouchPointState mismatch (moved below)

	// Block methods with QVariantAnimation::KeyValues parameter
	if mm.ReturnType.ParameterType == "KeyValues" && className == "QVariantAnimation" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "KeyValues" && className == "QVariantAnimation" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QQuaternion::Axes struct
	if mm.ReturnType.ParameterType == "Axes" && className == "QQuaternion" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "Axes" && className == "QQuaternion" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QMetaObject::Data type
	if mm.ReturnType.ParameterType == "Data" && className == "QMetaObject" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "Data" && className == "QMetaObject" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QStringConverterBase::State type
	if strings.Contains(mm.ReturnType.ParameterType, "QStringConverterBase::State") || mm.ReturnType.ParameterType == "State" && className == "QStringConverterBase" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QStringConverterBase::State") || p.ParameterType == "State" && className == "QStringConverterBase" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QAbstractEventDispatcher::TimerInfo/TimerInfoV2 struct
	if strings.Contains(mm.ReturnType.ParameterType, "TimerInfo") && className == "QAbstractEventDispatcher" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "TimerInfo") && className == "QAbstractEventDispatcher" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QAbstractEventDispatcher::Duration (std::chrono)
	if strings.Contains(mm.ReturnType.ParameterType, "Duration") && className == "QAbstractEventDispatcher" {
		return cpp2c.ErrTooComplex
	}

	// Block methods with QTextBlock::iterator inner class
	if strings.Contains(mm.ReturnType.ParameterType, "QTextBlock::iterator") || (mm.ReturnType.ParameterType == "iterator" && className == "QTextBlock") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QTextBlock::iterator") || (p.ParameterType == "iterator" && className == "QTextBlock") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods returning void that are cast to void* (insert methods returning void)
	if strings.Contains(mm.MethodName, "insert") && mm.ReturnType.Void() && !mm.ReturnType.Pointer {
		for _, p := range mm.Parameters {
			if strings.Contains(p.ParameterType, "iterator") || strings.Contains(p.ParameterType, "Iterator") {
				return cpp2c.ErrTooComplex
			}
		}
	}

	// Block methods with 'policy' parameter (AutoConnectPolicy type issues)
	if strings.Contains(strings.ToLower(mm.MethodName), "policy") {
		return cpp2c.ErrTooComplex
	}

	// Block methods with template T return type
	if mm.ReturnType.ParameterType == "T" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "T" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block QTSMFC/QTSMFI function pointer types
	if mm.ReturnType.ParameterType == "QTSMFC" || mm.ReturnType.ParameterType == "QTSMFI" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "QTSMFC" || p.ParameterType == "QTSMFI" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QInputMethodEvent::Attribute struct
	if mm.ReturnType.ParameterType == "Attribute" && className == "QInputMethodEvent" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "Attribute" && className == "QInputMethodEvent" {
			return cpp2c.ErrTooComplex
		}
	}
	// Block QInputMethodEvent constructor with QList<Attribute> and attributes() method
	if className == "QInputMethodEvent" && (strings.HasPrefix(mm.MethodName, "QInputMethodEvent") && len(mm.Parameters) > 0) {
		for _, p := range mm.Parameters {
			if strings.Contains(p.ParameterType, "Attribute") || strings.Contains(p.ParameterType, "QList") {
				return cpp2c.ErrTooComplex
			}
		}
	}
	if className == "QInputMethodEvent" && mm.MethodName == "attributes" {
		return cpp2c.ErrTooComplex
	}
	// Block any method with Attribute in return type for QInputMethodEvent
	if className == "QInputMethodEvent" && strings.Contains(mm.ReturnType.ParameterType, "Attribute") {
		return cpp2c.ErrTooComplex
	}
	// Block methods with QInputMethodEvent::Attribute in any position (QList<Attribute> etc.)
	if strings.Contains(mm.ReturnType.ParameterType, "QInputMethodEvent::Attribute") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QInputMethodEvent::Attribute") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QUuid::Id128Bytes struct (array members not convertible)
	if strings.Contains(mm.ReturnType.ParameterType, "Id128Bytes") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "Id128Bytes") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with forward-declared-only inner struct/class types
	blockedInnerTypes := []string{
		"QPluginMetaData::Header", "QPluginMetaData::MagicHeader", "QPluginMetaData::ElfNoteHeader",
		"QProcess::CreateProcessArguments",
		"QRangeModelDetails::ConnectionStorage::Connection",
		"QFont::Tag",
		"QGradient::QGradientData",
		"QTextOption::Tab",
		"QTextLayout::FormatRange",
		"QAbstractTextDocumentLayout::Selection",
		"QAccessible::ActivationObserver",
		"QAccessible::State",
		"QAbstractTextDocumentLayout::PaintContext",
		"QColorSpace::PrimaryPoints",
		"QIconEngine::ScaledPixmapArgument",
		"QPageRanges::Range",
		"QPainter::PixmapFragment",
		"QPixmapCache::Key",
		"QQuaternion::Axis",
		"QTextFrame::iterator",
		"QTextEdit::ExtraSelection",
	}
	for _, blocked := range blockedInnerTypes {
		if strings.Contains(mm.ReturnType.ParameterType, blocked) {
			return cpp2c.ErrTooComplex
		}
		for _, p := range mm.Parameters {
			if strings.Contains(p.ParameterType, blocked) {
				return cpp2c.ErrTooComplex
			}
		}
	}
	// Block methods with bare inner type names (when className matches parent)
	bareBlockedTypes := map[string][]string{
		"QPluginMetaData":             {"Header", "MagicHeader", "ElfNoteHeader"},
		"QProcess":                    {"CreateProcessArguments"},
		"QFont":                       {"Tag"},
		"QGradient":                   {"QGradientData"},
		"QTextOption":                 {"Tab"},
		"QTextLayout":                 {"FormatRange"},
		"QAbstractTextDocumentLayout": {"Selection", "PaintContext"},
		"QAccessible":                 {"ActivationObserver", "State"},
		"QColorSpace":                 {"PrimaryPoints"},
		"QIconEngine":                 {"ScaledPixmapArgument"},
		"QPageRanges":                 {"Range"},
		"QPainter":                    {"PixmapFragment"},
		"QPixmapCache":                {"Key"},
		"QQuaternion":                 {"Axis"},
		"QTextFrame":                  {"iterator"},
		"QTextEdit":                   {"ExtraSelection"},
		"QPlainTextEdit":              {"ExtraSelection"},
	}
	if blockedBare, ok := bareBlockedTypes[className]; ok {
		for _, bare := range blockedBare {
			if mm.ReturnType.ParameterType == bare {
				return cpp2c.ErrTooComplex
			}
			for _, p := range mm.Parameters {
				if p.ParameterType == bare {
					return cpp2c.ErrTooComplex
				}
			}
		}
	}

	// Block methods with QVariant::Private/PrivateShared internal types
	if strings.Contains(mm.ReturnType.ParameterType, "QVariant::Private") || mm.ReturnType.ParameterType == "Private" && className == "QVariant" || mm.ReturnType.ParameterType == "PrivateShared" && className == "QVariant" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QVariant::Private") || p.ParameterType == "Private" && className == "QVariant" || p.ParameterType == "PrivateShared" && className == "QVariant" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QCalendar::SystemId/YearMonthDay types
	if strings.Contains(mm.ReturnType.ParameterType, "QCalendar::SystemId") || mm.ReturnType.ParameterType == "SystemId" && className == "QCalendar" {
		return cpp2c.ErrTooComplex
	}
	if strings.Contains(mm.ReturnType.ParameterType, "QCalendar::YearMonthDay") || mm.ReturnType.ParameterType == "YearMonthDay" && className == "QCalendar" {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QCalendar::SystemId") || p.ParameterType == "SystemId" && className == "QCalendar" {
			return cpp2c.ErrTooComplex
		}
		if strings.Contains(p.ParameterType, "QCalendar::YearMonthDay") || p.ParameterType == "YearMonthDay" && className == "QCalendar" {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QCborValueRef/QCborValueConstRef (private/protected constructors)
	if strings.Contains(mm.ReturnType.ParameterType, "QCborValueRef") || strings.Contains(mm.ReturnType.ParameterType, "QCborValueConstRef") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QCborValueRef") || strings.Contains(p.ParameterType, "QCborValueConstRef") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QCborArray::Iterator/ConstIterator/iterator/const_iterator inner classes
	if strings.Contains(mm.ReturnType.ParameterType, "QCborArray::Iterator") || strings.Contains(mm.ReturnType.ParameterType, "QCborArray::ConstIterator") ||
		strings.Contains(mm.ReturnType.ParameterType, "QCborArray::iterator") || strings.Contains(mm.ReturnType.ParameterType, "QCborArray::const_iterator") {
		return cpp2c.ErrTooComplex
	}
	if (mm.ReturnType.ParameterType == "Iterator" && className == "QCborArray") || (mm.ReturnType.ParameterType == "ConstIterator" && className == "QCborArray") ||
		(mm.ReturnType.ParameterType == "iterator" && className == "QCborArray") || (mm.ReturnType.ParameterType == "const_iterator" && className == "QCborArray") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QCborArray::Iterator") || strings.Contains(p.ParameterType, "QCborArray::ConstIterator") ||
			strings.Contains(p.ParameterType, "QCborArray::iterator") || strings.Contains(p.ParameterType, "QCborArray::const_iterator") ||
			(p.ParameterType == "Iterator" && className == "QCborArray") || (p.ParameterType == "ConstIterator" && className == "QCborArray") ||
			(p.ParameterType == "iterator" && className == "QCborArray") || (p.ParameterType == "const_iterator" && className == "QCborArray") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QCborMap::Iterator/ConstIterator/iterator/const_iterator inner classes
	if strings.Contains(mm.ReturnType.ParameterType, "QCborMap::Iterator") || strings.Contains(mm.ReturnType.ParameterType, "QCborMap::ConstIterator") ||
		strings.Contains(mm.ReturnType.ParameterType, "QCborMap::iterator") || strings.Contains(mm.ReturnType.ParameterType, "QCborMap::const_iterator") {
		return cpp2c.ErrTooComplex
	}
	if (mm.ReturnType.ParameterType == "Iterator" && className == "QCborMap") || (mm.ReturnType.ParameterType == "ConstIterator" && className == "QCborMap") ||
		(mm.ReturnType.ParameterType == "iterator" && className == "QCborMap") || (mm.ReturnType.ParameterType == "const_iterator" && className == "QCborMap") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QCborMap::Iterator") || strings.Contains(p.ParameterType, "QCborMap::ConstIterator") ||
			strings.Contains(p.ParameterType, "QCborMap::iterator") || strings.Contains(p.ParameterType, "QCborMap::const_iterator") ||
			(p.ParameterType == "Iterator" && className == "QCborMap") || (p.ParameterType == "ConstIterator" && className == "QCborMap") ||
			(p.ParameterType == "iterator" && className == "QCborMap") || (p.ParameterType == "const_iterator" && className == "QCborMap") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QJsonArray::Iterator/ConstIterator/iterator/const_iterator inner classes
	if strings.Contains(mm.ReturnType.ParameterType, "QJsonArray::Iterator") || strings.Contains(mm.ReturnType.ParameterType, "QJsonArray::ConstIterator") ||
		strings.Contains(mm.ReturnType.ParameterType, "QJsonArray::iterator") || strings.Contains(mm.ReturnType.ParameterType, "QJsonArray::const_iterator") {
		return cpp2c.ErrTooComplex
	}
	if (mm.ReturnType.ParameterType == "Iterator" && className == "QJsonArray") || (mm.ReturnType.ParameterType == "ConstIterator" && className == "QJsonArray") ||
		(mm.ReturnType.ParameterType == "iterator" && className == "QJsonArray") || (mm.ReturnType.ParameterType == "const_iterator" && className == "QJsonArray") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QJsonArray::Iterator") || strings.Contains(p.ParameterType, "QJsonArray::ConstIterator") ||
			strings.Contains(p.ParameterType, "QJsonArray::iterator") || strings.Contains(p.ParameterType, "QJsonArray::const_iterator") ||
			(p.ParameterType == "Iterator" && className == "QJsonArray") || (p.ParameterType == "ConstIterator" && className == "QJsonArray") ||
			(p.ParameterType == "iterator" && className == "QJsonArray") || (p.ParameterType == "const_iterator" && className == "QJsonArray") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QJsonObject::Iterator/ConstIterator/iterator/const_iterator inner classes
	if strings.Contains(mm.ReturnType.ParameterType, "QJsonObject::Iterator") || strings.Contains(mm.ReturnType.ParameterType, "QJsonObject::ConstIterator") ||
		strings.Contains(mm.ReturnType.ParameterType, "QJsonObject::iterator") || strings.Contains(mm.ReturnType.ParameterType, "QJsonObject::const_iterator") {
		return cpp2c.ErrTooComplex
	}
	if (mm.ReturnType.ParameterType == "Iterator" && className == "QJsonObject") || (mm.ReturnType.ParameterType == "ConstIterator" && className == "QJsonObject") ||
		(mm.ReturnType.ParameterType == "iterator" && className == "QJsonObject") || (mm.ReturnType.ParameterType == "const_iterator" && className == "QJsonObject") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QJsonObject::Iterator") || strings.Contains(p.ParameterType, "QJsonObject::ConstIterator") ||
			strings.Contains(p.ParameterType, "QJsonObject::iterator") || strings.Contains(p.ParameterType, "QJsonObject::const_iterator") ||
			(p.ParameterType == "Iterator" && className == "QJsonObject") || (p.ParameterType == "ConstIterator" && className == "QJsonObject") ||
			(p.ParameterType == "iterator" && className == "QJsonObject") || (p.ParameterType == "const_iterator" && className == "QJsonObject") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QAssociativeIterable::iterator/const_iterator
	if strings.Contains(mm.ReturnType.ParameterType, "QAssociativeIterable::iterator") || strings.Contains(mm.ReturnType.ParameterType, "QAssociativeIterable::const_iterator") ||
		(mm.ReturnType.ParameterType == "iterator" && className == "QAssociativeIterable") || (mm.ReturnType.ParameterType == "const_iterator" && className == "QAssociativeIterable") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QAssociativeIterable::iterator") || strings.Contains(p.ParameterType, "QAssociativeIterable::const_iterator") ||
			(p.ParameterType == "iterator" && className == "QAssociativeIterable") || (p.ParameterType == "const_iterator" && className == "QAssociativeIterable") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QSequentialIterable::iterator/const_iterator
	if strings.Contains(mm.ReturnType.ParameterType, "QSequentialIterable::iterator") || strings.Contains(mm.ReturnType.ParameterType, "QSequentialIterable::const_iterator") ||
		(mm.ReturnType.ParameterType == "iterator" && className == "QSequentialIterable") || (mm.ReturnType.ParameterType == "const_iterator" && className == "QSequentialIterable") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QSequentialIterable::iterator") || strings.Contains(p.ParameterType, "QSequentialIterable::const_iterator") ||
			(p.ParameterType == "iterator" && className == "QSequentialIterable") || (p.ParameterType == "const_iterator" && className == "QSequentialIterable") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block methods with QAbstractItemView::State vs Qt::TouchPointState mismatch
	if className == "QAbstractItemView" && (mm.MethodName == "setState" || mm.MethodName == "state") {
		return cpp2c.ErrTooComplex
	}

	// Block methods returning void cast to void* (insert/extract with iterator args)
	if (mm.MethodName == "insert" || mm.MethodName == "extract") && mm.ReturnType.Void() && !mm.ReturnType.Pointer {
		return cpp2c.ErrTooComplex
	}

	// Block QTransform::Affine enum conversion issues
	if mm.ReturnType.ParameterType == "QTransform::Affine" || (mm.ReturnType.ParameterType == "Affine" && className == "QTransform") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "QTransform::Affine" || (p.ParameterType == "Affine" && className == "QTransform") {
			return cpp2c.ErrTooComplex
		}
	}

	// Block QTouchEvent constructors with TouchPointState vs States mismatch
	if className == "QTouchEvent" && strings.HasPrefix(mm.MethodName, "QTouchEvent") {
		return cpp2c.ErrTooComplex
	}

	// Block QFont::Tag type conversion issues
	if strings.Contains(mm.ReturnType.ParameterType, "QFont::Tag") {
		return cpp2c.ErrTooComplex
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "QFont::Tag") {
			return cpp2c.ErrTooComplex
		}
	}

	switch {
	case className == "QBitArray" && mm.MethodName == "operator~":
		return cpp2c.ErrForwardIncompatible
	case className == "QTimeZone" && (mm.MethodName == "operator==" || mm.MethodName == "operator!="):
		return cpp2c.ErrForwardIncompatible
	case className == "QWaveDecoder" && mm.MethodName == "setIODevice":
		return cpp2c.ErrTooComplex
	case className == "QDeadlineTimer" && mm.MethodName == "_q_data":
		return cpp2c.ErrForwardIncompatible
	case className == "QXmlStreamEntityResolver" && mm.MethodName == "operator=":
		return cpp2c.ErrForwardIncompatible
	case className == "qfloat16" && mm.MethodName == "operator float":
		return cpp2c.ErrTooComplex
	case className == "QHashSeed" && mm.MethodName == "operator unsigned long":
		return cpp2c.ErrTooComplex
	case className == "QQmlNetworkAccessManagerFactory" && mm.MethodName == "create":
		return cpp2c.ErrTooComplex
	case className == "QQmlEngine" && mm.MethodName == "networkAccessManager":
		return cpp2c.ErrTooComplex
	case className == "QJSEngine" && mm.MethodName == "handle":
		return cpp2c.ErrTooComplex
	case mm.MethodName == "qmlAttachedProperties" && mm.IsStatic:
		return cpp2c.ErrTooComplex
	case mm.ReturnType.IntType() && mm.ReturnType.ByRef:
		return cpp2c.ErrTooComplex
	case mm.MethodName == "vasprintf":
		return cpp2c.ErrTooComplex
	case className == "QString" && mm.MethodName == "utf16":
		return cpp2c.ErrTooComplex
	case className == "QAnyStringView" && mm.MethodName == "new2":
		return cpp2c.ErrTooComplex
	case className == "QDeadlineTimer" && mm.MethodName == "remainingTimeAsDuration":
		return cpp2c.ErrTooComplex
	case className == "QDebug" && strings.Contains(mm.MethodName, "Stdnullptr"):
		return cpp2c.ErrTooComplex
	case className == "QIODevice" && strings.Contains(mm.MethodName, "readLineInto"):
		return cpp2c.ErrTooComplex // QSpan<T> mapped to void*, can't dereference
	case strings.Contains(mm.MethodName, "keyValueBegin") || strings.Contains(mm.MethodName, "keyValueEnd"):
		return cpp2c.ErrTooComplex // key_value_iterator can't reinterpret_cast to void*
	case mm.ReturnType.ParameterType == "CategoryFilter":
		return cpp2c.ErrTooComplex // function pointer type
	case mm.ReturnType.ParameterType == "EasingFunction":
		return cpp2c.ErrTooComplex // function pointer type
	case strings.Contains(mm.MethodName, "installFilter") && mm.ReturnType.ParameterType == "QLoggingCategory::CategoryFilter":
		return cpp2c.ErrTooComplex // function pointer type
	case strings.HasSuffix(className, "Permission") && mm.IsSignal:
		return cpp2c.ErrTooComplex // Q_GADGET classes don't have real signals, operator= is not a signal
	case strings.HasSuffix(className, "Permission") && strings.HasPrefix(mm.MethodName, "operator"):
		return cpp2c.ErrTooComplex // Permission class operators are private, not bindable
	case className == "QProcess" && strings.Contains(mm.MethodName, "startDetached"):
		return cpp2c.ErrTooComplex // qint64* vs int* mismatch
	case className == "QFile" && (mm.MethodName == "map" || mm.MethodName == "unmap"):
		return cpp2c.ErrTooComplex // uchar* return type not handled correctly
	case className == "QThread" && mm.MethodName == "threadId":
		return cpp2c.ErrTooComplex // Qt::HANDLE (void*) return type mapped to int
	case className == "QDataStream" && mm.MethodName == "readBytes":
		return cpp2c.ErrTooComplex // qint64& vs int& mismatch
	case mm.ReturnType.ParameterType == "Id128Bytes":
		return cpp2c.ErrTooComplex // QUuid::Id128Bytes is a struct, not an enum
	case mm.ReturnType.ParameterType == "KeyValues":
		return cpp2c.ErrTooComplex // QVariantAnimation::KeyValues is a QVector typedef
	case mm.ReturnType.ParameterType == "OffsetDataList":
		return cpp2c.ErrTooComplex // QTimeZone::OffsetDataList is a QList typedef
	case mm.ReturnType.ParameterType == "CreateProcessArgumentModifier":
		return cpp2c.ErrTooComplex // std::function type
	case mm.ReturnType.ParameterType == "AutoConnectPolicy":
		return cpp2c.ErrTooComplex // QRangeModel internal type
	case className == "QOpenGLFunctions" || className == "QOpenGLExtraFunctions" || className == "QOpenGLDebugLogger" || className == "QOpenGLFramebufferObject" || className == "QOpenGLDebugMessage" || className == "QOpenGLShaderProgram" || className == "QOpenGLFramebufferObjectFormat":
		return cpp2c.ErrTooComplex // OpenGL function wrappers use GL typedefs not suitable for C ABI
	case className == "QWindowsMimeConverter":
		return cpp2c.ErrTooComplex // Windows-specific OLE/COM types (FORMATETC etc.)
	case strings.Contains(mm.ReturnType.ParameterType, "IDataObject") || strings.Contains(mm.ReturnType.ParameterType, "FORMATETC") || strings.Contains(mm.ReturnType.ParameterType, "tagSTGMEDIUM") || strings.Contains(mm.ReturnType.ParameterType, "IDataAsyncVer"):
		return cpp2c.ErrTooComplex // Windows COM interfaces
	case mm.ReturnType.ParameterType == "Axes" || mm.MethodName == "axes" && className == "QQuaternion":
		return cpp2c.ErrTooComplex // QQuaternion::Axes is a struct
	case mm.ReturnType.ParameterType == "Key" && className == "QPixmapCache":
		return cpp2c.ErrTooComplex // QPixmapCache::Key is a struct
	case mm.ReturnType.ParameterType == "iterator" && className == "QTextFrame":
		return cpp2c.ErrTooComplex // QTextFrame::iterator is an inner class
	case mm.ReturnType.ParameterType == "PrimaryPoints":
		return cpp2c.ErrTooComplex // QColorSpace::PrimaryPoints is a struct
	case mm.MethodName == "primaries" && className == "QColorSpace":
		return cpp2c.ErrTooComplex // returns QColorSpace::PrimaryPoints struct
	case mm.MethodName == "setPrimaryPoints" && className == "QColorSpace":
		return cpp2c.ErrTooComplex // QColorSpace::PrimaryPoints struct parameter
	case className == "QColorSpace" && strings.HasPrefix(mm.MethodName, "new"):
		for _, p := range mm.Parameters {
			pt := p.ParameterType
			if pt == "PrimaryPoints" || pt == "QColorSpace::PrimaryPoints" || pt == "QPointF" || pt == "const QPointF" || strings.Contains(pt, "QList") || strings.Contains(pt, "uint16_t") {
				return cpp2c.ErrTooComplex
			}
		}
	case mm.ReturnType.ParameterType == "FormatRange" || strings.Contains(mm.ReturnType.ParameterType, "FormatRange"):
		return cpp2c.ErrTooComplex // QTextLayout::FormatRange is a struct
	case mm.MethodName == "setFormat" && className == "QTextLayout":
		return cpp2c.ErrTooComplex // QTextLayout::FormatRange struct parameter
	case className == "QTextLayout" && strings.HasPrefix(mm.MethodName, "draw"):
		hasFormatRange := false
		for _, p := range mm.Parameters {
			if p.ParameterType == "FormatRange" || strings.Contains(p.ParameterType, "FormatRange") {
				hasFormatRange = true
				break
			}
		}
		if hasFormatRange {
			return cpp2c.ErrTooComplex // QTextLayout::draw with FormatRange struct parameter
		}
	case mm.MethodName == "find" && className == "QPixmapCache":
		return cpp2c.ErrTooComplex // QPixmapCache::Key struct parameter
	case mm.MethodName == "replace" && className == "QPixmapCache":
		return cpp2c.ErrTooComplex // QPixmapCache::Key struct parameter
	case mm.MethodName == "remove" && className == "QPixmapCache" && len(mm.Parameters) > 0:
		return cpp2c.ErrTooComplex // QPixmapCache::Key struct parameter
	case mm.MethodName == "insert" && className == "QPixmapCache":
		return cpp2c.ErrTooComplex // QPixmapCache::Key struct parameter
	case mm.MethodName == "fromEulerAngles" && className == "QQuaternion":
		return cpp2c.ErrTooComplex // QQuaternion::EulerAngles<T> template struct
	case mm.MethodName == "toEulerAngles" && className == "QQuaternion":
		return cpp2c.ErrTooComplex // QQuaternion::EulerAngles<T> template struct
	case mm.MethodName == "eulerAngles" && className == "QQuaternion":
		return cpp2c.ErrTooComplex // QQuaternion::EulerAngles<T> template struct
	case mm.ReturnType.ParameterType == "Element" && className == "QPainterPath":
		return cpp2c.ErrTooComplex // QPainterPath::Element is a struct
	case mm.ReturnType.ParameterType == "QPainterPath::Element":
		return cpp2c.ErrTooComplex // QPainterPath::Element is a struct
	case mm.MethodName == "elementAt" && className == "QPainterPath":
		return cpp2c.ErrTooComplex // returns QPainterPath::Element struct
	case mm.MethodName == "drawPixmapFragments" && className == "QPainter":
		return cpp2c.ErrTooComplex // QPainter::PixmapFragment struct parameter
	case mm.ReturnType.ParameterType == "Range" && (className == "QPageRanges" || strings.Contains(mm.ReturnType.ParameterType, "QPageRanges")):
		return cpp2c.ErrTooComplex // QPageRanges::Range is a struct
	case mm.MethodName == "ranges" && className == "QPageRanges":
		return cpp2c.ErrTooComplex // returns QList<QPageRanges::Range> struct list
	case mm.MethodName == "toRangeList" && className == "QPageRanges":
		return cpp2c.ErrTooComplex // returns QList<QPageRanges::Range> struct list
	case mm.MethodName == "setRects" && className == "QRegion" && len(mm.Parameters) > 0 && mm.Parameters[0].ParameterType != "const QRect *":
		return cpp2c.ErrTooComplex // QRegion::setRects with QSpan<T> template parameter
	case strings.Contains(mm.ReturnType.ParameterType, "HGLRC") || strings.Contains(mm.ReturnType.ParameterType, "HINSTANCE") || strings.Contains(mm.ReturnType.ParameterType, "HBITMAP") || strings.Contains(mm.ReturnType.ParameterType, "HICON"):
		return cpp2c.ErrTooComplex // Windows handle types
	case strings.Contains(mm.ReturnType.ParameterType, "QNativeInterface"):
		return cpp2c.ErrTooComplex // QNativeInterface virtual classes not suitable for C ABI
	case mm.ReturnType.ParameterType == "GrabTransition":
		return cpp2c.ErrTooComplex // QPointingDevice::GrabTransition incomplete type
	case mm.MethodName == "grabChanged":
		return cpp2c.ErrTooComplex // QPointingDevice::GrabTransition in signal
	case mm.ReturnType.ParameterType == "ResourceProvider":
		return cpp2c.ErrTooComplex // QTextDocument::ResourceProvider is std::function typedef
	case mm.MethodName == "resourceProvider" || mm.MethodName == "setResourceProvider" || mm.MethodName == "defaultResourceProvider" || mm.MethodName == "setDefaultResourceProvider":
		return cpp2c.ErrTooComplex // QTextDocument::ResourceProvider is std::function typedef
	case mm.MethodName == "capabilitiesChanged":
		return cpp2c.ErrTooComplex // QInputDevice::Capabilities typedef in signal
	case mm.MethodName == "finishedWithSelf":
		return cpp2c.ErrTooComplex // QDBusPendingCallWatcher signal parameter name conflicts with self
	case className == "QTouchEvent" && strings.HasPrefix(mm.MethodName, "new"):
		return cpp2c.ErrTooComplex // QTouchEvent constructors use QEventPoint::States QFlags typedef
	case mm.MethodName == "installActivationObserver" || mm.MethodName == "removeActivationObserver":
		return cpp2c.ErrTooComplex // QAccessible::ActivationObserver is a function pointer typedef
	case strings.Contains(mm.ReturnType.ParameterType, "ActivationObserver"):
		return cpp2c.ErrTooComplex // QAccessible::ActivationObserver is a function pointer typedef
	case className == "QAccessibleStateChangeEvent" && strings.HasPrefix(mm.MethodName, "new"):
		return cpp2c.ErrTooComplex // QAccessible::State struct parameter
	case mm.MethodName == "state" && (className == "QAccessibleStateChangeEvent" || className == "QAccessibleEventReadOnlyInterface"):
		return cpp2c.ErrTooComplex // returns QAccessible::State struct
	case className == "QWindowsMimeConverter":
		return cpp2c.ErrTooComplex // Windows-specific OLE/COM types (FORMATETC etc.) - abstract class
	case className == "RenderFlag" || mm.ReturnType.ParameterType == "RenderFlag":
		return cpp2c.ErrTooComplex // QWidget::RenderFlag needs QWidget include
	case mm.MethodName == "renderFlags" && className == "QTextItem":
		return cpp2c.ErrTooComplex // QTextItem::renderFlags returns QFlags<QWidget::RenderFlag> which needs QWidget
	case mm.MethodName == "devices" && className == "QInputDevice":
		return cpp2c.ErrTooComplex // QInputDevice::devices returns QList<const QInputDevice*> which is parsed incorrectly
	case mm.ReturnType.ParameterType == "SortFlags" && className == "QCollator":
		return cpp2c.ErrTooComplex // QCollator::SortFlags removed in Qt 6
	case className == "QProcessEnvironment" && len(mm.Parameters) > 0 && mm.Parameters[0].ParameterType == "Initialization":
		return cpp2c.ErrTooComplex // Qt::Initialization enum mismatch
	case mm.MethodName == "asprintf" || mm.MethodName == "vasprintf":
		return cpp2c.ErrTooComplex // variadic arguments
	case className == "QBindingStatus" && mm.MethodName == "threadId":
		return cpp2c.ErrTooComplex // Qt::HANDLE return type
	case className == "QThread" && mm.MethodName == "currentThreadId":
		return cpp2c.ErrTooComplex // Qt::HANDLE return type
	case strings.Contains(mm.MethodName, "constKeyValueBegin") || strings.Contains(mm.MethodName, "constKeyValueEnd"):
		return cpp2c.ErrTooComplex // const_key_value_iterator can't reinterpret_cast to void*
	case className == "QFileDevice" && (mm.MethodName == "map" || mm.MethodName == "unmap"):
		return cpp2c.ErrTooComplex // uchar* return type not handled correctly
	case className == "QResource" && mm.MethodName == "data":
		return cpp2c.ErrTooComplex // const uchar* return type not handled correctly
	case className == "QSocketDescriptor" && mm.MethodName == "winHandle":
		return cpp2c.ErrTooComplex // Qt::HANDLE return type
	case className == "QGenericRunnable":
		return cpp2c.ErrTooComplex // incomplete type, forward declared only
	case className == "QOperatingSystemVersionBase" || className == "QOperatingSystemVersionUnexported":
		return cpp2c.ErrTooComplex // protected constructor
	case mm.ReturnType.ParameterType == "DescriptorType":
		return cpp2c.ErrTooComplex // QSocketDescriptor::DescriptorType is qintptr, not int
	case mm.ReturnType.ParameterType == "ReadFunc" || mm.ReturnType.ParameterType == "WriteFunc":
		return cpp2c.ErrTooComplex // function pointer typedef
	case mm.ReturnType.ParameterType == "EasingFunction":
		return cpp2c.ErrTooComplex // function pointer typedef (already handled above but be safe)
	case strings.Contains(mm.CppCallTarget(), "..."):
		return cpp2c.ErrTooComplex // variadic
	case mm.ReturnType.ParameterType == "Iterator" || mm.ReturnType.ParameterType == "ConstIterator" ||
		mm.ReturnType.ParameterType == "iterator" || mm.ReturnType.ParameterType == "const_iterator" ||
		mm.ReturnType.ParameterType == "reverse_iterator" ||
		mm.ReturnType.ParameterType == "const_reverse_iterator" ||
		strings.HasSuffix(mm.ReturnType.ParameterType, "::iterator") ||
		strings.HasSuffix(mm.ReturnType.ParameterType, "::const_iterator") ||
		strings.HasSuffix(mm.ReturnType.ParameterType, "::reverse_iterator") ||
		strings.HasSuffix(mm.ReturnType.ParameterType, "::const_reverse_iterator"):
		return cpp2c.ErrTooComplex // iterator types not convertible to void*
	case className == "QDirListing" && (strings.Contains(mm.MethodName, "IteratorFlags") || mm.ReturnType.ParameterType == "IteratorFlags"):
		return cpp2c.ErrTooComplex // QDirListing::IteratorFlags != QDirIterator::IteratorFlags
	case className == "QPluginLoader" && (mm.MethodName == "setLoadHints" || mm.MethodName == "loadHints"):
		return cpp2c.ErrTooComplex // QLibrary::LoadHints resolved as QFlags<Qt::LoadHint> by Clang
	case className == "QXmlStreamWriter" && mm.MethodName == "error":
		return cpp2c.ErrTooComplex // QXmlStreamWriter::Error enum not properly mapped
	case className == "QSettings" && mm.MethodName == "registerFormat":
		return cpp2c.ErrTooComplex // ReadFunc/WriteFunc function pointer parameters
	case className == "QWinEventNotifier":
		return cpp2c.ErrTooComplex // HANDLE is private typedef (void*)
	case className == "QGenericRunnable":
		return cpp2c.ErrTooComplex // incomplete type, can't static_cast to QRunnable
	case className == "QBindingStatus":
		return cpp2c.ErrTooComplex // threadId returns Qt::HANDLE (void*)
	case className == "QFont" && mm.MethodName == "tag":
		return cpp2c.ErrTooComplex // QFont::Tag requires const char[] constructor
	case className == "QFont" && mm.MethodName == "setTag":
		return cpp2c.ErrTooComplex // QFont::Tag requires const char[] constructor
	case className == "QFont" && (mm.MethodName == "setFeature" || mm.MethodName == "unsetFeature" || mm.MethodName == "featureValue" || mm.MethodName == "isFeatureSet" || mm.MethodName == "featureTags"):
		return cpp2c.ErrTooComplex // QFont::Tag cannot be constructed from int
	case className == "QFont" && (mm.MethodName == "setVariableAxis" || mm.MethodName == "unsetVariableAxis" || mm.MethodName == "isVariableAxisSet" || mm.MethodName == "variableAxisValue" || mm.MethodName == "variableAxisTags"):
		return cpp2c.ErrTooComplex // QFont::Tag cannot be constructed from int
	case mm.ReturnType.ParameterType == "FormatRange":
		return cpp2c.ErrTooComplex // QTextLayout::FormatRange is a struct
	case mm.MethodName == "setAdditionalFormats" || mm.MethodName == "additionalFormats" || mm.MethodName == "formats" || mm.MethodName == "setFormats":
		if className == "QTextLayout" || className == "QTextLine" {
			return cpp2c.ErrTooComplex // FormatRange struct parameter/return
		}
	case mm.ReturnType.ParameterType == "Tab":
		return cpp2c.ErrTooComplex // QTextOption::Tab is a struct
	case mm.MethodName == "setTabs" || mm.MethodName == "tabs":
		if className == "QTextOption" {
			return cpp2c.ErrTooComplex // QTextOption::Tab struct parameter/return
		}
	case mm.MethodName == "setTabPositions" || mm.MethodName == "tabPositions":
		return cpp2c.ErrTooComplex // QTextOption::Tab struct parameter/return
	case mm.ReturnType.ParameterType == "InterfaceFactory" || mm.ReturnType.ParameterType == "UpdateHandler" || mm.ReturnType.ParameterType == "RootObjectHandler":
		return cpp2c.ErrTooComplex // QAccessible function pointer typedefs
	case mm.MethodName == "installFactory" || mm.MethodName == "removeFactory" || mm.MethodName == "installHandler" || mm.MethodName == "installRootObjectHandler":
		return cpp2c.ErrTooComplex // QAccessible function pointer typedefs
	case mm.ReturnType.ParameterType == "State" && className == "QAccessible":
		return cpp2c.ErrTooComplex // QAccessible::State is a struct, pointer cast mismatch
	case className == "QAccessibleStateChangeEvent" && strings.HasPrefix(mm.MethodName, "new"):
		return cpp2c.ErrTooComplex // QAccessible::State struct parameter
	case mm.MethodName == "state" && className == "QAccessibleInterface":
		return cpp2c.ErrTooComplex // QAccessible::State struct return
	case mm.ReturnType.ParameterType == "MarshallFunction" || mm.ReturnType.ParameterType == "DemarshallFunction":
		return cpp2c.ErrTooComplex // QDBusMetaType function pointer typedefs
	case mm.MethodName == "registerMarshallOperators" || mm.MethodName == "marshallOperators":
		return cpp2c.ErrTooComplex // QDBusMetaType function pointer typedefs
	case className == "QDBusError" && strings.HasPrefix(mm.MethodName, "new"):
		return cpp2c.ErrTooComplex // QDBusError constructors have complex overloads
	case mm.ReturnType.ParameterType == "PaintContext":
		return cpp2c.ErrTooComplex // QAbstractTextDocumentLayout::PaintContext is a struct
	case mm.MethodName == "draw" && className == "QAbstractTextDocumentLayout":
		return cpp2c.ErrTooComplex // PaintContext struct parameter
	case mm.MethodName == "draw" && className == "QPlainTextDocumentLayout":
		return cpp2c.ErrTooComplex // PaintContext struct parameter
	case (mm.MethodName == "extraSelections" || mm.MethodName == "setExtraSelections") && className == "QTextEdit":
		return cpp2c.ErrTooComplex // QTextEdit::ExtraSelection struct
	case className == "QAbstractTextDocumentLayout" && strings.HasPrefix(mm.MethodName, "new"):
		return cpp2c.ErrTooComplex // abstract class, cannot instantiate
	case className == "QPaintEngine" && strings.HasPrefix(mm.MethodName, "new"):
		return cpp2c.ErrTooComplex // abstract class, cannot instantiate
	case className == "QValidator" && strings.HasPrefix(mm.MethodName, "new"):
		return cpp2c.ErrTooComplex // abstract class, cannot instantiate
	case mm.ReturnType.ParameterType == "Tag" && className == "QFont":
		return cpp2c.ErrTooComplex // QFont::Tag
	case mm.ReturnType.ParameterType == "PropertyPair":
		return cpp2c.ErrTooComplex // QQmlContext::PropertyPair incomplete type
	case mm.ReturnType.ParameterType == "RawHeaderPair":
		return cpp2c.ErrTooComplex // QNetworkReply::RawHeaderPair incomplete type
	case strings.HasPrefix(mm.ReturnType.ParameterType, "RawHeaderPair"):
		return cpp2c.ErrTooComplex // QNetworkReply::RawHeaderPair variants
	case mm.ReturnType.ParameterType == "GeneratorParameters":
		return cpp2c.ErrTooComplex // QDtlsClientVerifier::GeneratorParameters incomplete type
	case mm.MethodName == "setCookieGeneratorParameters" || mm.MethodName == "cookieGeneratorParameters":
		return cpp2c.ErrTooComplex // QDtlsClientVerifier::GeneratorParameters incomplete type
	case mm.ReturnType.ParameterType == "RegisterServiceReply":
		return cpp2c.ErrTooComplex // QDBusConnectionInterface::RegisterServiceReply incomplete type
	case strings.HasPrefix(mm.ReturnType.ParameterType, "QNativeInterface__"):
		return cpp2c.ErrTooComplex // QNativeInterface internal types
	case strings.HasPrefix(mm.ReturnType.ParameterType, "QtConcurrent__"):
		return cpp2c.ErrTooComplex // QtConcurrent internal types
	case strings.HasPrefix(mm.ReturnType.ParameterType, "QQmlSA__"):
		return cpp2c.ErrTooComplex // QQmlSA internal types
	case className == "QDtlsClientVerifier" && mm.MethodName == "GeneratorParameters":
		return cpp2c.ErrTooComplex
	case className == "QDBusConnectionInterface" && mm.MethodName == "RegisterServiceReply":
		return cpp2c.ErrTooComplex
	case className == "QDBusConnectionInterface" && mm.MethodName == "registerService":
		return cpp2c.ErrTooComplex // QDBusReply<RegisterServiceReply> uses inner enum as template arg
	case strings.HasPrefix(mm.ReturnType.ParameterType, "QDBusReply<"):
		return cpp2c.ErrTooComplex // QDBusReply<T> template type not supported in C ABI
	case mm.ReturnType.ParameterType == "QueryType" || mm.ReturnType.ParameterType == "QNetworkProxyQuery::QueryType":
		return cpp2c.ErrTooComplex // QNetworkProxyQuery::QueryType inner enum
	case className == "QNetworkProxyQuery":
		for _, p := range mm.Parameters {
			if p.ParameterType == "QueryType" {
				return cpp2c.ErrTooComplex
			}
		}
	case className == "QTransform" && mm.MethodName == "Affine":
		return cpp2c.ErrTooComplex // QTransform::Affine bare enum reference
	case className == "QNetworkCacheMetaData" && (mm.MethodName == "rawHeaders" || mm.MethodName == "setRawHeaders" || mm.MethodName == "attributes" || mm.MethodName == "setAttributes"):
		return cpp2c.ErrTooComplex // RawHeaderList/AttributesMap typedef types not handled
	case className == "QGlyphRun" && (mm.MethodName == "stringIndexes" || mm.MethodName == "setStringIndexes"):
		return cpp2c.ErrTooComplex // QList<qsizetype> not handled correctly
	case className == "QHostAddress" && mm.MethodName == "toIPv6Address":
		return cpp2c.ErrTooComplex // QIPv6Address return by value, pointer cast incorrect
	case className == "QPixelFormat" && strings.HasPrefix(mm.MethodName, "new"):
		return cpp2c.ErrTooComplex // ByteOrder enum ambiguous between QPixelFormat and QDataStream
	case className == "QSslCertificate" && mm.MethodName == "handle":
		return cpp2c.ErrTooComplex // Qt::HANDLE return type
	case className == "QSslKey" && mm.MethodName == "handle":
		return cpp2c.ErrTooComplex // Qt::HANDLE return type
	case className == "QDtls" && mm.MethodName == "handle":
		return cpp2c.ErrTooComplex // Qt::HANDLE return type
	case className == "QDtlsClientVerifier" && mm.MethodName == "handle":
		return cpp2c.ErrTooComplex // Qt::HANDLE return type
	case className == "QRegion" && (mm.MethodName == "toHRGN" || mm.MethodName == "fromHRGN"):
		return cpp2c.ErrTooComplex // HRGN Windows handle type
	case className == "QPixmap" && (mm.MethodName == "toHBITMAP" || mm.MethodName == "toHICON" || mm.MethodName == "fromHICON" || mm.MethodName == "fromHBITMAP"):
		return cpp2c.ErrTooComplex // HBITMAP/HICON Windows handle types
	case className == "QImage" && (mm.MethodName == "toHICON" || mm.MethodName == "fromHBITMAP" || mm.MethodName == "fromHICON"):
		return cpp2c.ErrTooComplex // HBITMAP/HICON Windows handle types
	case className == "QCursor" && (mm.MethodName == "handle" || mm.MethodName == "bitmap" || mm.MethodName == "mask"):
		return cpp2c.ErrTooComplex // HCURSOR Windows handle type
	// QtMultimedia issues
	case className == "QVideoFrame" && mm.MethodName == "paint":
		return cpp2c.ErrTooComplex // PaintOptions QFlags parameter
	case className == "QVideoFrame" && mm.MethodName == "mapData":
		return cpp2c.ErrTooComplex // MapData struct return
	case className == "QVideoFrame" && strings.HasPrefix(mm.MethodName, "PaintOptions"):
		return cpp2c.ErrTooComplex // PaintOptions QFlags type
	case className == "QMediaFormat" && (mm.MethodName == "videoCodec" || mm.MethodName == "audioCodec"):
		return cpp2c.ErrTooComplex // VideoCodec/AudioCodec enum return
	case className == "QMediaFormat" && (mm.MethodName == "setVideoCodec" || mm.MethodName == "setAudioCodec"):
		return cpp2c.ErrTooComplex // VideoCodec/AudioCodec enum parameter
	case className == "QMediaFormat" && strings.HasPrefix(mm.MethodName, "VideoCodec"):
		return cpp2c.ErrTooComplex // VideoCodec enum type
	case className == "QMediaFormat" && strings.HasPrefix(mm.MethodName, "AudioCodec"):
		return cpp2c.ErrTooComplex // AudioCodec enum type
	case className == "QMediaPlayer" && mm.MethodName == "pitchCompensationAvailability":
		return cpp2c.ErrTooComplex // PitchCompensationAvailability enum return
	case className == "QMediaTimeRange" && strings.HasPrefix(mm.MethodName, "new"):
		return cpp2c.ErrTooComplex // Interval struct parameter
	case className == "QMediaTimeRange" && mm.MethodName == "operator=":
		return cpp2c.ErrTooComplex // Interval struct parameter
	case className == "QMediaTimeRange" && mm.MethodName == "addInterval":
		return cpp2c.ErrTooComplex // Interval struct parameter
	case className == "QPlaybackOptions" && mm.MethodName == "playbackIntent":
		return cpp2c.ErrTooComplex // PlaybackIntent enum return
	case className == "QPlaybackOptions" && strings.HasPrefix(mm.MethodName, "PlaybackIntent"):
		return cpp2c.ErrTooComplex // PlaybackIntent enum type
	// QSqlQuery methods with Qt::ParamTypeFlag parameter (should be QSql::ParamTypeFlag)
	case className == "QSqlQuery" && (mm.MethodName == "bindValue" || mm.MethodName == "addBindValue"):
		return cpp2c.ErrTooComplex // Qt::ParamTypeFlag QFlags parameter
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "Iterator" || p.ParameterType == "ConstIterator" {
			return cpp2c.ErrTooComplex // nested class type, bare name not resolvable
		}
		if p.ParameterType == "ReadFunc" || p.ParameterType == "WriteFunc" {
			return cpp2c.ErrTooComplex // function pointer typedef
		}
		if p.ParameterType == "EasingFunction" {
			return cpp2c.ErrTooComplex // function pointer typedef
		}
		if p.ParameterType == "DescriptorType" {
			return cpp2c.ErrTooComplex // qintptr, not int
		}
		if p.ParameterType == "HANDLE" || p.ParameterType == "Qt::HANDLE" {
			return cpp2c.ErrTooComplex // void* on Windows
		}
		if p.ParameterType == "_GUID" || p.ParameterType == "GUID" {
			return cpp2c.ErrTooComplex // Windows GUID struct, not int*
		}
		if p.ParameterType == "Qt::ParamTypeFlag" || p.ParameterType == "ParamTypeFlag" {
			return cpp2c.ErrTooComplex // Qt::ParamTypeFlag should be QSql::ParamTypeFlag
		}
	}
	if mm.ReturnType.ParameterType == "HANDLE" || mm.ReturnType.ParameterType == "Qt::HANDLE" {
		return cpp2c.ErrTooComplex // void* on Windows, mapped incorrectly
	}

	// Block methods that use QRawFont (not in whitelist - no forward declaration)
	if className == "QGlyphRun" && (mm.MethodName == "rawFont" || mm.MethodName == "setRawFont") {
		return cpp2c.ErrTooComplex
	}
	if className == "QTextLayout" && mm.MethodName == "setRawFont" {
		return cpp2c.ErrTooComplex
	}
	// Block methods that return QTextLine (not in whitelist - no forward declaration)
	if className == "QTextLayout" && (mm.MethodName == "createLine" || mm.MethodName == "lineAt" || mm.MethodName == "lineForTextPosition") {
		return cpp2c.ErrTooComplex
	}
	// Block QAccessibleTableModelChangeEvent (not in whitelist - no forward declaration)
	if className == "QAccessibleTableInterface" && mm.MethodName == "modelChange" {
		return cpp2c.ErrTooComplex
	}
	// Block QAccessibilityHints (not in whitelist - no forward declaration)
	if className == "QStyleHints" && mm.MethodName == "accessibility" {
		return cpp2c.ErrTooComplex
	}
	// Block QRhiRenderTarget (not in whitelist - no forward declaration)
	if className == "QRhiWidget" && mm.MethodName == "renderTarget" {
		return cpp2c.ErrTooComplex
	}
	// Block QAccessibleWidget methods returning QAccessible::State (struct only forward-declared)
	if className == "QAccessibleWidget" && mm.MethodName == "state" {
		return cpp2c.ErrTooComplex
	}
	if className == "QAccessibleWidgetV2" && mm.MethodName == "state" {
		return cpp2c.ErrTooComplex
	}
	// Block QPlainTextEdit getPaintContext (returns PaintContext struct, only forward-declared)
	if className == "QPlainTextEdit" && mm.MethodName == "getPaintContext" {
		return cpp2c.ErrTooComplex
	}

	return nil // OK, allow
}

func allowCtor(className string, mm cpp2c.CppMethod) bool {
	if strings.Contains(className, "::") {
		baseName := className[strings.LastIndex(className, "::")+2:]
		if mm.MethodName == baseName && len(mm.Parameters) == 1 {
			p := mm.Parameters[0]
			if !p.Pointer && (p.ParameterType == baseName || p.ParameterType == "const "+baseName) {
				return false
			}
		}
	}
	// Block copy constructors (reference parameter, not pointer)
	if mm.MethodName == className && len(mm.Parameters) == 1 {
		p := mm.Parameters[0]
		if !p.Pointer && (p.ParameterType == className || p.ParameterType == "const "+className) {
			return false
		}
	}
	// Block QDBusError constructors - they use DBusError* native type
	if className == "QDBusError" {
		return false
	}
	// Block QTouchEvent constructors with TouchPointState vs States mismatch
	if className == "QTouchEvent" {
		return false
	}
	// Block QWindowsMimeConverter (abstract class with COM types)
	if className == "QWindowsMimeConverter" {
		return false
	}
	// Block inner struct/class types that are forward-declared only
	if className == "QPluginMetaData::Header" || className == "QPluginMetaData::MagicHeader" || className == "QPluginMetaData::ElfNoteHeader" {
		return false
	}
	if className == "QProcess::CreateProcessArguments" {
		return false
	}
	if className == "QRangeModelDetails::ConnectionStorage::Connection" {
		return false
	}
	if className == "QFont::Tag" {
		return false
	}
	if className == "QGradient::QGradientData" {
		return false
	}
	if className == "QTextOption::Tab" {
		return false
	}
	if className == "QTextLayout::FormatRange" {
		return false
	}
	if className == "QAbstractTextDocumentLayout::Selection" {
		return false
	}
	if className == "QAccessible::ActivationObserver" {
		return false
	}
	if className == "QColorSpace::PrimaryPoints" {
		return false
	}
	if className == "QIconEngine::ScaledPixmapArgument" {
		return false
	}
	if className == "QPageRanges::Range" {
		return false
	}
	if className == "QPainter::PixmapFragment" {
		return false
	}
	if className == "QPixmapCache::Key" {
		return false
	}
	if className == "QQuaternion::Axis" {
		return false
	}
	if className == "QTextFrame::iterator" {
		return false
	}
	// Block constructors with TimerInfo/TimerInfoV2 struct parameters
	if className == "QAbstractEventDispatcher" {
		for _, p := range mm.Parameters {
			if strings.Contains(p.ParameterType, "TimerInfo") {
				return false
			}
		}
	}
	// Block constructors with QStringConverterBase::State parameters
	if className == "QStringConverterBase" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "State" || strings.Contains(p.ParameterType, "State") {
				return false
			}
		}
	}
	// Block constructors with QMetaObject::Data parameters
	if className == "QMetaObject" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Data" || p.ParameterType == "SuperData" {
				return false
			}
		}
	}
	// Block constructors with QInputMethodEvent::Attribute struct
	if className == "QInputMethodEvent" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Attribute" || strings.Contains(p.ParameterType, "Attribute") {
				return false
			}
		}
	}
	// Block constructors with QVariantAnimation::KeyValues typedef
	if className == "QVariantAnimation" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "KeyValues" {
				return false
			}
		}
	}
	// Block constructors with QFormLayout::TakeRowResult struct
	if className == "QFormLayout" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "TakeRowResult" {
				return false
			}
		}
	}
	// Block constructors with QPainterPath::Element struct
	if className == "QPainterPath" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Element" {
				return false
			}
		}
	}
	// Block constructors with QTextEdit::ExtraSelection struct
	if className == "QTextEdit" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "ExtraSelection" {
				return false
			}
		}
	}
	// Block constructors with QQuaternion::Axes struct
	if className == "QQuaternion" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Axes" {
				return false
			}
		}
	}
	// Block constructors with QEventPoint::States type
	if className == "QEventPoint" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "States" {
				return false
			}
		}
	}
	// Block constructors with QAbstractItemView::State mismatch
	if className == "QAbstractItemView" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "State" && !p.Pointer {
				return false
			}
		}
	}
	// Block constructors with Duration (std::chrono) type
	for _, p := range mm.Parameters {
		if p.ParameterType == "Duration" {
			return false
		}
	}
	// Block constructors with template T parameter
	for _, p := range mm.Parameters {
		if p.ParameterType == "T" {
			return false
		}
	}
	// Block constructors with QTSMFC/QTSMFI function pointer types
	for _, p := range mm.Parameters {
		if p.ParameterType == "QTSMFC" || p.ParameterType == "QTSMFI" {
			return false
		}
	}
	// Block constructors with QMetaObject::Connection parameter
	for _, p := range mm.Parameters {
		if p.ParameterType == "QMetaObject::Connection" {
			return false
		}
	}
	// Block constructors with QCborMap::value_type struct
	for _, p := range mm.Parameters {
		if p.ParameterType == "value_type" {
			return false
		}
	}
	// Block constructors with QVariant::Private/PrivateShared
	if className == "QVariant" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Private" || p.ParameterType == "PrivateShared" {
				return false
			}
		}
	}
	// Block constructors with QUuid::Id128Bytes struct
	if className == "QUuid" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Id128Bytes" {
				return false
			}
		}
	}
	// Block constructors with QCalendar::SystemId/YearMonthDay
	if className == "QCalendar" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "SystemId" || p.ParameterType == "YearMonthDay" {
				return false
			}
		}
	}
	// Block constructors with QCborValueRef/QCborValueConstRef
	if className == "QCborValueRef" || className == "QCborValueConstRef" {
		return false
	}
	// Block constructors with QCborArray::Iterator/ConstIterator/iterator/const_iterator
	if className == "QCborArray" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Iterator" || p.ParameterType == "ConstIterator" || p.ParameterType == "iterator" || p.ParameterType == "const_iterator" {
				return false
			}
		}
	}
	// Block constructors with QCborMap::Iterator/ConstIterator/iterator/const_iterator
	if className == "QCborMap" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Iterator" || p.ParameterType == "ConstIterator" || p.ParameterType == "iterator" || p.ParameterType == "const_iterator" {
				return false
			}
		}
	}
	// Block constructors with QJsonArray::Iterator/ConstIterator/iterator/const_iterator
	if className == "QJsonArray" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Iterator" || p.ParameterType == "ConstIterator" || p.ParameterType == "iterator" || p.ParameterType == "const_iterator" {
				return false
			}
		}
	}
	// Block constructors with QJsonObject::Iterator/ConstIterator/iterator/const_iterator
	if className == "QJsonObject" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "Iterator" || p.ParameterType == "ConstIterator" || p.ParameterType == "iterator" || p.ParameterType == "const_iterator" {
				return false
			}
		}
	}
	// ORIGINAL CODE (preserved for rollback):
	if className == "QGenericRunnable" {
		return false // incomplete type
	}
	if className == "QOperatingSystemVersionBase" || className == "QOperatingSystemVersionUnexported" {
		return false // protected constructor
	}
	if className == "QDirListing::DirEntry" || className == "QDirListing::const_iterator" {
		return false // inner struct/class, forward-declared only
	}
	if className == "QTimeZone::OffsetData" {
		return false // inner struct, forward-declared only
	}
	if className == "QWinEventNotifier" {
		return false // HANDLE is private typedef (void*)
	}
	if className == "QBindingStatus" {
		return false // threadId returns Qt::HANDLE (void*)
	}
	// Block ALL constructors for property binding types that are typedef'd to void*
	// Their constructors can't be meaningfully exposed through C ABI
	if className == "QPropertyBindingSourceLocation" || className == "QUntypedPropertyBinding" {
		return false
	}
	if className == "QSocketDescriptor" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "DescriptorType" || p.ParameterType == "QSocketDescriptor::DescriptorType" {
				return false // qintptr, not int
			}
		}
	}
	if className == "QUuid" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "_GUID" || p.ParameterType == "GUID" {
				return false // Windows GUID struct, not int*
			}
		}
	}
	if className == "QDirListing" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "IteratorFlags" {
				return false // QDirListing::IteratorFlags != QDirIterator::IteratorFlags
			}
		}
	}
	if className == "QTreeWidgetItemIterator" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "IteratorFlags" {
				return false // QTreeWidgetItemIterator::IteratorFlags is QFlags, int cannot implicitly convert
			}
		}
	}
	if className == "QDirListing" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "IteratorFlags" {
				return false
			}
		}
	}
	if className == "QVersionNumber" {
		for _, p := range mm.Parameters {
			if p.ParameterType == "void*" || p.RenderTypeCabi() == "void*" && !p.Pointer {
				return false
			}
		}
	}
	for _, p := range mm.Parameters {
		if p.ParameterType == "Iterator" || p.ParameterType == "ConstIterator" || p.ParameterType == "iterator" || p.ParameterType == "const_iterator" {
			return false // nested class type, bare name not resolvable
		}
	}
	// Block QCalendar(SystemId) constructor - SystemId is an inner class, not castable from int
	if className == "QColorSpace" {
		for _, p := range mm.Parameters {
			pt := p.ParameterType
			if pt == "PrimaryPoints" || pt == "QColorSpace::PrimaryPoints" || pt == "QPointF" || pt == "const QPointF" || strings.Contains(pt, "QList") || strings.Contains(pt, "uint16_t") {
				return false
			}
		}
	}
	if className == "QCalendar" && len(mm.Parameters) == 1 && mm.Parameters[0].ParameterType == "int" {
		return false
	}
	for _, p := range mm.Parameters {
		if strings.Contains(p.ParameterType, "BindingFunctionVTable") {
			return false
		}
		if p.ParameterType == "SystemId" {
			return false
		}
		if p.ParameterType == "Segment" {
			return false
		}
		if p.ParameterType == "std::nullptr_t" {
			return false
		}
		if p.ParameterType == "Initialization" {
			return false
		}
		if p.ParameterType == "Id128Bytes" {
			return false
		}
		if p.ParameterType == "ShortData" {
			return false
		}
		if p.ParameterType == "DataPointer" || p.ParameterType == "QByteArray::DataPointer" {
			return false
		}
		if p.ParameterType == "QByteArrayData" {
			return false
		}
		if p.ParameterType == "QStringView" || p.ParameterType == "QByteArrayView" ||
			p.ParameterType == "QLatin1StringView" || p.ParameterType == "QLatin1String" ||
			p.ParameterType == "QUtf8StringView" || p.ParameterType == "QAnyStringView" ||
			p.ParameterType == "QStringRef" {
			return false
		}
		if p.ParameterType == "_GUID" || p.ParameterType == "GUID" {
			return false
		}
		if p.ParameterType == "DescriptorType" {
			return false
		}
	}
	return true
}

// allowType controls whether to permit binding of a method, if a method uses
// this type in its parameter list or return type.
// Any type not permitted by allowClass is also not permitted by this method.
func allowType(p cpp2c.CppParameter, isReturnType bool) error {
	// ORIGINAL CODE (preserved for rollback):

	if t, ok := p.QSetOf(); ok {
		if err := allowType(t, isReturnType); err != nil {
			return err
		}
	}
	if t, _, ok := p.QListOf(); ok {
		if err := allowType(t, isReturnType); err != nil { // e.g. QGradientStops is a QVector<> (OK) of QGradientStop (not OK)
			return err
		}

		// qsciscintilla.h QsciScintilla_Annotate4: no copy ctor for private type QsciStyledText
		// Works fine normally, but not in a list
		if t.ParameterType == "QsciStyledText" {
			return cpp2c.ErrTooComplex
		}
	}
	if kType, vType, _, ok := p.QMapOf(); ok {
		if err := allowType(kType, isReturnType); err != nil {
			return err
		}
		if err := allowType(vType, isReturnType); err != nil {
			return err
		}
		// Additionally, Go maps do not support []byte keys
		// This affects qnetwork qsslconfiguration BackendConfiguration
		if kType.ParameterType == "QByteArray" {
			return cpp2c.ErrTooComplex
		}
	}
	if kType, vType, ok := p.QPairOf(); ok {
		if err := allowType(kType, isReturnType); err != nil {
			return err
		}
		if err := allowType(vType, isReturnType); err != nil {
			return err
		}
	}
	if p.QMultiMapOf() {
		return cpp2c.ErrTooComplex // e.g. Qt5 QNetwork qsslcertificate.h has a QMultiMap<QSsl::AlternativeNameEntryType, QString>
	}

	if !allowClassBase(p.ParameterType) {
		return cpp2c.ErrTooComplex // This whole class type has been blocked, not only as a parameter/return type
	}

	if isBlockedInternalStructType(p.ParameterType) {
		return cpp2c.ErrTooComplex
	}

	if strings.Contains(p.ParameterType, "(*)") { // Function pointer.
		return cpp2c.ErrTooComplex // e.g. QAccessible_InstallFactory
	}

	switch {
	case strings.HasPrefix(p.ParameterType, "ImVector<"),
		strings.HasPrefix(p.ParameterType, "StringResult<"),
		strings.HasPrefix(p.ParameterType, "QScopedPointer<"),
		strings.HasPrefix(p.ParameterType, "QExplicitlySharedDataPointer<"),
		strings.HasPrefix(p.ParameterType, "QSharedDataPointer<"),
		strings.HasPrefix(p.ParameterType, "QTypedArrayData<"),
		strings.HasPrefix(p.ParameterType, "QGenericMatrix<"),
		strings.HasPrefix(p.ParameterType, "QUrlTwoFlags<"),
		strings.HasPrefix(p.ParameterType, "FillResult<"),
		strings.HasPrefix(p.ParameterType, "QBindable<"),
		strings.HasPrefix(p.ParameterType, "QRgbaFloat<"),
		strings.HasPrefix(p.ParameterType, "QPointer<"),
		strings.HasPrefix(p.ParameterType, "EncodedData<"),
		strings.HasPrefix(p.ParameterType, "QQmlListProperty<"),
		strings.HasPrefix(p.ParameterType, "QWebEngineCallback<"):
		return cpp2c.ErrTooComplex

	case strings.HasPrefix(p.ParameterType, "std::"):
		return cpp2c.ErrTooComplex
	case strings.HasPrefix(p.ParameterType, "nullptr"),
		strings.HasPrefix(p.ParameterType, "basic_string_view"),
		strings.HasPrefix(p.ParameterType, "basic_string"),
		strings.HasPrefix(p.ParameterType, "const_pointer"),
		strings.HasPrefix(p.ParameterType, "va_list"),
		strings.HasPrefix(p.ParameterType, "QArrayDataPointer<"),
		strings.HasPrefix(p.ParameterType, "QBasicAtomicInteger<"),
		strings.HasPrefix(p.ParameterType, "Dom"):
		return cpp2c.ErrTooComplex
	}
	switch {
	case strings.Contains(p.ParameterType, `Iterator::value_type`):
		return cpp2c.ErrTooComplex // e.g. qcbormap
	case strings.Contains(p.ParameterType, `>::iterator`),
		strings.Contains(p.ParameterType, `>::const_iterator`):
		return cpp2c.ErrTooComplex
	case strings.Contains(p.ParameterType, `::QPrivate`):
		return cpp2c.ErrTooComplex // e.g. QAbstractItemModel::QPrivateSignal
	case strings.Contains(p.GetQtCppType().ParameterType, `::DataPtr`):
		return cpp2c.ErrTooComplex // e.g. QImage::data_ptr()
	case strings.Contains(p.ParameterType, `::DataPointer`):
		return cpp2c.ErrTooComplex // Qt 6 qbytearray.h. This could probably be made to work
	}

	// Some QFoo constructors take a QFooPrivate
	// QIcon also returns a QIconPrivate
	if p.ParameterType[0] == 'Q' && strings.HasSuffix(p.ParameterType, "Private") {
		return cpp2c.ErrTooComplex
	}
	if strings.HasPrefix(p.ParameterType, "QtPrivate::") {
		return cpp2c.ErrTooComplex // e.g. Qt 6 qbindingstorage.h
	}

	// If any parameters are QString*, skip the method
	// QDebug constructor
	// QXmlStreamWriter constructor
	// QFile::moveToTrash
	// QLockFile::getLockInfo
	// QTextDecoder::toUnicode
	// QTextStream::readLineInto
	// QFileDialog::getOpenFileName selectedFilter* param
	if p.ParameterType == "QString" && p.Pointer && !isReturnType { // Out-parameters
		return cpp2c.ErrTooComplex
	}

	// QBuffer can accept a raw pointer to an internal QByteArray, but that
	// doesn't work when QByteArray is deleted
	// QDataStream
	if p.ParameterType == "QByteArray" && p.Pointer && !isReturnType {
		return cpp2c.ErrTooComplex
	}

	if (p.ParameterType == "QFormLayout::ItemRole" || p.ParameterType == "ItemRole") && p.Pointer && !isReturnType { // Out-parameters in QFormLayout
		return cpp2c.ErrTooComplex
	}

	if p.Pointer && p.PointerCount >= 2 { // Out-parameters
		if p.ParameterType != "char" {
			return cpp2c.ErrTooComplex // e.g. QGraphicsItem_IsBlockedByModalPanel1
		}
		if p.ParameterType == "char" && p.ParameterName == "xpm" {
			// Array parameters:
			// - QPixmap and QImage ctors from an xpm char*[]
			// TODO support these
			return cpp2c.ErrTooComplex
		}
	}

	switch p.ParameterType {
	case
		"QPolygon", "QPolygonF", // QPolygon extends a template type
		"QGenericMatrix", "QMatrix3x3", // extends a template type
		"QLatin1String", "QStringView", // e.g. QColor constructors and QColor::SetNamedColor() overloads. These are usually optional alternatives to QString
		"QLatin1StringView", // Qt 6 - used in qanystringview
		// REMOVED: "QUtf8StringView" - causes symbol conflict with Qt headers
		"QStringRef",                      // e.g. QLocale::toLongLong and similar overloads. As above
		"qfloat16",                        // e.g. QDataStream - there is no such half-float type in C or Go
		"char16_t",                        // e.g. QChar() constructor overload, just unnecessary
		"char32_t",                        // e.g. QDebug().operator<< overload, unnecessary
		"wchar_t",                         // e.g. qstringview.h overloads, unnecessary
		"FILE",                            // e.g. qfile.h constructors
		"sockaddr",                        // Qt network Qhostaddress. Should be possible to make this work but may be platform-specific
		"qInternalCallback",               // e.g. qnamespace.h
		"QGraphicsEffectSource",           // e.g. used by qgraphicseffect.h, but the definition is in ????
		"QXmlStreamEntityDeclarations",    // e.g. qxmlstream.h. The class definition was blacklisted for ???? reason so don't allow it as a parameter either
		"QXmlStreamNamespaceDeclarations", // e.g. qxmlstream.h. As above
		"QXmlStreamNotationDeclarations",  // e.g. qxmlstream.h. As above
		"QXmlStreamAttributes",            // e.g. qxmlstream.h
		"LineLayout::ValidLevel",          // ..
		"QtMsgType",                       // e.g. qdebug.h TODO Defined in qlogging.h, but omitted because it's predefined in qglobal.h, and our clangexec is too agressive
		"QTextStreamFunction",             // e.g. qdebug.h
		"QFactoryInterface",               // qfactoryinterface.h
		"QTextEngine",                     // used by qtextlayout.h, also blocked in ImportHeaderForClass above
		"QVulkanInstance",                 // e.g. qwindow.h. Not tackling vulkan yet
		"QPlatformNativeInterface",        // e.g. QGuiApplication::platformNativeInterface(). Private type, could probably expose as uintptr. n.b. Changes in Qt6
		"QPlatformBackingStore",           // e.g. qbackingstore.h, as below
		"QPlatformMenuBar",                // e.g. qfutureinterface.h, as below
		"QPlatformOffscreenSurface",       // e.g. qoffscreensurface.h, as below
		"QPlatformPixmap",                 // e.g. qpixmap.h. as below
		"QPlatformScreen",                 // e.g. qscreen.h. as below
		"QPlatformWindow",                 // e.g. qwindow.h, as below
		"QPlatformSurface",                // e.g. qsurface.h. as below
		"QPlatformMenu",                   // e.g. QMenu_PlatformMenu. Defined in the QPA, could probably expose as uintptr
		"QPlatformMediaCaptureSession",    // Qt 6 Multimedia qmediacapturesession.h
		"QPlatformMediaRecorder",          // Qt 6 Multimedia qmediarecorder.h
		"QPlatformVideoSink",              // Qt 6 Multimedia qvideosink.h
		"QTextDocument::ResourceProvider", // Qt 6 typedef for unsupported std::function<QVariant(const QUrl&)>
		"QTransform::Affine",              // Qt 6 qtransform.h - public method returning private type
		"QAbstractAudioBuffer",            // Qt 5 Multimedia, this is a private/internal type only
		"QAbstractVideoBuffer",            // Works in Qt 5, but in Qt 6 Multimedia this type is used in qvideoframe.h but is not defined anywhere (it was later added in Qt 6.8)
		"QRhi",                            // Qt 6 unstable types, used in Multimedia
		"QPostEventList",                  // Qt QCoreApplication: private headers required
		"QMetaCallEvent",                  // ..
		"QPostEvent",                      // ..
		"QWebFrameAdapter",                // Qt 5 Webkit: Used by e.g. qwebframe.h but never defined anywhere
		"QWebPageAdapter",                 // ...
		"QQmlWebChannelAttached",          // Qt 5 qqmlwebchannel.h. Need to add QML support for this to work
		"QDynamicMetaObjectData",          // Qt 6 qobject.h
		"QPropertyDelayedNotifications",   // Qt 6 qbindingstorage.h
		"EventType",                       // Qt 5 ScintillaEdit.h, this type is not properly resolved
		"QDesignerDialogGuiInterface",     // Qt Designer
		"QDesignerIntrospectionInterface", // Qt Designer
		"QDesignerPluginManager",          // Qt Designer
		"QResourceBuilder",                // Qt Designer
		"QTextBuilder",                    // Qt Designer
		"QtGradientManager",               // Qt Designer
		"QtResourceModel",                 // Qt Designer
		"QtResourceSet",                   // Qt Designer
		"QDesignerCustomWidgetInterface",  // Qt Designer, broken typedef that would be nice to unblock
		// Ambiguous bare enum names - qualified versions exist
		"Status",
		"OpenMode",
		"CheckIndexOptions",
		"NumberFlags",
		"Language",
		"Territory",
		"Country",
		"Script",
		"FormatType",
		"Type",
		"____last____":
		return cpp2c.ErrTooComplex
	}

	// Should be OK
	return nil
}

// ApplyQuirks adds flags to methods that require special handling.
// This is evaluated early, before optional arguments are expanded.
func applyQuirks(packageName, className string, mm *cpp2c.CppMethod) {
	if mm.ReturnType.GetQtCppType().ParameterType == "Q_PID" {
		// int64 on Linux, _PROCESS_INFORMATION* on Windows
		mm.RequireCpp = cpp2c.Addr("defined(Q_OS_LINUX)")
		mm.RequireGOOS = cpp2c.Addr("linux")
	}

	if mm.ReturnType.GetQtCppType().ParameterType == "QSocketDescriptor::DescriptorType" ||
		(len(mm.Parameters) > 0 && mm.Parameters[0].GetQtCppType().ParameterType == "QSocketDescriptor::DescriptorType") {
		// uintptr_t-compatible on Linux, void* on Windows
		mm.RequireCpp = cpp2c.Addr("defined(Q_OS_LINUX)")
		mm.RequireGOOS = cpp2c.Addr("linux")
	}

	// macOS Brew does not have Qt6Network dtls functionality enabled, but we
	// want these functions to exist on other platforms
	// Can't block in Go-side
	if (packageName == "qt6/network" || packageName == "qt/network") &&
		className == "QSslConfiguration" &&
		(mm.MethodName == "dtlsCookieVerificationEnabled" || mm.MethodName == "setDtlsCookieVerificationEnabled" || mm.MethodName == "defaultDtlsConfiguration" || mm.MethodName == "setDefaultDtlsConfiguration") {
		mm.RequireCpp = cpp2c.Addr("QT_CONFIG(dtls)")
	}

	if className == "QFileDialog" && mm.MethodName == "saveFileContent" && mm.IsStatic && len(mm.Parameters) > 1 {
		// The prototype was changed from
		// [Qt 5 - 6.6] void QFileDialog::saveFileContent(const QByteArray &fileContent, const QString &fileNameHint = QString())
		// [Qt 6.7]     void QFileDialog::saveFileContent(const QByteArray &fileContent, const QString &fileNameHint, QWidget *parent = nullptr)
		// The 2nd parameter is no longer optional
		// As a compromise, make it non-optional everywhere
		mm.Parameters[1].Optional = false
	}
}

func getPureVirtualDefaults(className string) []cpp2c.PureVirtualDefault {
	defaults := map[string][]cpp2c.PureVirtualDefault{
		"QQuickFramebufferObject": {
			{ReturnType: "Renderer*", MethodSig: "createRenderer() const", Body: "return nullptr;"},
		},
		"QSGRenderNode": {
			{ReturnType: "void", MethodSig: "render(const RenderState*)", Body: ""},
		},
		"QAbstractNativeEventFilter": {
			{ReturnType: "bool", MethodSig: "nativeEventFilter(const QByteArray& , void* , qintptr* )", Body: "return false;"},
		},
		"QStyle": {
			{ReturnType: "void", MethodSig: "drawPrimitive(PrimitiveElement, const QStyleOption*, QPainter*, const QWidget*) const", Body: ""},
			{ReturnType: "void", MethodSig: "drawControl(ControlElement, const QStyleOption*, QPainter*, const QWidget*) const", Body: ""},
			{ReturnType: "QRect", MethodSig: "subElementRect(SubElement, const QStyleOption*, const QWidget*) const", Body: "return QRect();"},
			{ReturnType: "void", MethodSig: "drawComplexControl(ComplexControl, const QStyleOptionComplex*, QPainter*, const QWidget*) const", Body: ""},
			{ReturnType: "SubControl", MethodSig: "hitTestComplexControl(ComplexControl, const QStyleOptionComplex*, const QPoint&, const QWidget*) const", Body: "return SC_None;"},
			{ReturnType: "QRect", MethodSig: "subControlRect(ComplexControl, const QStyleOptionComplex*, SubControl, const QWidget*) const", Body: "return QRect();"},
			{ReturnType: "int", MethodSig: "pixelMetric(PixelMetric, const QStyleOption*, const QWidget*) const", Body: "return 0;"},
			{ReturnType: "QSize", MethodSig: "sizeFromContents(ContentsType, const QStyleOption*, const QSize&, const QWidget*) const", Body: "return QSize();"},
			{ReturnType: "int", MethodSig: "styleHint(StyleHint, const QStyleOption*, const QWidget*, QStyleHintReturn*) const", Body: "return 0;"},
			{ReturnType: "QPixmap", MethodSig: "standardPixmap(StandardPixmap, const QStyleOption*, const QWidget*) const", Body: "return QPixmap();"},
			{ReturnType: "QIcon", MethodSig: "standardIcon(StandardPixmap, const QStyleOption*, const QWidget*) const", Body: "return QIcon();"},
		},
		"QAbstractItemView": {
			{ReturnType: "void", MethodSig: "scrollTo(const QModelIndex&, QAbstractItemView::ScrollHint)", Body: ""},
			{ReturnType: "QModelIndex", MethodSig: "moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)", Body: "return QModelIndex();"},
		},
		"QGestureRecognizer": {
			{ReturnType: "QGestureRecognizer::Result", MethodSig: "recognize(QGesture*, QObject*, QEvent*)", Body: "return QGestureRecognizer::Result();"},
		},
		"QImageIOPlugin": {
			{ReturnType: "Capabilities", MethodSig: "capabilities(QIODevice*, const QByteArray&) const", Body: "return Capabilities();"},
		},
		"QValidator": {
			{ReturnType: "State", MethodSig: "validate(QString&, int&) const", Body: "return Invalid;"},
		},
	}
	if d, ok := defaults[className]; ok {
		return d
	}
	return nil
}
