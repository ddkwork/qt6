package gen

import (
	"strings"
	"testing"

	"github.com/ddkwork/bindgen/c2go"
	"github.com/ddkwork/bindgen/cpp2c"
	"github.com/ddkwork/golibrary/std/stream"
)

func TestGenerate(t *testing.T) {
	RunQt6(true)
	headersDir := "cabi"
	c2go.Generate(t, []c2go.BindgenConfig{{
		HeadersDir:  headersDir,
		OutputDir:   "../",
		PackageName: "qt6",
		HeaderOrder: append([]string{
			"libmiqt.h",
			"miqt_export.h",
			"sync_stubs.h",
		}, cpp2c.CollectGenCabiHeaders(headersDir)...),
		Predefined: `
#include <stddef.h>
#include <stdint.h>
#define MIQT_EXPORT
#define MIQT_CALL
`,
		BindDll: true,
		DllName: "qt6_bindings.dll",
		DllFuncFilter: func(name string) bool {
			if !strings.HasPrefix(name, "Q") {
				return false
			}
			className, _, _ := strings.Cut(name, "_")
			return WidgetNeededClasses(className)
		},
	})
}

func TestRunBinDll(t *testing.T) {
	headersDir := "cabi"
	c2go.Generate(t, []c2go.BindgenConfig{{
		HeadersDir:  headersDir,
		OutputDir:   "../",
		PackageName: "qt6",
		HeaderOrder: append([]string{
			"libmiqt.h",
			"miqt_export.h",
			"sync_stubs.h",
		}, cpp2c.CollectGenCabiHeaders(headersDir)...),
		Predefined: `
#include <stddef.h>
#include <stdint.h>
#define MIQT_EXPORT
#define MIQT_CALL
`,
		BindDll: true,
		DllName: "qt6_bindings.dll",
		DllFuncFilter: func(name string) bool {
			if !strings.HasPrefix(name, "Q") {
				return false
			}
			className, _, _ := strings.Cut(name, "_")
			return WidgetNeededClasses(className)
		},
	})
}

func TestRunBuild(t *testing.T) {
	stream.RunCommandWithDir("cabi", "cmd", "/c", "build.bat")
}
