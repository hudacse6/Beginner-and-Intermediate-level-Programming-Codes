#include<windows.h>
//#include <GLUT/glut.h>
#include<GL/glut.h>
#include<stdlib.h>

void display()
{
    glClearColor ( 0.0f, 1.0f, 1.0f, 0.0f ); //RGBA
    glClear ( GL_COLOR_BUFFER_BIT );
    glBegin(GL_POLYGON);

    glColor3d(1,1,0) ;
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.5f,0.0f);
    glVertex2f(0.5f,0.5f);

    glEnd();
    glFlush();  // Render now
}



int main ( int argc, char *argv[] )
{
    glutInit ( &argc, argv );
    glutCreateWindow ( "GLUT Shapes" );
    glutInitWindowSize ( 1020, 720 );
    glutInitWindowPosition ( 10, 10 );
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH );
    glutDisplayFunc ( display );
    glutMainLoop();
    return 0;
}
