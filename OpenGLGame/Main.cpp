#define GLEW_STATIC

#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <Windows.h>
#include <iostream>
#include "Shapes.h"

int main(void)
{

	double time = glfwGetTime();
	int frames = 0;
	GLFWwindow* window;
	if (!glfwInit()) //Initialize the library
		return -1;
	window = glfwCreateWindow(1920, 1080, "Game1", NULL, NULL); //Create window

	glfwMakeContextCurrent(window);
	glewInit(); //TODO: Add error handling
	float i = 50;
	//Cube c;
	//Position pos1;
	//Position pos2;

	GLuint VertexArrayID;
	glGenVertexArrays(1, &VertexArrayID);
	glBindVertexArray(VertexArrayID);
	GLuint VBO;
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	Triangle t;
	glViewport(0, 0, 800, 600);

	while (!glfwWindowShouldClose(window))
	{
		//printf("OpenGL version supported by this platform: (%s) \n", glGetString(GL_VERSION));
		unsigned int objectId = 0;
		//glGenObject(1, &objectId);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		
		// The following commands will talk about our 'vertexbuffer' buffer
		glClearColor(0.2f, 0.3f, 0.6f, 1.0f);


		//std::cout << "Do we\n";
		//glBindVertexArray(VertexArrayID);
		frames++;
		if (time + 1 < glfwGetTime())
		{
			std::cout << "fps: " << frames << std::endl;
			frames = 0;
			time = glfwGetTime();
		}
		//glMatrixMode(GL_PROJECTION);              // setup viewing projection (I don't know)
		//glLoadIdentity();                           // start with identity matrix  (I don't know)
		//glOrtho(-100.0, 100.0, -100.0, 100.0, -200.0, 100.0);   // setup the viewing size of the world
		//glEnable(GL_DEPTH_TEST);
		//glMatrixMode(GL_MODELVIEW);
		float size = 10;
		//glTranslatef(6, 0, 0);
		//glPushMatrix();
		//pos1.setPos( -size, -size, -size );
		//pos2.setPos(size, size, size );
		//glRotatef(i / 10, 0, 1, 0);
		//glRotatef(-10, 0, 0, 1);


		//glGenBuffers(1, &VBO);


		t.draw(VBO);

		/*for (int j = 0; 10 > j && 0; j++)
		{
			pos1.setX(-size + 3*j);
			pos2.setX(size + 3*j);
			c.setPosition(pos1, pos2);
			c.draw();
		}*/
		if (i++ > 3600) i = 0;
		glfwSwapBuffers(window); // Tells machine done with frame, waits till it responds. (Swaps back and front buffers)
		glfwPollEvents(); // Gets events done by system
		//glFlush();
	}
	glfwTerminate();
	return 0;

}