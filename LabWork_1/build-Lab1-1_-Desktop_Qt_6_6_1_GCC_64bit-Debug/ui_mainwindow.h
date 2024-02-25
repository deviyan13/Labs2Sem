/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *addSpeed;
    QPushButton *stopMoving;
    QGraphicsView *graphicsView;
    QPushButton *startMoving;
    QPushButton *deductSpeed;
    QLabel *speed;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        addSpeed = new QPushButton(centralwidget);
        addSpeed->setObjectName("addSpeed");

        gridLayout->addWidget(addSpeed, 2, 0, 1, 1);

        stopMoving = new QPushButton(centralwidget);
        stopMoving->setObjectName("stopMoving");
        stopMoving->setEnabled(true);

        gridLayout->addWidget(stopMoving, 1, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        gridLayout->addWidget(graphicsView, 5, 0, 1, 1);

        startMoving = new QPushButton(centralwidget);
        startMoving->setObjectName("startMoving");

        gridLayout->addWidget(startMoving, 0, 0, 1, 1);

        deductSpeed = new QPushButton(centralwidget);
        deductSpeed->setObjectName("deductSpeed");

        gridLayout->addWidget(deductSpeed, 3, 0, 1, 1);

        speed = new QLabel(centralwidget);
        speed->setObjectName("speed");
        speed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(speed, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lab1-1", nullptr));
        addSpeed->setText(QCoreApplication::translate("MainWindow", "add speed", nullptr));
        stopMoving->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        startMoving->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        deductSpeed->setText(QCoreApplication::translate("MainWindow", "deduct speed", nullptr));
        speed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
