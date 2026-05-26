# qt6-go

Go bindings for [Qt 6](https://www.qt.io/) — 纯 Go 实现，无 CGo。

## 特性

- **零 CGo 依赖**：通过 `embed` + `syscall` 加载预编译 DLL，无需 C 编译器
- **Qt 静态链接**：绑定 DLL 静态链接 Qt，运行时无需 Qt 安装
- **三大模块覆盖**：QtCore、QtGui、QtWidgets 完整绑定
- **Widgets Gallery**：50+ 控件卡片式示例

## 架构

```
qt6_bindings.dll    ← 预编译 C ABI 封装层（embed 到 Go 二进制中）
        ↓
dll.go              ← embed DLL + syscall.LazyDLL 动态加载
libmiqt.go          ← miqt 基础类型（miqt_string, miqt_array, miqt_map）
QtCore.go           ← QtCore 绑定（自动生成）
QtGui.go            ← QtGui 绑定（自动生成）
QtWidgets.go        ← QtWidgets 绑定（自动生成）
sync_stubs.go       ← 手写补充绑定
example/
  widgets_gallery.go    ← 全控件 Gallery 示例
  widgets/              ← 50+ 控件卡片组件
gen/                ← 绑定代码生成器（cpp2c + clang）
```

## 无 CGo 原理

1. **Qt C++ 库**：通过 [MIQT](https://github.com/mappu/miqt) 风格 C ABI 封装，编译为 `qt6_bindings.dll`
2. **DLL 加载**：`//go:embed` 嵌入 Go 二进制，运行时释放到缓存目录，`windows.LazyDLL` 加载
3. **函数调用**：所有 Qt 方法通过 `syscall` 调用 DLL 导出函数，无需 CGo

整个工具链：`Go 编译 → 单个 .exe`，不需要 MinGW/MSVC/CGo/Qt 安装。

## 使用

```bash
cd example
go run .
```

## 绑定生成

```bash
cd gen
go test -run TestRunQt6
```

基于 [bindgen](../../) 的 cpp2c 管线：Clang 解析 Qt 头文件 → C ABI 封装 → Go 绑定代码。

## 依赖

- Go 1.26+
- Windows (x64)
- `golang.org/x/sys/windows`
