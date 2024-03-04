# Solo Renderer
Solo Renderer is a C++ and OpenGL based project that separates its structure into two main components: Solo-Core and Solo-App. The Solo-Core represents the stable core scripts of the project, while Solo-App serves as a template for incorporating the project into other applications.

## Getting Started
Follow these steps to build and run the Solo Renderer project:

## Prerequisites
Before you begin, make sure you have the following installed:

- CMake
- MsBuild
- vcpkg

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

**Sample Scene:** Takes you to the scene where shaders are implemented.
**Exit:** Directly exits the application.

### Sample Scene
In the Sample Scene, you'll find:

**Screen View:** Visual representation of the scene.
**Console Output:** Output console for relevant information.
**Properties Panel:** Allows you to dynamically change variables during runtime.

## Notes
The project uses C++ and OpenGL.
CMake is used in conjunction with vcpkg. Make sure to configure vcpkg according to project needs.

Feel free to explore and modify Solo Renderer for your own projects!
