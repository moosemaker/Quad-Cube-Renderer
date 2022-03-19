#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "vbo.h"

class vao
{
public:
	GLuint ID;

	vao();

	void LinkVBO(vbo& VBO, GLuint layout);
	void Bind();
	void Unbind();
	void Delete();
};

