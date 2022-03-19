#pragma once

#include "vbo.h"
#include "vao.h"
#include "ebo.h"

static GLfloat vertices[] = {
    0.5f,  0.5f, 0.0f,  // top right
    0.5f, -0.5f, 0.0f,  // bottom right
   -0.5f, -0.5f, 0.0f,  // bottom left
   -0.5f,  0.5f, 0.0f   // top left 
};

static GLuint indicies[] = {
    0, 1, 3,
    1, 2, 3
};

class QuadRDR
{
public:


    QuadRDR();

    void Render();

    void DeleteBuffers();

    vao VAO;
    vbo* VBO = new vbo(vertices, sizeof(vertices));
    EBO* ebo = new EBO(indicies, sizeof(indicies));
};

