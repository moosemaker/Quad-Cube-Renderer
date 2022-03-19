#include "QuadRDR.h"

QuadRDR::QuadRDR()
{


	VAO.Bind();
	VAO.LinkVBO(*VBO, 0);
	ebo->Bind();

	VAO.Unbind();
	VBO->Unbind();
	ebo->Unbind();
};

void QuadRDR::Render()
{
	VAO.Bind();
	ebo->Bind();
	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
}

void QuadRDR::DeleteBuffers()
{
	VAO.Delete();
	VBO->Delete();
	ebo->Delete();

	delete ebo;
	delete VBO;
}
