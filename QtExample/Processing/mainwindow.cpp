#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->aqtGlWidget, SIGNAL(xRotationAngleChanged(QString)), ui->xRotationText, SLOT(setText(QString)));
    connect(ui->aqtGlWidget, SIGNAL(yRotationAngleChanged(QString)), ui->yRotationText, SLOT(setText(QString)));
    connect(ui->aqtGlWidget, SIGNAL(zRotationAngleChanged(QString)), ui->zRotationText, SLOT(setText(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

