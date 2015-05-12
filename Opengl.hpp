//
//  Opengl.hpp
//  
//
//  Created by Jeff Wood on 5/11/15.
//
//

#ifndef _Opengl_h
#define _Opengl_h
#include "include.h"
class Opengl {

public:
	Opengl();
	Opengl(int iWidth, int iHeight);
	void render();
	void setDraw(void (*ptrDraw)(void));

 	~Opengl();
   
    
private:
	void display();
	void timer(int n);
	void mouse(int button, int state, int x, int y);
	void motion(int x, int y);
	void keyboard(unsigned char key, int x, int y);
	void reshape(int w, int h);
/*
	unsigned int iDelay = 100, iTime = 0, iSpeed = 10;
	unsigned int mouseLeftDown = 0, mouseX = 0, mouseY = 0;
*/



};

#endif
