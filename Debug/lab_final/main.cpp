#include<windows.h>
//#include <GLUT/glut.h>
#include <GL/glut.h>
#include <stdlib.h>


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f,0.0f,0.0f,0.0f);   //RGBA


}



int main ( int argc, char *argv[] )
{
    glutInit ( &argc, argv );
    glutCreateWindow ( "GLUT Shapes" );
    glutInitWindowSize ( 640, 480 );
    glutInitWindowPosition ( 10, 10 );
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH );
    glutDisplayFunc ( display );
    glutMainLoop();
    return 0;
}
