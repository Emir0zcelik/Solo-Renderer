#include "IBO.h"

IBO::IBO(const unsigned int* data, unsigned int count)
    : m_Count(count)
{
    glGenBuffers(1, &m_RendererID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER ,m_RendererID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(unsigned int), data, GL_STATIC_DRAW);
    
}

IBO::~IBO()
{
    glDeleteBuffers(1, &m_RendererID);
}

void IBO::Bind() const
{
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER ,m_RendererID);
}

void IBO::Unbind() const
{
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER ,0);
}