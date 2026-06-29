#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    const char* text = "Hello World";

    glColor3f(1.0f, 1.0f, 1.0f); // White color
    glRasterPos2f(-0.2f, 0.0f);

    while (*text) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *text);
        text++;
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Hello OpenGL");

    glClearColor(0.0, 0.0, 0.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
