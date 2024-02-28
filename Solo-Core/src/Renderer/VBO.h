#pragma once

#include "glad/glad.h"

class VBO
{
    private:
        unsigned int m_RendererID;
    public:
        
        VBO(const void* data, unsigned int size);

        ~VBO();

        void Bind() const;

        void Unbind() const;
};