/***************************
 * \file the AqtGLWidget is a basic OpenGL widget
 ***************************/

#include <QtWidgets>
#include <QtOpenGL>
#include "aqtglwidget.h"


AqtGlWidget::AqtGlWidget(QWidget *parent) :
    QGLWidget(parent)
{
}

/**
 * @brief AqtGLWidget::initializeGL initilializes the GL context
 */
void AqtGlWidget::initializeGL()
{
    qglClearColor(Qt::black);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    static GLfloat lightPosition[4] = { 0, 0, 10, 1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
}

/**
 * @brief AqtGLWidget::paintGL redraws the GlContext
 */
void AqtGlWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -10.0);
    glRotatef((double)coords.xAngle, 1.0, 0.0, 0.0);
    glRotatef((double)coords.yAngle, 0.0, 1.0, 0.0);
    glRotatef((double)coords.zAngle, 0.0, 0.0, 1.0);
    draw();
}



/**
 * \brief resizes the GL Window to the given paramters
 **/
void AqtGlWidget::resizeGL( int width, int height)
{
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
#ifdef QT_OPENGL_ES_1
    glOrthof(-2, +2, -2, +2, 1.0, 15.0);
#else
    glOrtho(-2, +2, -2, +2, 1.0, 15.0);
#endif
    glMatrixMode(GL_MODELVIEW);
}



/**
 * @brief AqtGlWidget::setXRotation Sets the X Rotation angle
 * @param angle
 **/
void AqtGlWidget::setXRotation(int angle )
{
    qNormalizeAngle(angle);
    if( angle != coords.xAngle) {
        coords.xAngle = angle;
        emit xRotationAngleChanged(QString::number(angle));
        updateGL();
    }
}

/**
 * @brief AqtGlWidget::setYRotation Sets the Y Rotation angle
 * @param angle
 **/
void AqtGlWidget::setYRotation(int angle )
{
    qNormalizeAngle(angle);
    if( angle != coords.yAngle) {
        coords.yAngle = angle;
        emit yRotationAngleChanged(QString::number(angle));
        updateGL();
    }
}

/**
 * @brief AqtGlWidget::setZRotation Sets the Z Rotation angle
 * @param angle
 **/
void AqtGlWidget::setZRotation(int angle )
{
    qNormalizeAngle(angle);
    if( angle != coords.zAngle) {
        coords.zAngle = angle;
        emit zRotationAngleChanged(QString::number(angle));
        updateGL();
    }
}

/**
 * @brief AqtGLWidget::draw draws the object
 */
void AqtGlWidget::draw()
{
    glColor4f(1.0f, 0.0f, 0.0f,1.0);

    glBegin(GL_QUADS);
        glColor4f(1.0f, 0.0f, 0.0f,1.0);
        glNormal3f(0,0,-1);
        glVertex3f(-1,-1,0);
        glVertex3f(-1,1,0);
        glVertex3f(1,1,0);
        glVertex3f(1,-1,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glNormal3f(0,-1,0.707);
        glVertex3f(-1,-1,0);
        glVertex3f(1,-1,0);
        glVertex3f(0,0,1.2);
    glEnd();
    glBegin(GL_TRIANGLES);
        glNormal3f(1,0, 0.707);
        glVertex3f(1,-1,0);
        glVertex3f(1,1,0);
        glVertex3f(0,0,1.2);
    glEnd();
    glBegin(GL_TRIANGLES);
        glNormal3f(0,1,0.707);
        glVertex3f(1,1,0);
        glVertex3f(-1,1,0);
        glVertex3f(0,0,1.2);
    glEnd();
    glBegin(GL_TRIANGLES);
        glNormal3f(-1,0,0.707);
        glVertex3f(-1,1,0);
        glVertex3f(-1,-1,0);
        glVertex3f(0,0,1.2);
    glEnd();
}

/**
 * @brief qNormalizeAngle - normalizes the angle
 * @param angle
 */
static void qNormalizeAngle(int &angle)
{
    while (angle < 0)
        angle += 360;
    while (angle > 360)
        angle -= 360;
}
