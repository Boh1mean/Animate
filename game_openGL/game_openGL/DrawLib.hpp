#include <stdio.h>
#ifndef DrawLib_hpp
#define DrawLib_hpp

#ifdef __APPLE__
/* Defined before OpenGL and GLUT includes to avoid deprecation messages */
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif
#include <cmath>
#include "Figure .h"
#include "First scene.hpp"
#include "SecondScene.hpp"
#include "ThirdScene.hpp"
#include "FourthScene.hpp"
#include "LastScene.hpp"


void renderScene(void);

void DrawSpaceboard(Figure &f);

void Sun(Figure &G);

void Oblako(Figure  &o);
void Oblako1(Figure  &o1);
void BurnMane(Figure &B);
void BurnLeft(Figure &L);
void BurnRight(Figure &R);


void animate(int value);
void drawAnima();
void FirstBackground();
void Derjatel(Figure &D);
void SecondScene();
void ThirdBackground();
void FourthBackground();
void LastBackground();
void MKS(Figure &M);
void UpSpaceboard(Figure &UpS);
void DownSpaceboard(Figure &DownS);

void initStars();
void DrawStars(Figure &s);
void DownStars(Figure &z);

void initAstero();
void DrawAstero(Figure &A);


#endif /* DrawLib_hpp */
