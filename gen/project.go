package gen

import (
	"fmt"
	"os"
	"path/filepath"
	"strings"
	"sync"

	"github.com/ddkwork/bindgen/cpp2c"
)

var Qt6Project = cpp2c.ProjectConfig{
	Name:              "qt6",
	SourceDir:         `cabi`,
	OutputCppDir:      `cabi`,
	OutputCabiDir:     `cabi`,
	CacheDir:          `./cabi/cachedir`,
	GenerateCMake:     generateCMakeListsQt6,
	GenerateAuxiliary: generateAuxiliaryQt6,
	Emit: cpp2c.EmitConfig{
		SkipEnumGeneration: true,
	},
}

func RunQt6(testMode bool) {
	cpp2c.SetActiveFilter(NewQtFilter())
	outDir := `cabi`
	qtIncludeDir := filepath.Join(QtStaticDir, "include")
	entries, err := os.ReadDir(qtIncludeDir)
	if err != nil {
		panic(fmt.Sprintf("Failed to read Qt include dir: %v", err))
	}

	testModules := map[string]bool{"QtCore": true, "QtGui": true, "QtWidgets": true}

	var modules []string
	for _, e := range entries {
		if !e.IsDir() {
			continue
		}
		modName := e.Name()
		if testMode && !testModules[modName] {
			continue
		}
		umbrellaPath := filepath.Join(qtIncludeDir, modName, modName)
		if _, err := os.Stat(umbrellaPath); err != nil {
			continue
		}
		modules = append(modules, modName)
	}

	cpp2c.CacheDir = Qt6Project.CacheDir
	cpp2c.ClearFilteredCache(Qt6Project.CacheDir)

	cpp2c.ResetGeneratedClasses()

	var wg sync.WaitGroup
	for _, mod := range modules {
		wg.Add(1)
		go func(mod string) {
			defer wg.Done()
			defer func() {
				if r := recover(); r != nil {
					panic(r)
				}
			}()
			umbrellaPath := filepath.Join(qtIncludeDir, mod, mod)
			ProcessModule("qt6", outDir, umbrellaPath)
		}(mod)
	}
	wg.Wait()

	if Qt6Project.GenerateCMake != nil {
		Qt6Project.GenerateCMake(outDir, "qt6")
	}

	cpp2c.RunBuild(outDir, "qt6_bindings.dll")
}

func generateCMakeListsQt6(outDir, packageName string) {
	cmakePath := filepath.Join(outDir, "CMakeLists.txt")
	generateAuxiliaryQt6(outDir)

	var sb strings.Builder
	sb.WriteString(`cmake_minimum_required(VERSION 3.16)
include("C:/Program Files/CMake/bin/ewdk.cmake")

project(` + packageName + `_bindings C CXX)

file(GLOB MIQT_GEN_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/gen_*.cpp)

um_dll(` + packageName + `_bindings
    ${CMAKE_CURRENT_SOURCE_DIR}/cflags_windowsqtstatic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/sync_stubs.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/qt_version_tag_stub.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/gen_callback_stubs.cpp
    ${MIQT_GEN_SOURCES}
)
`)

	if err := os.WriteFile(cmakePath, []byte(sb.String()), 0o644); err != nil {
		panic(err)
	}
	cpp2c.GenerateBuildBat(outDir)
}

func generateAuxiliaryQt6(outDir string) {
	cpp2c.GenerateCommonFiles(outDir)

	os.WriteFile(filepath.Join(outDir, "cflags_windowsqtstatic.cpp"), []byte(`#ifdef MIQT_WINDOWSQTSTATIC

#include <QtPlugin>
Q_IMPORT_PLUGIN (QWindowsIntegrationPlugin);
Q_IMPORT_PLUGIN (QModernWindowsStylePlugin);

#endif
`), 0o644)

	os.WriteFile(filepath.Join(outDir, "sync_stubs.cpp"), []byte(`#include <windows.h>
#include <synchapi.h>
#include <QWidget>
#include "miqt_export.h"

extern "C" {

BOOL WINAPI WaitOnAddress(volatile void* addr, PVOID compare, SIZE_T size, DWORD ms) {
    static auto fn = (BOOL(WINAPI*)(volatile void*, PVOID, SIZE_T, DWORD))GetProcAddress(GetModuleHandleW(L"kernel32.dll"), "WaitOnAddress");
    return fn ? fn(addr, compare, size, ms) : FALSE;
}

VOID WINAPI WakeByAddressAll(PVOID addr) {
    static auto fn = (VOID(WINAPI*)(PVOID))GetProcAddress(GetModuleHandleW(L"kernel32.dll"), "WakeByAddressAll");
    if (fn) fn(addr);
}

VOID WINAPI WakeByAddressSingle(PVOID addr) {
    static auto fn = (VOID(WINAPI*)(PVOID))GetProcAddress(GetModuleHandleW(L"kernel32.dll"), "WakeByAddressSingle");
    if (fn) fn(addr);
}

MIQT_EXPORT void MIQT_CALL QWidget_setContextMenuPolicy(QWidget* self, unsigned int policy) {
    self->setContextMenuPolicy(static_cast<Qt::ContextMenuPolicy>(policy));
}

}
`), 0o644)

	os.WriteFile(filepath.Join(outDir, "sync_stubs.h"), []byte(`#pragma once
#include "miqt_export.h"

typedef struct QWidget QWidget;

#ifdef __cplusplus
extern "C" {
#endif

MIQT_EXPORT void MIQT_CALL QWidget_setContextMenuPolicy(QWidget* self, unsigned int policy);

#ifdef __cplusplus
}
#endif
`), 0o644)

	os.WriteFile(filepath.Join(outDir, "qt_version_tag_stub.cpp"), []byte(`extern "C" {
const char qt_version_tag_6_11[] = "Qt version 6.11.0";
}
`), 0o644)
}

var QtModules = []cpp2c.QtModuleConfig{
	{ModuleName: "QtWidgets", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtWidgets", "QtWidgets")},
	{ModuleName: "QtGui", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtGui", "QtGui")},
	{ModuleName: "QtCore", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtCore", "QtCore")},
	{ModuleName: "QtMultimediaWidgets", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtMultimediaWidgets", "QtMultimediaWidgets")},
	{ModuleName: "QtQmlCompiler", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQmlCompiler", "QtQmlCompiler")},
	{ModuleName: "QtNetwork", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtNetwork", "QtNetwork")},
	{ModuleName: "QtConcurrent", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtConcurrent", "QtConcurrent")},
	{ModuleName: "QtDBus", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtDBus", "QtDBus")},
	{ModuleName: "QtOpenGL", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtOpenGL", "QtOpenGL")},
	{ModuleName: "QtOpenGLWidgets", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtOpenGLWidgets", "QtOpenGLWidgets")},
	{ModuleName: "QtPrintSupport", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtPrintSupport", "QtPrintSupport")},
	{ModuleName: "QtSql", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtSql", "QtSql")},
	{ModuleName: "QtSvg", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtSvg", "QtSvg")},
	{ModuleName: "QtSvgWidgets", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtSvgWidgets", "QtSvgWidgets")},
	{ModuleName: "QtXml", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtXml", "QtXml")},
	{ModuleName: "QtMultimedia", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtMultimedia", "QtMultimedia")},
	{ModuleName: "QtSpatialAudio", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtSpatialAudio", "QtSpatialAudio")},
	{ModuleName: "QtTools", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtTools", "QtTools")},
	{ModuleName: "QtUiTools", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtUiTools", "QtUiTools")},
	{ModuleName: "QtShaderTools", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtShaderTools", "QtShaderTools")},
	{ModuleName: "QtQml", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQml", "QtQml")},
	{ModuleName: "QtQmlModels", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQmlModels", "QtQmlModels")},
	{ModuleName: "QtQuick", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQuick", "QtQuick")},
	{ModuleName: "QtQuickWidgets", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQuickWidgets", "QtQuickWidgets")},
	{ModuleName: "QtQuickControls2", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQuickControls2", "QtQuickControls2")},
	{ModuleName: "QtQuickLayouts", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQuickLayouts", "QtQuickLayouts")},
	{ModuleName: "QtQuickTemplates2", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQuickTemplates2", "QtQuickTemplates2")},
	{ModuleName: "QtQuickDialogs2", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQuickDialogs2", "QtQuickDialogs2")},
	{ModuleName: "QtQuickShapes", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQuickShapes", "QtQuickShapes")},
	{ModuleName: "QtQuickParticles", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtQuickParticles", "QtQuickParticles")},
	{ModuleName: "QtLabsAnimation", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtLabsAnimation", "QtLabsAnimation")},
	{ModuleName: "QtLabsFolderListModel", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtLabsFolderListModel", "QtLabsFolderListModel")},
	{ModuleName: "QtLabsPlatform", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtLabsPlatform", "QtLabsPlatform")},
	{ModuleName: "QtLabsQmlModels", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtLabsQmlModels", "QtLabsQmlModels")},
	{ModuleName: "QtLabsSettings", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtLabsSettings", "QtLabsSettings")},
	{ModuleName: "QtLabsSharedImage", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtLabsSharedImage", "QtLabsSharedImage")},
	{ModuleName: "QtLabsStyleKit", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtLabsStyleKit", "QtLabsStyleKit")},
	{ModuleName: "QtLabsWavefrontMesh", UmbrellaPath: filepath.Join(QtStaticDir, "include", "QtLabsWavefrontMesh", "QtLabsWavefrontMesh")},
}
