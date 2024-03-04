#pragma once

#include "VBO.h"
#include "IBO.h"
#include "VAO.h"
#include "VBOLayout.h"
#include "Shader.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

class Renderer
{
    public:
        void Clear() const;

        void Draw(const VAO& va, const IBO& ib, const Shader& shader) const;

};