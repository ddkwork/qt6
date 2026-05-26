package gen

import (
	"fmt"
	"log"
	"os"
	"path/filepath"
	"strings"

	"github.com/ddkwork/bindgen/cpp2c"
)

const (
	QtStaticDir = `d:\ux\examples\ewdk\qt_static`
)

var moduleDefines = map[string]string{
	"QtCore":                "-DQT_CORE_LIB",
	"QtGui":                 "-DQT_GUI_LIB -DQT_CORE_LIB",
	"QtWidgets":             "-DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtNetwork":             "-DQT_NETWORK_LIB -DQT_CORE_LIB",
	"QtQml":                 "-DQT_QML_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB",
	"QtQmlModels":           "-DQT_QMLMODELS_LIB -DQT_QML_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB",
	"QtQuick":               "-DQT_QUICK_LIB -DQT_QMLMODELS_LIB -DQT_QML_LIB -DQT_NETWORK_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtSql":                 "-DQT_SQL_LIB -DQT_CORE_LIB",
	"QtXml":                 "-DQT_XML_LIB -DQT_CORE_LIB",
	"QtSvg":                 "-DQT_SVG_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtSvgWidgets":          "-DQT_SVGWIDGETS_LIB -DQT_SVG_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtMultimedia":          "-DQT_MULTIMEDIA_LIB -DQT_NETWORK_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtMultimediaWidgets":   "-DQT_MULTIMEDIAWIDGETS_LIB -DQT_MULTIMEDIA_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtMultimediaQuick":     "-DQT_MULTIMEDIAQUICK_LIB -DQT_MULTIMEDIA_LIB -DQT_QUICK_LIB -DQT_QML_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtOpenGL":              "-DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtOpenGLWidgets":       "-DQT_OPENGLWIDGETS_LIB -DQT_OPENGL_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtPrintSupport":        "-DQT_PRINTSUPPORT_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtConcurrent":          "-DQT_CONCURRENT_LIB -DQT_CORE_LIB",
	"QtDBus":                "-DQT_DBUS_LIB -DQT_CORE_LIB",
	"QtSpatialAudio":        "-DQT_SPATIALAUDIO_LIB -DQT_MULTIMEDIA_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtQuickWidgets":        "-DQT_QUICKWIDGETS_LIB -DQT_QUICK_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtQuickShapes":         "-DQT_QUICKSHAPES_LIB -DQT_QUICK_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtQuickControls2":      "-DQT_QUICKCONTROLS2_LIB -DQT_QUICK_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtQuickTemplates2":     "-DQT_QUICKTEMPLATES2_LIB -DQT_QUICK_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtQmlWorkerScript":     "-DQT_QMLWORKERSCRIPT_LIB -DQT_QML_LIB -DQT_CORE_LIB",
	"QtQmlXmlListModel":     "-DQT_QMLXMLLISTMODEL_LIB -DQT_QML_LIB -DQT_CORE_LIB",
	"QtShaderTools":         "-DQT_SHADERTOOLS_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtUiTools":             "-DQT_UITOOLS_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtQuickLayouts":        "-DQT_QUICKLAYOUTS_LIB -DQT_QUICK_LIB -DQT_CORE_LIB",
	"QtQuickParticles":      "-DQT_QUICKPARTICLES_LIB -DQT_QUICK_LIB -DQT_CORE_LIB",
	"QtQuickDialogs2":       "-DQT_QUICKDIALOGS2_LIB -DQT_QUICK_LIB -DQT_CORE_LIB",
	"QtLabsAnimation":       "-DQT_LABSANIMATION_LIB -DQT_QUICK_LIB -DQT_CORE_LIB",
	"QtLabsFolderListModel": "-DQT_LABSFOLDERLISTMODEL_LIB -DQT_QML_LIB -DQT_CORE_LIB",
	"QtLabsPlatform":        "-DQT_LABSPLATFORM_LIB -DQT_GUI_LIB -DQT_CORE_LIB",
	"QtLabsQmlModels":       "-DQT_LABSQMLMODELS_LIB -DQT_QML_LIB -DQT_CORE_LIB",
	"QtLabsSettings":        "-DQT_LABSSETTINGS_LIB -DQT_QML_LIB -DQT_CORE_LIB",
	"QtLabsSharedImage":     "-DQT_LABSSHAREDIMAGE_LIB -DQT_QUICK_LIB -DQT_CORE_LIB",
	"QtLabsStyleKit":        "-DQT_LABSSTYLEKIT_LIB -DQT_CORE_LIB",
	"QtLabsWavefrontMesh":   "-DQT_LABSWAVEFRONTMESH_LIB -DQT_QUICK_LIB -DQT_CORE_LIB",
	"QtTools":               "-DQT_TOOLS_LIB -DQT_CORE_LIB",
}

var qtFeatures = []string{
	"animation", "filesystemwatcher", "processenvironment",
	"settings", "itemmodel", "proxymodel",
	"concatenatetablesproxymodel", "identityproxymodel",
	"sortfilterproxymodel", "stringlistmodel", "transposeproxymodel",
	"permissions", "mimetype", "library", "future", "thread",
	"commandlineparser", "datetimeparser", "easingcurve",
	"regularexpression", "shortcut", "textcodec", "datestring",
	"signaling_nan", "version_tagging", "std_atomic64",
	"cbor", "cborstreamreader", "cborstreamwriter",
	"jsonstreamwriter", "temporaryfile", "timezone",
	"translation", "xmlstream", "datastream",
	"hijricalendar", "islamiccivilcalendar", "jalalicalendar",
	"list", "string", "bytearray", "variant", "metatype",
	"objectmodel", "properties", "float16", "float16_compare",
	"compare_three_way",
}

// buildModuleCflags 根据模块名和 Qt static 目录结构构建 clang flags
func buildModuleCflags(moduleName string) string {
	qtIncludeBase := filepath.Join(QtStaticDir, "include")

	cflags := "--std=c++17 --target=x86_64-pc-windows-msvc -DQT_VERSION_MAJOR=6 -DQT_VERSION=0x060B00 -Wno-everything"
	cflags += " -I" + qtIncludeBase

	moduleDir := filepath.Join(qtIncludeBase, moduleName)
	cflags += " -I" + moduleDir

	versionDir := filepath.Join(moduleDir, "6.11.0")
	if _, err := os.Stat(versionDir); err == nil {
		cflags += " -I" + versionDir
		moduleVersionDir := filepath.Join(versionDir, moduleName)
		if _, err := os.Stat(moduleVersionDir); err == nil {
			cflags += " -I" + moduleVersionDir
		}
	}

	if def, ok := moduleDefines[moduleName]; ok {
		cflags += " " + def
	} else {
		macroName := strings.ToUpper(strings.ReplaceAll(moduleName, "Qt", "QT_")) + "_LIB"
		cflags += " -D" + macroName + " -DQT_CORE_LIB"
	}

	exportMacro := strings.ToUpper(strings.ReplaceAll(moduleName, "Qt", "Q_")) + "_EXPORT"
	cflags += fmt.Sprintf(" -D%s=", exportMacro)
	inlineSince := "QT_" + strings.ToUpper(moduleName) + "_INLINE_SINCE(major,minor)"
	inlineImpl := "QT_" + strings.ToUpper(moduleName) + "_INLINE_IMPL_SINCE(major,minor)"
	removedSince := "QT_" + strings.ToUpper(moduleName) + "_REMOVED_SINCE(major,minor)"
	cflags += fmt.Sprintf(" -D%s=", inlineSince)
	cflags += fmt.Sprintf(" -D%s=0", inlineImpl)
	cflags += fmt.Sprintf(" -D%s=0", removedSince)

	cflags += " -DQT_NO_CAST_FROM_ASCII -DQT_NO_CAST_TO_ASCII -DQT_NO_EXCEPTIONS -DQT_NO_DEBUG"
	cflags += " -DQT_DISABLE_DEPRECATED_UP_TO=0x0FFFF"
	cflags += " -DQT_CONFIG(feature)=1"

	for _, f := range qtFeatures {
		cflags += fmt.Sprintf(" -DQT_FEATURE_%s=1", f)
	}

	cflags += cpp2c.MsvcIncludeFlags()

	return cflags
}

// ProcessModule 绑定一个 Qt 模块。
// umbrellaPath 是模块的聚合头文件路径，例如 d:\ux\examples\ewdk\qt_static\include\QtCore\QtCore
func ProcessModule(packageName, outDir, umbrellaPath string) {
	if _, err := os.Stat(umbrellaPath); err != nil {
		log.Panicf("umbrella header not found: %s", umbrellaPath)
	}

	moduleName := filepath.Base(filepath.Dir(umbrellaPath))
	fmt.Printf("=== Processing module: %s ===\n", moduleName)
	fmt.Printf("Umbrella: %s\n", umbrellaPath)
	fmt.Printf("Output: %s\n", outDir)

	cpp2c.InsertTypedefs()

	cflagsCombined := buildModuleCflags(moduleName)

	cpp2c.Generate(
		packageName,
		[]string{umbrellaPath},
		func(string) bool { return true },
		cflagsCombined,
		outDir,
		cpp2c.ClangMatchModuleDirectory,
		Qt6Project.Emit,
	)

	log.Printf("Module %s completed", moduleName)
}
