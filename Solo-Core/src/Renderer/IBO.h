#pragma once

#include "glad/glad.h"

class IBO
{
    private:
        unsigned int m_RendererID;
        unsigned int m_Count;
    public:

    IBO(const unsigned int* data, unsigned int count);

    ~IBO();

    void Bind() const;

    void Unbind() const;

    inline unsigned int GetCount() const { return m_Count; }
};