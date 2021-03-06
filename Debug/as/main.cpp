#include <windows.h>
#include <GL/glut.h>


void display()
{
    glClear ( GL_COLOR_BUFFER_BIT );
    glClearColor ( 0.0f, 0.0f, 0.0f, 1.0f );

    glBegin(GL_QUADS);
        glColor3f(0.0f,1.0f,0.0f);
        glVertex2f(0.5f,0.3f);
        glVertex2f(-0.5f,0.3f);
        glVertex2f(-0.5f,-0.3f);
        glVertex2f(0.5f,-0.3f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f,0.0f,0.0f);
        glVertex2f(0.1f,0.05);
        glVertex2f(0.05f,0.1f);
        glVertex2f(-0.05f,0.1f);
        glVertex2f(-0.1f,0.05);
        glVertex2f(-0.1f,-0.05);
        glVertex2f(-0.05f,-0.1f);
        glVertex2f(0.05f,-0.1f);
        glVertex2f(0.1f,-0.05);

    glEnd();

    glFlush();
}


int main ( int argc, char** argv )
{
    glutInit ( &argc, argv );
    glutCreateWindow ( "OpenGL Setup Test" );
    glutInitWindowSize ( 320, 320 );
    glutInitWindowPosition ( 50, 50 );
    glutDisplayFunc ( display );
    glutMainLoop();
    return 0;
}
