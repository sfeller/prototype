/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "aqtglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMeasurement;
    QAction *actionSlice;
    QAction *action3D_Volume;
    QAction *actionOpen;
    QAction *actionOpen_Recent;
    QAction *actionSave;
    QAction *actionPrint;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QScrollBar *xAxisRotScrollBar;
    QScrollBar *yAxisRotScrollBar;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QRadioButton *radioButton;
    QSpacerItem *verticalSpacer;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLineEdit *yRotationText;
    QFrame *line;
    QLabel *label;
    QDial *zAxisDial;
    QLineEdit *xRotationText;
    QLineEdit *zRotationText;
    AqtGlWidget *aqtGlWidget;
    QMenuBar *menuBar;
    QMenu *menuVLCI;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionMeasurement = new QAction(MainWindow);
        actionMeasurement->setObjectName(QStringLiteral("actionMeasurement"));
        actionSlice = new QAction(MainWindow);
        actionSlice->setObjectName(QStringLiteral("actionSlice"));
        action3D_Volume = new QAction(MainWindow);
        action3D_Volume->setObjectName(QStringLiteral("action3D_Volume"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen_Recent = new QAction(MainWindow);
        actionOpen_Recent->setObjectName(QStringLiteral("actionOpen_Recent"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        xAxisRotScrollBar = new QScrollBar(centralWidget);
        xAxisRotScrollBar->setObjectName(QStringLiteral("xAxisRotScrollBar"));
        xAxisRotScrollBar->setMinimum(-360);
        xAxisRotScrollBar->setMaximum(360);
        xAxisRotScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(xAxisRotScrollBar, 1, 2, 1, 1);

        yAxisRotScrollBar = new QScrollBar(centralWidget);
        yAxisRotScrollBar->setObjectName(QStringLiteral("yAxisRotScrollBar"));
        yAxisRotScrollBar->setMinimum(-360);
        yAxisRotScrollBar->setMaximum(360);
        yAxisRotScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(yAxisRotScrollBar, 2, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 4, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_2->addWidget(radioButton, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 11, 0, 1, 1);

        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout_2->addWidget(radioButton_3, 5, 0, 1, 1);

        radioButton_4 = new QRadioButton(centralWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout_2->addWidget(radioButton_4, 6, 0, 1, 1);

        yRotationText = new QLineEdit(centralWidget);
        yRotationText->setObjectName(QStringLiteral("yRotationText"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(yRotationText->sizePolicy().hasHeightForWidth());
        yRotationText->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(yRotationText, 9, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        zAxisDial = new QDial(centralWidget);
        zAxisDial->setObjectName(QStringLiteral("zAxisDial"));
        zAxisDial->setMinimum(-360);
        zAxisDial->setMaximum(360);
        zAxisDial->setWrapping(true);

        gridLayout_2->addWidget(zAxisDial, 7, 0, 1, 1);

        xRotationText = new QLineEdit(centralWidget);
        xRotationText->setObjectName(QStringLiteral("xRotationText"));
        sizePolicy1.setHeightForWidth(xRotationText->sizePolicy().hasHeightForWidth());
        xRotationText->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(xRotationText, 8, 0, 1, 1);

        zRotationText = new QLineEdit(centralWidget);
        zRotationText->setObjectName(QStringLiteral("zRotationText"));
        sizePolicy1.setHeightForWidth(zRotationText->sizePolicy().hasHeightForWidth());
        zRotationText->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(zRotationText, 10, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 3, 1, 1);

        aqtGlWidget = new AqtGlWidget(centralWidget);
        aqtGlWidget->setObjectName(QStringLiteral("aqtGlWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(aqtGlWidget->sizePolicy().hasHeightForWidth());
        aqtGlWidget->setSizePolicy(sizePolicy3);
        aqtGlWidget->setAutoFillBackground(false);
        aqtGlWidget->setStyleSheet(QStringLiteral("background-color: rgb(122, 122, 122);"));

        gridLayout->addWidget(aqtGlWidget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 25));
        menuVLCI = new QMenu(menuBar);
        menuVLCI->setObjectName(QStringLiteral("menuVLCI"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuVLCI->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuVLCI->addAction(actionOpen);
        menuVLCI->addAction(actionOpen_Recent);
        menuVLCI->addAction(actionSave);
        menuVLCI->addAction(actionPrint);
        menuView->addAction(actionMeasurement);
        menuView->addAction(actionSlice);
        menuView->addAction(action3D_Volume);

        retranslateUi(MainWindow);
        QObject::connect(yAxisRotScrollBar, SIGNAL(sliderMoved(int)), aqtGlWidget, SLOT(setYRotation(int)));
        QObject::connect(zAxisDial, SIGNAL(sliderMoved(int)), aqtGlWidget, SLOT(setZRotation(int)));
        QObject::connect(xAxisRotScrollBar, SIGNAL(sliderMoved(int)), aqtGlWidget, SLOT(setXRotation(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionMeasurement->setText(QApplication::translate("MainWindow", "Measurement", 0));
        actionSlice->setText(QApplication::translate("MainWindow", "Slice", 0));
        action3D_Volume->setText(QApplication::translate("MainWindow", "3D Volume", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionOpen_Recent->setText(QApplication::translate("MainWindow", "Open Recent", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Measurement Data", 0));
        label_2->setText(QApplication::translate("MainWindow", "Dataset", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Transmission Image", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "Reconstruction Data", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "Analysis Image", 0));
        label->setText(QApplication::translate("MainWindow", "VLCI Processing", 0));
        menuVLCI->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
