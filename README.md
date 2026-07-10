# lingmo-icon-engine

Qt icon engine plugin.

## Capabilities

LingmoIconEngine (QIconEnginePlugin for Lingmo icon theme)

## Build

`ash
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
make -j\
`

## CMake Usage

`cmake
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(LingmoSdk REQUIRED COMPONENTS Icon-engine)
`

## Dependencies

- Qt6 >= 6.5
- C++20
