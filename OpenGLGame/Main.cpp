#include <GLFW\glfw3.h>
#include <Windows.h>
#include <iostream>
#include "Cube.h"

int main(void)
{
	double time = glfwGetTime();
	int frames = 0;
	GLFWwindow* window;
	if (!glfwInit()) //Initialize the library
		return -1;
	window = glfwCreateWindow(1920, 1080, "Game1", NULL, NULL); //Create window

	glfwMakeContextCurrent(window);
	float i = 50;
	Cube c;
	Position pos1;
	Position pos2;
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		frames++;
		if (time + 1 < glfwGetTime())
		{
			std::cout << "fps: " << frames << std::endl;
			frames = 0;
			time = glfwGetTime();
		}
		//glMatrixMode(GL_PROJECTION);              // setup viewing projection (I don't know)
		glLoadIdentity();                           // start with identity matrix  (I don't know)
		glOrtho(-100.0, 100.0, -100.0, 100.0, -200.0, 100.0);   // setup the viewing size of the world
		glEnable(GL_DEPTH_TEST);
		//glMatrixMode(GL_MODELVIEW);
		float size = 10;
		//glTranslatef(6, 0, 0);
		glPushMatrix();
		pos1.setPos( -size, -size, -size );
		pos2.setPos(size, size, size );
		glRotatef(i / 10, 0, 1, 0);
		glRotatef(-10, 0, 0, 1);

		for (int j = 0; 10 > j; j++)
		{
			pos1.setX(-size + 3*j);
			pos2.setX(size + 3*j);
			c.setPosition(pos1, pos2);
			c.draw();
		}
		if (i++ > 3600) i = 0;
		glfwSwapBuffers(window); // Tells machine done with frame, waits till it responds. (Swaps back and front buffers)
		glfwPollEvents(); // Gets events done by system
		//glFlush();
	}
	glfwTerminate();
	return 0;

}