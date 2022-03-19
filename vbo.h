#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class vbo
{
public:
	GLuint ID;
	vbo(GLfloat* vertices, GLsizeiptr size);

	void Bind();
	void Unbind();
	void Delete();
};

