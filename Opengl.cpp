//
//  Opengl.cpp
//  
//
//  Created by Jeff Wood on 5/11/15.
//
//

#include "Opengl.hpp"

Opengl::Opengl(){ Opengl(400, 300);}

Opengl::Opengl(int iWidth, int iHeight){

	glutInit(1, (void*));
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(iWidth, iHeight);
}

Opengl::render(){}

Opengl::~Opengl(){}

void Opengl::init();
void Opengl::display();
void Opengl::timer(int n);
void Opengl::mouse(int button, int state, int x, int y);
void Opengl::motion(int x, int y);
void Opengl::keyboard(unsigned char key, int x, int y);
void Opengl::reshape(int w, int h);

