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

	int iArgc = 1;
	char* cArgv = "main\0";
//	char** cArg = &cArgv;
	glutInit(&iArgc, &cArgv);
//	glutInit(&argc, argv); 
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(iWidth, iHeight);
	glutCreateWindow("OpenGL");

	glEnable(GL_DEPTH_TEST);
	glEnable(GL_AUTO_NORMAL);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_RESCALE_NORMAL);
}

void Opengl::render(){

	glutMainLoop();	
}

void Opengl::setDraw(void (*ptrDraw)(void)){
	glutDisplayFunc(ptrDraw);
}

Opengl::~Opengl(){}

void Opengl::display(){}
void Opengl::timer(int n){}
void Opengl::mouse(int button, int state, int x, int y){}
void Opengl::motion(int x, int y){}

void Opengl::keyboard(unsigned char key, int x, int y){

	if(key == 27)
		exit(0);

}

void Opengl::reshape(int w, int h){}

