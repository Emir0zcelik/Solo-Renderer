project(Solo-App)

add_executable(SoloApp
    "src/SoloApp.cpp"
)

target_include_directories(SoloApp PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/Solo-Core/src"
)

target_link_libraries(SoloApp PRIVATE Solo-Core)