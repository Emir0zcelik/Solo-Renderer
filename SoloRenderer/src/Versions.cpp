#include "Versions.h"

void DisplayVersions() {
	std::cout << "____________________________________________________" << std::endl;
	std::cout << "| GLFW Version : " << glfwGetVersionString() << "|" << std::endl;
	std::cout << "| GLEW Version : " << glewGetString(GLEW_VERSION) << "                             |" << std::endl;
	std::cout << "| GL Version   : " << glGetString(GL_VERSION) << "               |" << std::endl;
	std::cout << "|__________________________________________________|" << std::endl;
}

