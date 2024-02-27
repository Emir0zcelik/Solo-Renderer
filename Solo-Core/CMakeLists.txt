project(Solo-Core)

set(CMAKE_PREFIX_PATH "C:/Dev/vcpkg/installed/x86-windows")


add_library(Solo-Core
"src/Solo/SoloCore.cpp"
"src/Solo/SoloCore.h"
)


target_include_directories(Solo-Core PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)


