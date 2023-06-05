//
//  SecondScene.cpp
//  game_openGL
//
//  Created by Danil Knyazkin on 01.06.2023.
//

#include "SecondScene.hpp"
#include "Figure .h"
#include "DrawLib.hpp"

#ifdef __APPLE__
/* Defined before OpenGL and GLUT includes to avoid deprecation messages */
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif

void SecondBackground(){
  
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(15, 108, 148);
    glVertex2f(-2, 1);
    glColor3ub(15, 108, 148);
    glVertex2f(2, 1);
    glColor3ub(18, 143, 196);
    glVertex2f(2, -2);
    glColor3ub(18, 143, 196);
    glVertex2f(-2, -2);
    glEnd();
    glPopMatrix();
    
}

