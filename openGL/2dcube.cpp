#include <GL/glut.h>

float angle = 0;

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();
    glRotatef(angle, 1.0f, 1.0f, 0.0f);

    glBegin(GL_QUADS);

    // Front face (red)
    glColor3f(1,0,0);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);

    // Back face (green)
    glColor3f(0,1,0);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f( 0.5, 0.5,-0.5);
    glVertex3f( 0.5,-0.5,-0.5);

    // Left face (blue)
    glColor3f(0,0,1);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5,-0.5);

    // Right face (yellow)
    glColor3f(1,1,0);
    glVertex3f(0.5,-0.5,-0.5);
    glVertex3f(0.5, 0.5,-0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5,-0.5, 0.5);

    // Top face (cyan)
    glColor3f(0,1,1);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5,-0.5);

    // Bottom face (magenta)
    glColor3f(1,0,1);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f(-0.5,-0.5, 0.5);

    glEnd();

    glutSwapBuffers();
}

void update(int value) {
    angle += 2.0f;
    if (angle > 360) angle = 0;

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void init() {
    glEnable(GL_DEPTH_TEST);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, 800.0/600.0, 1.0, 10.0);

    glMatrixMode(GL_MODELVIEW);
    glTranslatef(0.0, 0.0, -3.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL Cube (No GLAD)");

    init();

    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);

    glutMainLoop();
    return 0;
}
