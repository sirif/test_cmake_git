cmake_minimum_required(VERSION 3.1.0)

project(test_cmake_git)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(main_widget)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)

set(SOURCES
    main.cpp
    .gitignore
    readme.txt
)

add_executable(test_cmake_git ${SOURCES})


target_link_libraries(test_cmake_git main_widget)
target_link_libraries(test_cmake_git Qt5::Widgets)
target_link_libraries(test_cmake_git Qt5::Core)

