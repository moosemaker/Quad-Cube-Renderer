#include "vbo.h"

vbo::vbo(GLfloat* vertices, GLsizeiptr size)
{
	glGenBuffers(1, &ID);
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, size, vertices, GL_STATIC_DRAW);
}

void vbo::Bind()
{
	glBindBuffer(GL_ARRAY_BUFFER, ID);
}

void vbo::Unbind()
{
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void vbo::Delete()
{
	glDeleteBuffers(1, &ID);
}
