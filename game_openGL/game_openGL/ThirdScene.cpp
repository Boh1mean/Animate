//
//  ThirdScene.cpp
//  game_openGL
//
//  Created by Danil Knyazkin on 01.06.2023.
//

#include "ThirdScene.hpp"
#include "Figure .h"
#include "DrawLib.hpp"
#include <array>

#ifdef __APPLE__
/* Defined before OpenGL and GLUT includes to avoid deprecation messages */
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif

void ThirdBackground(){
    
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(29, 55, 66);
    glVertex2f(-2, 1);
    glColor3ub(29, 55, 66);
    glVertex2f(2, 1);
    glColor3ub(18, 143, 196);
    glVertex2f(2, -2);
    glColor3ub(18, 143, 196);
    glVertex2f(-2, -2);
    glEnd();
    glPopMatrix();
    
}

    const int n = 170;
    std::array<Figure, n> star;

void initStars(){
    Figure s;
    for(unsigned int i = 0; i <= star.size(); i++){
        s.pos.x = 2.7 * rand() / RAND_MAX - 1.5;
        s.pos.y = 2.2 * rand() / RAND_MAX - 0.2;
        star[i] = s;
    }

}

void DrawStars(Figure &s){
   // Figure s;
    glPushMatrix();
    glTranslated(s.pos.x, s.pos.y, 0);
    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2f(0.1, 0.1);
    for(int i = 0; i <= star.size(); i++){
        glVertex2f(star[i].pos.x, star[i].pos.y);

    }
    glEnd();
    glPopMatrix();
}

void DownStars(Figure &z){
    glPushMatrix();
    glTranslated(z.pos.x, z.pos.y, 0);
    glColor3ub(219, 197, 0);
    glPointSize(3.5);
    glBegin(GL_POINTS);
    glVertex2f(0.1, 0.1);
    glEnd();
    glPopMatrix();
}

