package gen

import (
	"testing"

	"github.com/ddkwork/bindgen/cpp2c"
)

func TestQtFilterAllowClass(t *testing.T) {
	filter := NewQtFilter()

	tests := []struct {
		name      string
		className string
		expected  bool
	}{
		{"QObject", "QObject", true},
		{"QString", "QString", true},
		{"QWidget", "QWidget", true},
		{"QAbstractButton", "QAbstractButton", true},
		{"std::string", "std::string", false},
		{"std::vector", "std::vector", false},
		{"QLalala", "QLalala", false},
		{"QCustomType", "QCustomType", false},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result := filter.AllowClass(tt.className)
			if result != tt.expected {
				t.Errorf("AllowClass(%q) = %v, want %v", tt.className, result, tt.expected)
			}
		})
	}
}

func TestQtFilterAllowFreeFunction(t *testing.T) {
	filter := NewQtFilter()

	tests := []struct {
		name    string
		fn      cpp2c.CppFreeFunction
		wantErr bool
	}{
		{
			name: "qt_ prefix function",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "qt_assert",
			},
			wantErr: true,
		},
		{
			name: "qt_getEnumMetaObject",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "qt_getEnumMetaObject",
			},
			wantErr: true,
		},
		{
			name: "qBadAlloc",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "qBadAlloc",
			},
			wantErr: true,
		},
		{
			name: "qSNaN",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "qSNaN",
			},
			wantErr: true,
		},
		{
			name: "qInf",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "qInf",
			},
			wantErr: true,
		},
		{
			name: "qInstallMessageHandler",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "qInstallMessageHandler",
			},
			wantErr: true,
		},
		{
			name: "qgetenv",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "qgetenv",
			},
			wantErr: true,
		},
		{
			name: "normal function",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "qDebug",
			},
			wantErr: false,
		},
		{
			name: "function with void pointer",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "someFunc",
				Parameters: []cpp2c.CppParameter{
					{ParameterType: "void", Pointer: true},
				},
			},
			wantErr: true,
		},
		{
			name: "function with callback parameter",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "someFunc",
				Parameters: []cpp2c.CppParameter{
					{ParameterType: "int", ParameterName: "callback"},
				},
			},
			wantErr: true,
		},
		{
			name: "variadic function",
			fn: cpp2c.CppFreeFunction{
				FunctionName: "someFunc",
				Parameters: []cpp2c.CppParameter{
					{ParameterType: "..."},
				},
			},
			wantErr: true,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			err := filter.AllowFreeFunction(tt.fn)
			if (err != nil) != tt.wantErr {
				t.Errorf("AllowFreeFunction(%q) error = %v, wantErr %v", tt.fn.FunctionName, err, tt.wantErr)
			}
		})
	}
}

func TestQtFilterAllowMethod(t *testing.T) {
	filter := NewQtFilter()

	tests := []struct {
		name      string
		className string
		method    cpp2c.CppMethod
		wantErr   bool
	}{
		{
			name:      "normal method",
			className: "QObject",
			method: cpp2c.CppMethod{
				MethodName: "objectName",
			},
			wantErr: false,
		},
		{
			name:      "operator method",
			className: "QObject",
			method: cpp2c.CppMethod{
				MethodName: "operator=",
			},
			wantErr: true,
		},
		{
			name:      "internal method",
			className: "QObject",
			method: cpp2c.CppMethod{
				MethodName: "d_func",
			},
			wantErr: true,
		},
		{
			name:      "data_ptr method",
			className: "QObject",
			method: cpp2c.CppMethod{
				MethodName: "data_ptr",
			},
			wantErr: true,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			err := filter.AllowMethod(tt.className, tt.method)
			if (err != nil) != tt.wantErr {
				t.Errorf("AllowMethod(%q.%q) error = %v, wantErr %v", tt.className, tt.method.MethodName, err, tt.wantErr)
			}
		})
	}
}

func TestQtFilterAllowSignal(t *testing.T) {
	filter := NewQtFilter()

	tests := []struct {
		name     string
		method   cpp2c.CppMethod
		expected bool
	}{
		{
			name: "normal signal",
			method: cpp2c.CppMethod{
				MethodName: "clicked",
				IsSignal:   true,
				ReturnType: cpp2c.CppParameter{ParameterType: "void"},
			},
			expected: true,
		},
		{
			name: "destroyed signal",
			method: cpp2c.CppMethod{
				MethodName: "destroyed",
				IsSignal:   true,
				ReturnType: cpp2c.CppParameter{ParameterType: "void"},
			},
			expected: true,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result := filter.AllowSignal(tt.method)
			if result != tt.expected {
				t.Errorf("AllowSignal(%q) = %v, want %v", tt.method.MethodName, result, tt.expected)
			}
		})
	}
}

func TestQtFilterAllowVirtual(t *testing.T) {
	filter := NewQtFilter()

	tests := []struct {
		name     string
		method   cpp2c.CppMethod
		expected bool
	}{
		{
			name: "normal virtual",
			method: cpp2c.CppMethod{
				MethodName: "paintEvent",
				IsVirtual:  true,
			},
			expected: true,
		},
		{
			name: "private virtual",
			method: cpp2c.CppMethod{
				MethodName:  "connectNotify",
				IsVirtual:   true,
				IsProtected: true,
			},
			expected: false,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result := filter.AllowVirtual(tt.method)
			if result != tt.expected {
				t.Errorf("AllowVirtual(%q) = %v, want %v", tt.method.MethodName, result, tt.expected)
			}
		})
	}
}

func TestQtFilterAllowVirtualForClass(t *testing.T) {
	filter := NewQtFilter()

	tests := []struct {
		name      string
		className string
		expected  bool
	}{
		{"QObject", "QObject", true},
		{"QWidget", "QWidget", true},
		{"QListWidgetItem", "QListWidgetItem", false},
		{"QTableWidgetItem", "QTableWidgetItem", false},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result := filter.AllowVirtualForClass(tt.className)
			if result != tt.expected {
				t.Errorf("AllowVirtualForClass(%q) = %v, want %v", tt.className, result, tt.expected)
			}
		})
	}
}

func TestQtFilterAllowCtor(t *testing.T) {
	filter := NewQtFilter()

	tests := []struct {
		name      string
		className string
		method    cpp2c.CppMethod
		expected  bool
	}{
		{
			name:      "normal constructor",
			className: "QObject",
			method: cpp2c.CppMethod{
				MethodName: "QObject",
			},
			expected: true,
		},
		{
			name:      "copy constructor",
			className: "QObject",
			method: cpp2c.CppMethod{
				MethodName: "QObject",
				Parameters: []cpp2c.CppParameter{
					{ParameterType: "QObject", ParameterName: "other"},
				},
			},
			expected: false,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result := filter.AllowCtor(tt.className, tt.method)
			if result != tt.expected {
				t.Errorf("AllowCtor(%q) = %v, want %v", tt.className, result, tt.expected)
			}
		})
	}
}
