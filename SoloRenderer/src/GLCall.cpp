#include "GLCall.h"

#include <iostream>

void GlClearError() 
{
	while (glGetError() != GL_NO_ERROR);
}

bool GlLogCall(const char* function, const char* file, int line)
{
	while (GLenum error = glGetError())
	{
		std::cout << std::endl << std::endl <<
			"[OpenGL Error Occured!] (Error Code : " << error << ")" << std::endl << std::endl <<
			"        FUNCTION : " << function << std::endl << std::endl <<
			"        LINE     : " << line << std::endl << std::endl <<
			"        FILE     : " << file << std::endl << std::endl;

		return false;
	}

	return true;
}