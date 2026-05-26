package gen

import (
	"strings"
	"testing"

	"github.com/ddkwork/bindgen/cpp2c"
)

func TestChildClassesExtract(t *testing.T) {
	src := cpp2c.CppParsedHeader{
		Classes: []cpp2c.CppClass{
			{
				ClassName: "Parent",
				ChildClassdefs: []cpp2c.CppClass{
					{
						ClassName: "Parent::Child",
						ChildClassdefs: []cpp2c.CppClass{
							{
								ClassName: "Parent::Child::Grandchild",
							},
						},
					},
				},
			},
		},
	}

	cpp2c.AstTransformChildClasses(&src)
	if len(src.Classes) != 3 {
		t.Fatal("expected 3 classes")
	}

	if src.Classes[0].ClassName != "Parent" {
		t.Fatal("expected parent class name")
	}

	if src.Classes[1].ClassName != "Parent::Child::Grandchild" {
		t.Fatal("expected grandchild class name")
	}

	if src.Classes[2].ClassName != "Parent::Child" {
		t.Fatal("expected child class name")
	}
}

func TestTransformTypedefs(t *testing.T) {
	makeTest := func(typeName string) cpp2c.CppParsedHeader {
		return cpp2c.CppParsedHeader{
			Classes: []cpp2c.CppClass{
				{
					ClassName: "QTestClass",
					Ctors: []cpp2c.CppMethod{
						{
							Parameters: []cpp2c.CppParameter{
								cpp2c.ParseSingleTypeString(typeName),
							},
							IsStatic: true,
						},
					},
				},
			},
		}
	}

	runTest := func(check string, expect string) {
		parsed := makeTest(check)
		cpp2c.AstTransformTypedefs(&parsed)
		resultP := parsed.Classes[0].Ctors[0].Parameters[0]
		got := resultP.ParameterType
		if resultP.Const {
			got = "const " + got
		}
		if resultP.Pointer {
			got += strings.Repeat("*", resultP.PointerCount)
		}
		if resultP.ByRef {
			got += "&"
		}
		if got != expect {
			t.Errorf("Transform of %q got %q, expected %q", check, got, expect)
		}
	}

	setupTestFilter()
	cpp2c.KnownTypedefs.Set("WId", cpp2c.LookupResultTypedef{"qt", cpp2c.CppTypedef{"WId", cpp2c.ParseSingleTypeString("uintptr_t")}})

	runTest("WId", "uintptr_t")
	runTest("QList<WId>", "QList<uintptr_t>")
	runTest("QStringList", "QList<QString>")
	runTest("QVector<WId>", "QVector<uintptr_t>")

	cpp2c.KnownTypedefs.Set("_test_known_typedef_recursion", cpp2c.LookupResultTypedef{"qt", cpp2c.CppTypedef{"_test_known_typedef_recursion", cpp2c.ParseSingleTypeString("WId")}})
	runTest("_test_known_typedef_recursion", "uintptr_t")

	runTest("WId*", "uintptr_t*")
	runTest("QVector<WId*>", "QVector<uintptr_t*>")
	runTest("const QVector<WId*>", "const QVector<uintptr_t*>")

	cpp2c.KnownTypedefs.Set("_test_iterator", cpp2c.LookupResultTypedef{"qt", cpp2c.CppTypedef{"_test_iterator", cpp2c.ParseSingleTypeString("char*")}})
	runTest("_test_iterator", "char*")
}
