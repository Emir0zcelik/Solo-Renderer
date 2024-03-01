#include "SoloApp.h"

#include <iostream>

int main(void)
{
    Window windowObj;

    GLFWwindow* window = windowObj.InitWindow(1000, 750, "Solo");
    
    while (!glfwWindowShouldClose(window))
    {
        windowObj.ProcessInput(window);

        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    return 0;
}