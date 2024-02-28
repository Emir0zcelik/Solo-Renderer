project(Solo-Core)

set(CMAKE_PREFIX_PATH "C:/Dev/vcpkg/installed/x64-windows")


add_library(Solo-Core
"src/Solo/SoloCore.cpp"
"src/Solo/SoloCore.h"
)


target_include_directories(Solo-Core PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

find_package(glad CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

target_link_libraries(Solo-Core PUBLIC glad::glad glfw glm::glm)





