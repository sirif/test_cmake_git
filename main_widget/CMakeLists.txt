cmake_minimum_required(VERSION 3.1.0)

project(main_widget)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)


set(SOURCES mainwidget.h mainwidget.cpp mainwidget.ui)

add_library(main_widget ${SOURCES})

target_link_libraries(main_widget Qt5::Widgets)

