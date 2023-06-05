#ifdef __APPLE__
/* Defined before OpenGL and GLUT includes to avoid deprecation messages */
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif
#include <time.h>
#include <iostream>
#include <array>
#include <cmath>
#include <cstdlib>
#include "DrawLib.hpp"
#include "Figure .h"
#include "First scene.hpp"
#include "SecondScene.hpp"
#include "ThirdScene.hpp"
#include "FourthScene.hpp"
#include "LastScene.hpp"

Figure f ={ .0, .0};
Figure f2 ={ .0, -1.0};
Figure f3 ={ .0, -2.0};
Figure f4 ={ .0, -2.0};
Figure f5 ={ .0, -2.0};

Figure UpS ={ .0, -0.23};
Figure DownS ={ .0, -0.4};


Figure s = {.0, .0};
Figure s1 = {.0, -1.0};
Figure s2 = {.3, -1.0};

Figure M = {.04, .8};

Figure z ={1., 1.0};


Figure G = {.0, 1.0};
Figure o ={.0, .0};
Figure o1 ={0.0, .0};

Figure D ={.0, .0};

Figure B ={.0, .0};
Figure B2 ={.0, -1.0};
Figure B3 ={.0, -2.0};
Figure B4 ={.0, -2.0};

Figure A ={.5, .0};
Figure A1 ={.4, .6};
Figure A2 ={-.3, .3};
Figure A3 ={-.6, -.4};
Figure A4 ={-.6, .8};


Figure P = {.0, -.25};
Figure P2 ={-.2, -.25};
Figure P3 ={.0, .0};
Figure P4 ={.0, .0};



Figure L ={.0, .0};
Figure L1 ={.0, -1.0};
Figure L2 = {.0, -2.0};
Figure L3 = {.0, -2.0};
Figure R ={.0, .0};
Figure R1 ={.0, -1.0};
Figure R2 = {.0, -2.0};
Figure R3 = {.0, -2.0};


float timer = 0; // Таймер: реальное время timer/2
 //   timer += 0.016;


float SpeedY = 0.0051;
float CoordY = 0.0051;
float CoordY1 = 0.0057;


float CoordAstro = 0.0005;
float CoordAstro1 = 0.0007;

float PartSpeedX = 0.0008;
float PartSpeedY = 0.0007;

float Part2SpeedY = 0.0007;
float Part2SpeedX = 0.0007;

float StopPos = -0.23;

void animate(int value){
    glutPostRedisplay();
    glutTimerFunc(1000/60, animate, 0);
    timer += 0.016;
    std::cout<<timer<<'\n';
}

void drawAnima(){
    FirstBackground();
    Oblako(o);
    Oblako1(o1);
    DrawSpaceboard(f);
    Derjatel(D);
    
    if(timer > 17.0){
        BurnMane(B);
        BurnLeft(L);
        BurnRight(R);
        f.pos.y += SpeedY;
        B.pos.y += CoordY;
        L.pos.y += CoordY;
        R.pos.y += CoordY;
    }if(timer > 2){
        D.pos.x -= 0.00012;
        if(timer > 17.49){
            D.pos.x = StopPos;
        }
    }
    
    if(f.pos.y > 2){
        SecondBackground();
        Sun(G);
        if(timer > 9){
            G.pos.y -= SpeedY;
        }
        f2.pos.y += SpeedY;
        B2.pos.y += CoordY;
        L1.pos.y += CoordY;
        R1.pos.y += CoordY;
        DrawSpaceboard(f2);
        BurnMane(B2);
        BurnLeft(L1);
        BurnRight(R1);
        
        if(f2.pos.y > 2){
            ThirdBackground();
            DrawStars(s);
            DownStars(z);
            f3.pos.y += SpeedY;
            B3.pos.y += CoordY;
            L2.pos.y += CoordY;
            R2.pos.y += CoordY;
            if(timer > 27){
                z.pos.x -= 0.005;
                z.pos.y -= 0.005;
            }
            DrawSpaceboard(f3);
            BurnMane(B3);
            BurnLeft(L2);
            BurnRight(R2);
            
            
            
            if(f3.pos.y > 2){
                FourthBackground();
                DrawStars(s1);
                DrawAstero(A);
                DrawAstero(A1);
                DrawAstero(A2);
                DrawAstero(A3);
                DrawAstero(A4);
                if(timer > 16){
                    A.pos.y -= CoordAstro;
                    A1.pos.y -= CoordAstro;
                    A1.pos.x += CoordAstro;
                    A2.pos.y += CoordAstro1;
                    A2.pos.x += CoordAstro1;
                    A3.pos.y -= CoordAstro1;
                    A3.pos.x -= CoordAstro1;
                    A4.pos.y -= CoordAstro1;
                    
                }
                f4.pos.y += SpeedY;
                B4.pos.y += CoordY;
                L3.pos.y += CoordY;
                R3.pos.y += CoordY;
                DrawSpaceboard(f4);
                BurnMane(B4);
                BurnLeft(L3);
                BurnRight(R3);
                
                if(f4.pos.y > 2){
                    LastBackground();
                    DrawStars(s2);
                    DrawSpaceboard(f5);
                    f5.pos.y += SpeedY ;
                    if(timer > 40.16){
                        f5.pos.y = -0.23;
                    }
                    if(timer > 40.32){
                        LastBackground();
                        UpSpaceboard(UpS);
                        DrawStars(s2);
                        UpSpaceboard(UpS);
                        DownSpaceboard(DownS);
                        if(timer > 41)
                            DownS.pos.y -= SpeedY;
                    }
                    if(timer > 43){
                        UpS.pos.y += 0.0005;
                    }if(timer >47.32){
                        UpS.pos.y = 0.05;
                    }if(timer > 49){
                        UpS.pos.x += 0.005;
                        M.pos.x += 0.005;
                    }
                       MKS(M);
                        
                        
                    }
                
                }
            }
        }
    }


int main(int argc, char* argv[]){
    srand(0);
    initStars();
    initAstero();
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 800);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);
    glutTimerFunc(1000/60, animate, 1);
    
    
    glutMainLoop();
    
    return 0;
    
}
void renderScene(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    FirstBackground();
    SecondBackground();
    ThirdBackground();
    FourthBackground();
    LastBackground();
    DrawStars(s);
    DrawSpaceboard(f);
    drawAnima();
        glutSwapBuffers();
        
}
