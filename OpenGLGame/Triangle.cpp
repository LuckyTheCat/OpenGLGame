#include "Triangle.h"
#include <iostream>

Triangle::Triangle()
{
	vCount = 9;
	verts = new GLfloat[18] {
		/*-0.5f, -0.5f, 0.0f,
		0.5f, -0.5f, 0.0f,
		0.0f,  0.5f, 0.0f*/
		    // first triangle
    // first triangle
     0.5f,  0.5f, 0.0f,  // top right
     0.5f, -0.5f, 0.0f,  // bottom right
    -0.5f,  0.5f, 0.0f,  // top left 
    // second triangle
     0.5f, -0.5f, 0.0f,  // bottom right
    -0.5f, -0.5f, 0.0f,  // bottom left
    -0.5f,  0.5f, 0.0f   // top left
	};
	//std::cout << "GLfloatsize*9: " << sizeof(GLfloat) * 9 << " : " << sizeof(vertices) << "\n";
	glBufferData(GL_ARRAY_BUFFER, sizeof(verts)*sizeof(GLfloat), verts, GL_STATIC_DRAW);

}

void Triangle::draw(unsigned int &VBO)
{

	/*glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glVertexAttribPointer(
		0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
		3,                  // size
		GL_FLOAT,           // type
		GL_FALSE,           // normalized?
		0,                  // stride
		(void*)0            // array buffer offset
	);
	glDrawArrays(GL_TRIANGLES, 0, 3);
	glDisableVertexAttribArray(0);*/

	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT);

	// Use our shader
	//glUseProgram(programID);

	// 1rst attribute buffer : vertices
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glVertexAttribPointer(
		0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
		3,                  // size
		GL_FLOAT,           // type
		GL_FALSE,           // normalized?
		0,                  // stride
		(void*)0            // array buffer offset
	);

	// Draw the triangle !
	glDrawArrays(GL_TRIANGLES, 0, 3); // 3 indices starting at 0 -> 1 triangle

	glDisableVertexAttribArray(0);
}



Triangle::~Triangle()
{
}
