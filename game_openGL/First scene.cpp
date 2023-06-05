//
//  First scene.cpp
//  game_openGL
//
//  Created by Danil Knyazkin on 30.05.2023.
//

#include "First scene.hpp"
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

void FirstBackground(){

    glColor3ub(18, 143, 196);
    glBegin(GL_QUADS); // небо
    glVertex2f(-2, 1);
    glVertex2f(2, 1);
    glVertex2f(2, -2);
    glVertex2f(-2, -2);
    
    glEnd();
    glPopMatrix();
    

    
    
    glBegin(GL_QUADS); // песок
    glColor3ub(107, 73, 4);
    glVertex2f(-2, -2);
    glColor3ub(214, 149, 19);
    glVertex2f(-2, -0.5);
    glColor3ub(107, 73, 4);
    glVertex2f(2, -0.5);
    glColor3ub(214, 149, 19);
    glVertex2f(2, -2);
    
    glEnd();
    
    glColor3ub(102, 98, 91);
    glBegin(GL_QUADS); // типо стойки под кораблем
    glVertex2f(-0.5, -2);
    glVertex2f(-0.5, -0.93);
    glVertex2f(0.5, -2);
    glVertex2f(0.5, -0.93);
    
    glEnd();
    
    
    
    
    glBegin(GL_POLYGON); // горка левая
    glColor3ub(184, 112, 31);
    glVertex2f(0.4, -0.5);
    glColor3ub(158, 97, 27);
    glVertex2f(0.6, -0.35);
    glColor3ub(127, 75, 15);
    glVertex2f(0.72,-0.35);
    glColor3ub(99, 61, 18);
    glVertex2f(0.79, -0.3);
    glColor3ub(110, 64, 12);
    glVertex2f(0.87, -0.3);
    glColor3ub(140, 83, 17);
    glVertex2f(0.94, -0.26);
    glColor3ub(112, 66, 13);
    glVertex2f(1, -0.26);
    glColor3ub(110, 64, 12);
    glVertex2f(1, -0.5);
    
    
    glEnd();
    
    glBegin(GL_POLYGON); // а это горка правая
    glColor3ub(184, 112, 31);
    glVertex2f(-0.4, -0.5);
    glColor3ub(87, 51, 11);
    glVertex2f(-0.48, -0.4);
    glColor3ub(158, 97, 27);
    glVertex2f(-0.58, -0.35);
    glColor3ub(127, 75, 15);
    glVertex2f(-0.72,-0.35);
    glColor3ub(99, 61, 18);
    glVertex2f(-0.79, -0.3);
    glColor3ub(110, 64, 12);
    glVertex2f(-0.87, -0.3);
    glColor3ub(140, 83, 17);
    glVertex2f(-0.96, -0.26);
    glColor3ub(112, 66, 13);
    glVertex2f(-1, -0.26);
    glColor3ub(110, 64, 12);
    glVertex2f(-1, -0.5);
    
    
    glEnd();
    //Отрисовка стойки
    float x = -0.4, y = 0.8; // координаты для решетки
    float x2 = -0.3, y2 = 0.7;
    
    float yy = 0.7;
    float yy1 = 0.8;
    glPushMatrix();
    glBegin(GL_LINE_STRIP); // Левая балка стойки
    glVertex2f(-0.4, 0.6);
    glVertex2f(-0.4, -.93);
    glEnd();
    
    glBegin(GL_LINE_STRIP); // правая балка стойки
    glVertex2f(-0.3, 0.6);
    glVertex2f(-0.3, -.93);
    glEnd();
    
    glBegin(GL_LINES); // решетка внутри стойки
    for(float i = 0; i < 15; i++) { // цикл для отрисовки первой линии
        y = y - 0.1;
        y2 = y2 - 0.1;
        glVertex2f(x, y - 0.1);
        glVertex2f(x2, y2 - 0.1);
    }
    for(float i = 0; i < 15; i++){ // цикл для отрисовки второй линии
        yy = yy - 0.1;
        yy1 = yy1 - 0.1;
        glVertex2f(x, yy - 0.1);
        glVertex2f(x2, yy1 - 0.1);
        
    }
    
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(87, 84, 80);
    glVertex2f(-.42, 0.06);
    glVertex2f(-.42, -0.04);
    glVertex2f(-.28, 0.06);
    glVertex2f(-.28, -0.04);
    glVertex2f(-.42, -0.04);
    
    glEnd();
}

void Derjatel(Figure &D){
    glPushMatrix();
    glTranslated(D.pos.x, D.pos.y, 0);
    glColor3ub(54, 53, 47);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0, 0.04);
    glVertex2f(-0.6, 0.04);
    glEnd();
    
    glColor3ub(54, 53, 47);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0, -0.02);
    glVertex2f(-0.6, -0.02);
    glEnd();
    
    float x = -0.6;
    float y = -0.02;
    
    float x1 = -0.5;
    float y1 = 0.04;
    glColor3ub(54, 53, 47);
    glBegin(GL_LINES);
    for(int i = 0; i < 6; i++){
        x  = x + 0.1;
        x1 = x1 + 0.1;
        glVertex2f(x + (-0.1), y);
        glVertex2f(x1 + (-0.1), y1);
    }
    glEnd();
    
    float lx = -0.6;
    float llx = -0.5;
    glColor3ub(54, 53, 47);
    glBegin(GL_LINES);
    for(int i = 0; i < 6; i++){
        lx = lx + 0.1;
        llx = llx + 0.1;
        glVertex2f(lx + (-0.1), 0.04);
        glVertex2f(llx + (-0.1), -0.02);
    }
    glEnd();
    
    glColor3ub(54, 53, 47);
    glBegin(GL_QUADS);
    glVertex2f(-0.05, 0.06);
    glVertex2f(0.05, 0.06);
    glVertex2f(0.05, -0.04);
    glVertex2f(-0.05, -0.04);
    glEnd();
    glPopMatrix();
}

