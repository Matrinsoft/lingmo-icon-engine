cmake_minimum_required(VERSION 3.20)

project(lingmo-icon-engine VERSION 1.0.0 DESCRIPTION "Lingmo Icon Engine" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui)

add_library(lingmo-icon-engine MODULE
    src/main.cpp
)

target_link_libraries(lingmo-icon-engine PRIVATE
    Qt6::Core
    Qt6::Gui
)

install(TARGETS lingmo-icon-engine
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/qt6/plugins/iconengines
)
