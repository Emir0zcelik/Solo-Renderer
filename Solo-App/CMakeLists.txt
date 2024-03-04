project(Solo-App)

set(CMAKE_PREFIX_PATH "C:/Dev/vcpkg/installed/x64-windows")

add_executable(SoloApp
    "src/SoloApp.cpp" "src/SoloApp.h"
    "src/Test/Test.h"
    "src/Test/TestMainMenu.cpp" "src/Test/TestMainMenu.h"
    "src/Test/TestSampleScene.cpp" "src/Test/TestSampleScene.h"
)

target_include_directories(SoloApp PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/Solo-Core/src"
)

find_package(imgui CONFIG REQUIRED)

target_link_libraries(SoloApp PRIVATE Solo-Core imgui::imgui)

