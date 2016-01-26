#ifndef AQTGLWIDGET_H
#define AQTGLWIDGET_H

#include <QGLWidget>
#include <vector>
#include "aqtcoords.h"

/**
 * \class
 * \brief Basic GlWidgetClass for use by AQT
 **/
class AqtGlWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit AqtGlWidget(QWidget *parent = 0);

protected:

    void initializeGL();
    void paintGL();
    void resizeGL( int width, int height );
    void draw();

private:
    AqtCoords coords;

signals:
    void xRotationAngleChanged(QString angle );
    void yRotationAngleChanged(QString angle );
    void zRotationAngleChanged(QString angle );

public slots:
    void setXRotation( int angle );
    void setYRotation( int angle );
    void setZRotation( int angle );

};

static void qNormalizeAngle(int &angle);
#endif // AQTGLWIDGET_H
