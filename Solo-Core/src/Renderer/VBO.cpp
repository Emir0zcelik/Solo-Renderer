#include "VBO.h"

VBO::VBO(const void* data, unsigned int size)
{
    glGenBuffers(1, &m_RendererID);
    glBindBuffer(GL_ARRAY_BUFFER, m_RendererID);
    glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}

VBO::~VBO()
{
    glDeleteBuffers(1, &m_RendererID);
}

void VBO::Bind() const
{
    glBindBuffer(GL_ARRAY_BUFFER, m_RendererID);
}

void VBO::Unbind() const
{
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}