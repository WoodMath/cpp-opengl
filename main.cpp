//
//  main.cpp
//  
//
//  Created by Jeff Wood on 5/11/15.
//
//

#include <iostream>
#include "Opengl.hpp"

void draw(){


}

int main(int argc, char* argv[]){

	Opengl ogl;

	ogl.setDraw(draw);

	ogl.render();

	return 0;
}
