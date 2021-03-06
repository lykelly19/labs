#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <memory>

#include "GL/glew.h"
#include <QGLWidget>

class OpenGLShape;

class GLWidget : public QGLWidget
{
    Q_OBJECT

public:
    GLWidget(QGLFormat format, QWidget *parent = 0);
    ~GLWidget();

protected:
    /** This is called once, before any calls to paintGL. */
    void initializeGL();

    /** This is called every time the window needs to be repainted. */
    void paintGL();

    /** This is called every time the window is resized. */
    void resizeGL(int w, int h);

private:

    /** ID for the shader program. You'll learn about this in later labs. */
    GLuint m_program;
    std::unique_ptr<OpenGLShape> m_quad;
};

#endif // GLWIDGET_H
