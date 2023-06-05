//
//  FourthScene.cpp
//  game_openGL
//
//  Created by Danil Knyazkin on 01.06.2023.
//

#include "FourthScene.hpp"
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

void FourthBackground(){
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(29, 55, 66);
    glVertex2f(-2, 1);
    glColor3ub(0, 0, 0);
    glVertex2f(2, 1);
    glColor3ub(29, 55, 66);
    glVertex2f(2, -2);
    glColor3ub(29, 55, 66);
    glVertex2f(-2, -2);
    glEnd();
    glPopMatrix();
    
}

const int n = 8;
std::array<Figure, n> Asteroid;

void initAstero(){
    Figure A;
    for(unsigned int i = 0; i <= Asteroid.size(); i++){
        A.pos.x = -2.0 * rand()/ RAND_MAX - 1.5;
        A.pos.y = -1.0 * rand()/ RAND_MAX - 0.2;
        Asteroid[i] = A;
    }

}

void DrawAstero(Figure &A){
    
    glPushMatrix();
    glTranslated(A.pos.x, A.pos.y, 0);
    glScalef(.4, .4, 0);
    glColor3ub(71, 67, 67);
    glBegin(GL_POLYGON);
    glVertex2f(-0.4, 0.0);
    glVertex2f(-0.35, 0.1);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.15, 0.23);
    glVertex2f(-0.12, 0.28);
    glVertex2f(-0.03, 0.3);
    glVertex2f(0.05, 0.35);
    glVertex2f(0.25, 0.27);
    glVertex2f(0.34, 0.23);
    glVertex2f(0.31, 0.05);
    glVertex2f(0.1, -0.18);
    glVertex2f(0.0, -0.18);
    glVertex2f(0.0, -0.185);
    glVertex2f(-0.17, -0.17);
    glVertex2f(-0.4, 0.0);
    glEnd();

    
    
    glColor3ub(54, 50, 50);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.01, 0.1);
    glVertex2f(0.04, 0.35);
    glVertex2f(0.06, 0.3);
    glEnd();
    

    
    glColor3ub(54, 50, 50);
    glBegin(GL_TRIANGLES);
    
    glVertex2f(0.2, 0.15);
    glVertex2f(0.25, 0.1);
    glVertex2f(0.28, 0.15);
    
    glEnd();
    
    glColor3ub(54, 50, 50);
    glBegin(GL_TRIANGLES);
    
    glVertex2f(0.0, -0.15);
    glVertex2f(0.13, 0.018);
    glVertex2f(0.135, -0.15);
    
    glEnd();
    
    glPopMatrix();
        
}


