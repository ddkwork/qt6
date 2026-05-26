package gen

import (
	"reflect"
	"testing"

	"github.com/ddkwork/bindgen/cpp2c"
)

func TestParseMethodTypes(t *testing.T) {
	type testCase struct {
		input          string
		expectReturn   cpp2c.CppParameter
		expectParams   []cpp2c.CppParameter
		expectNoexcept string
		expectErr      bool
	}

	cases := []testCase{
		{
			input:        "void (bool)",
			expectReturn: cpp2c.CppParameter{ParameterType: "void"},
			expectParams: []cpp2c.CppParameter{
				{ParameterType: "bool"},
			},
		},
		{
			input:        "bool (QList<QPair<Foo, Bar>>, QString)",
			expectReturn: cpp2c.CppParameter{ParameterType: "bool"},
			expectParams: []cpp2c.CppParameter{
				{ParameterType: "QList<QPair<Foo, Bar>>"},
				{ParameterType: "QString"},
			},
			// expectErr: true,
		},
		{
			input:        "bool (QList<QWidget*>)",
			expectReturn: cpp2c.CppParameter{ParameterType: "bool"},
			expectParams: []cpp2c.CppParameter{
				{ParameterType: "QList<QWidget*>"},
			},
		},

		{
			input:          "void () noexcept(Data::CanBeSmall)",
			expectReturn:   cpp2c.CppParameter{ParameterType: "void"},
			expectParams:   []cpp2c.CppParameter{},
			expectNoexcept: "noexcept(Data::CanBeSmall)",
		},
	}

	for _, tc := range cases {
		r, p, _ /* isConst */, noexcept, err := cpp2c.ParseTypeString(tc.input)

		if tc.expectErr {
			if err == nil {
				t.Errorf("Test %q got error=nil but it was expected to fail", tc.input)
				continue
			}
		} else {
			if err != nil {
				t.Errorf("Test %q got error %v", tc.input, err)
				continue
			}

			if !reflect.DeepEqual(r, tc.expectReturn) {
				t.Errorf("Test %q\n-got return=%#v\n-expected  =%#v", tc.input, r, tc.expectReturn)
			}
			if !reflect.DeepEqual(p, tc.expectParams) {
				t.Errorf("Test %q\n-got params=%#v\n-expected  =%#v", tc.input, p, tc.expectParams)
			}
			if !reflect.DeepEqual(noexcept, tc.expectNoexcept) {
				t.Errorf("Test %q\n-got noexcept=%#v\n-noexcept  =%#v", tc.input, noexcept, tc.expectNoexcept)
			}
		}
	}
}

func TestParseInnerListTypes(t *testing.T) {
	l := cpp2c.ParseSingleTypeString(`QList<QWidget*>`)

	tok, containerType, ok := l.QListOf()

	if !ok {
		t.Fatal("expected QListOf")
	}

	if !tok.Pointer {
		t.Error("expected pointer")
	}

	if tok.ParameterType != "QWidget" {
		t.Errorf("expected QWidget, got %q", tok.ParameterType)
	}

	if containerType != "QList" {
		t.Errorf("expected QList, got %q", containerType)
	}
}

func TestPointerDepth(t *testing.T) {
	for _, testCase := range []string{`char**`, `char * *`} {
		l := cpp2c.ParseSingleTypeString(testCase)
		if l.ParameterType != "char" {
			t.Error("expected char")
		}
		if !l.Pointer {
			t.Error("expected pointer")
		}
		if l.PointerCount != 2 {
			t.Errorf("expected pointerCount=2, got %d", l.PointerCount)
		}
	}
}
