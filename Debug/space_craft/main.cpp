#include<windows.h>
#include<GL/glut.h>

void initGL() {
   // Set "clearing" or background color
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
   // glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  //RGBA



}








int main( int argc , char** argv)
{
    glutInit(&argc , argv);
    glutCreateWindow("test shape :");
    glutInitWindowSize(720,480);
    glutInitWindowPosition(50,50);
    glutDisplayFunc(display);
    initGL() ;
    glutMainLoop();
    return 0;
}
