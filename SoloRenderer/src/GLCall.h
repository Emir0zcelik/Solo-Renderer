#pragma once

#include <glew.h>

#define ASSERT(x) if(!(x)) __debugbreak();
#define GLCall(x) GlClearError();\
	x;\
	ASSERT(GlLogCall(#x, __FILE__, __LINE__));

void GlClearError();

bool GlLogCall(const char* function, const char* file, int line);

