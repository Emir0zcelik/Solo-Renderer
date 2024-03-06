#pragma once

#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "STB/stb_image.h"
#include "Folder/Folder.h"

#include <iostream>
#include <string>

class Window
{
    public:
        Window();

        ~Window();

        GLFWwindow* InitWindow(int width, int height, std::string windowName);

        void ProcessInput(GLFWwindow* window);
};