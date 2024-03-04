# Solo Renderer

Solo Renderer is a C++ and OpenGL based project that separates its structure into two main components: Solo-Core and Solo-App. The Solo-Core represents the stable core scripts of the project, while Solo-App serves as a template for incorporating the project into other applications.

## Getting Started

Follow these steps to build and run the Solo Renderer project:

## Prerequisites

Before you begin, make sure you have the following installed:

- [CMake](https://cmake.org/)
- [MsBuild](https://visualstudio.microsoft.com/visual-cpp-build-tools/)
- [vcpkg](https://vcpkg.io/en/)

## Build Steps

### rescan.bat:

```cmake -B .\build\```

### build.bat:

```MsBuild.exe .\build\Solo.sln```

### run.bat:

```build\Solo-App\Debug\SoloApp.exe```

#### All-in-One Build

After the initial build, you can use the following script to perform all steps in one go:

### all.bat:

rescan.bat && build.bat && run.bat

## Additional Dependencies

Make sure to install any additional dependencies specified in the project documentation.

## Project Hierarchy

The project is structured into two main components:

**Solo-Core:** Contains the stable core scripts of the project.

**Solo-App:** Serves as a template for other projects using Solo Renderer.

## User Interface

Upon launching the application, you'll encounter the following buttons:

![259998536-30bb27fd-a8c9-4e59-b77b-f344ebf4a662](https://github.com/Emir0zcelik/Solo-Renderer/assets/86933017/9ddf7f1f-3b3e-40b0-bfdc-c797cab0166d)

**Sample Scene:** Takes you to the scene where shaders are implemented.

**Exit:** Directly exits the application.

### Sample Scene

![260000304-407c9bc4-c9cd-410c-98fe-3f55136d5091](https://github.com/Emir0zcelik/Solo-Renderer/assets/86933017/1a70da51-2efa-4e73-af4d-49b3596906b7)

In the Sample Scene, you'll find:

- **Screen View:** Visual representation of the scene.

- **Console Output:** Output console for relevant information.

- **Properties Panel:** Allows you to dynamically change variables during runtime.

## 3rd Party Libraries

 - [Dear ImGui](https://github.com/ocornut/imgui)
 - [GLFW](https://github.com/glfw/glfw)
 - [GLAD](https://github.com/Dav1dde/glad)
 - [GLM](https://github.com/g-truc/glm) 


## Notes

CMake is used in conjunction with vcpkg. Make sure to configure vcpkg according to project needs.

Feel free to explore and modify Solo Renderer for your own projects!
