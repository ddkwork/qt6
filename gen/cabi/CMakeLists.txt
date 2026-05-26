cmake_minimum_required(VERSION 3.16)
include("C:/Program Files/CMake/bin/ewdk.cmake")

project(qt6_bindings C CXX)

file(GLOB MIQT_GEN_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/gen_*.cpp)

um_dll(qt6_bindings
    ${CMAKE_CURRENT_SOURCE_DIR}/cflags_windowsqtstatic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/sync_stubs.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/qt_version_tag_stub.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/gen_callback_stubs.cpp
    ${MIQT_GEN_SOURCES}
)
