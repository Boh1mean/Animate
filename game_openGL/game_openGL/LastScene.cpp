//
//  LastScene.cpp
//  game_openGL
//
//  Created by Danil Knyazkin on 04.06.2023.
//

#include "LastScene.hpp"
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

void LastBackground(){
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
void glRotatef(GLfloat angle,GLfloat x,GLfloat y,GLfloat z);
void MKS(Figure &M){
    
    glPushMatrix();
    glTranslated(M.pos.x, M.pos.y, 0);
   // glRotatef(-30, 0, 0, -30);
    glScalef(.7, .7, 0);
    
    glColor3ub(240, 216, 5);
    glBegin(GL_QUADS);
    glVertex2f(-0.13, .15);
    glVertex2f(0.03, .15);
    glVertex2f(0.03, 0.18);
    glVertex2f(-0.13, 0.18);
    glEnd();
    
    glPushMatrix();
    glColor3ub(71, 67, 67);
    glBegin(GL_QUADS);
    glVertex2f(-0.18, .0);
    glVertex2f(0.08, .0);
    glVertex2f(0.08, 0.15);
    glVertex2f(-0.18, 0.15);
    glEnd();
    
    
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-0.2, .0);
    glVertex2f(0.1, .0);
    glVertex2f(0.1, 0.1);
    glVertex2f(-0.2, 0.1);
    glEnd();
    
    glColor3ub(240, 216, 5);
    glBegin(GL_QUADS);
    glVertex2f(-0.215, .0);
    glVertex2f(0.115, .0);
    glVertex2f(0.115, 0.015);
    glVertex2f(-0.215, 0.015);
    glEnd();
    
    glColor3ub(71, 67, 67);
    glBegin(GL_QUADS);
    glVertex2f(-0.215, -.2);
    glVertex2f(0.115, -.2);
    glVertex2f(0.115, -0.015);
    glVertex2f(-0.215, -0.015);
    glEnd();
    
    glColor3ub(71, 67, 67);
    glBegin(GL_QUADS);
    glVertex2f(-0.25, -.05);
    glVertex2f(0.0, -.05);
    glVertex2f(0.0, -0.15);
    glVertex2f(-0.25, -0.15);
    glEnd();
    
    glColor3ub(71, 67, 67); 
    glBegin(GL_QUADS);
    glVertex2f(0.15, -.05);
    glVertex2f(0.0, -.05);
    glVertex2f(0.0, -0.15);
    glVertex2f(0.15, -0.15);
    glEnd();
    
    glColor3ub(71, 67, 67); // крыло
    glBegin(GL_QUADS);
    glVertex2f(-0.25, .05);
    glVertex2f(-.75, .05);
    glVertex2f(-0.75, -0.3);
    glVertex2f(-0.25, -0.3);
    glEnd();
    
    glColor3ub(5, 212, 240); //окошко
    glBegin(GL_QUADS);
    glVertex2f(-0.3, .03);
    glVertex2f(-.7, .03);
    glVertex2f(-0.7, -0.28);
    glVertex2f(-0.3, -0.28);
    glEnd();
    
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-.4, .03);
    glVertex2f(-.4, -0.28);
    glEnd();
    
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-.5, .03);
    glVertex2f(-.5, -0.28);
    glEnd();
    
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-.6, .03);
    glVertex2f(-.6, -0.28);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-.7, -.125);
    glVertex2f(-.3, -0.125);
    glEnd();
    
    
    
    glColor3ub(71, 67, 67); // крыло
    glBegin(GL_QUADS);
    glVertex2f(0.15, .05);
    glVertex2f(.65, .05);
    glVertex2f(0.65, -0.3);
    glVertex2f(0.15, -0.3);
    glEnd();
    
    glColor3ub(5, 212, 240); //окошко
    glBegin(GL_QUADS);
    glVertex2f(0.2, .03);
    glVertex2f(.6, .03);
    glVertex2f(0.6, -0.28);
    glVertex2f(0.2, -0.28);
    glEnd();
    
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(.4, .03);
    glVertex2f(.4, -0.28);
    glEnd();
    
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(.5, .03);
    glVertex2f(.5, -0.28);
    glEnd();
    
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(.3, .03);
    glVertex2f(.3, -0.28);
    glEnd();
    
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(.6, -.125);
    glVertex2f(.2, -0.125);
    glEnd();
    
    glColor3ub(71, 67, 67); // основание
    glBegin(GL_QUADS);
    glVertex2f(-0.2, .0);
    glVertex2f(0.1, .0);
    glVertex2f(0.1, -0.35);
    glVertex2f(-0.2, -0.35);
    glEnd();
    
    glColor3ub(240, 216, 5); //
    glBegin(GL_QUADS);
    glVertex2f(-0.15, -.35);
    glVertex2f(0.05, -.35);
    glVertex2f(0.05, -0.375);
    glVertex2f(-0.15, -0.375);
    glEnd();
    
    glColor3ub(255, 255, 255); // низ
    glBegin(GL_POLYGON);
    glVertex2f(-0.13, -.375);
    glVertex2f(0.03, -.375);
    glVertex2f(0.02, -0.44);
    glVertex2f(-0.12, -0.44);
    glVertex2f(-0.13, -.375);
    
    glEnd();
    
        glPopMatrix();
    
    
    
    
}
