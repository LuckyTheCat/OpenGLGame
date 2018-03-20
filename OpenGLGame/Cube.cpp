#include "Cube.h"
#include <GLFW\glfw3.h>
#include "Position.h"
Cube::Cube()
{
	Cube::verts = new GLfloat[36];


	const int test = 5;
}
void drawRect(Position pos1, Position pos2, int mode) //mode 0 - vertical(over z), 1 - horizontal (over y)
{

	//glVertex3f(pos1[0], pos1[1], pos1[2]);
	if (mode == 0)
	{
		glVertex3f(pos1[0], pos2[1], pos2[2]);
		glVertex3f(pos2[0], pos2[1], pos2[2]);
		glVertex3f(pos2[0], pos1[1], pos1[2]);
	}
	else
	{
		glVertex3f(pos1[0], pos2[1], pos1[2]);
		glVertex3f(pos2[0], pos2[1], pos2[2]);
		glVertex3f(pos2[0], pos1[1], pos2[2]);
	}
	glVertex3f(pos1[0], pos1[1], pos1[2]);
}

const int Cube::giveInt()
{
	pos1 = pos2;
	return 1;
}

void Cube::draw()
{
	Position p1 = pos1, p2 = pos2;
	//glBegin(GL_POLYGON);
	//front
	//glColor3f(0, 0, 1);
	p2.setY(pos1);
	drawRect(p1, p2, 0);
	p2 = pos2;

	//right
	glColor3f(1, 0, 0);
	p1.setX(pos2);
	drawRect(p1, p2, 1);
	p1 = pos1;
	//back
	glColor3f(0, 1, 0);
	p1.setY(pos2);
	drawRect(p1, p2, 0);
	p1 = pos1;
	//left
	glColor3f(1, 0, 1);
	p2.setX(pos1);
	drawRect(p1, p2, 1);
	p2 = pos2;
	//top
	glColor3f(1, 1, 1);
	p1.setZ(pos2);
	drawRect(p1, p2, 0);
	p1 = pos1;
	//bottom
	glColor3f(1, 0.5, 0.5);
	p2.setZ(pos1);
	drawRect(p1, p2, 0);
	p2 = pos2;
	glEnd();
	Shape::draw();
}
void Cube::setPosition(Position pos1, Position pos2)
{
	Cube::pos1 = pos1;
	Cube::pos2 = pos2;
}

Cube::~Cube()
{
}
