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
#include <QtWidgets/QHBoxLayout>
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
    QHBoxLayout *horizontalLayout;
    QPushButton *square;
    QPushButton *rectangle;
    QPushButton *triangle;
    QPushButton *rhomb;
    QPushButton *circle;
    QPushButton *hexagon;
    QPushButton *star5;
    QPushButton *star6;
    QPushButton *star8;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMouseTracking(false);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        square = new QPushButton(centralwidget);
        square->setObjectName("square");

        horizontalLayout->addWidget(square);

        rectangle = new QPushButton(centralwidget);
        rectangle->setObjectName("rectangle");

        horizontalLayout->addWidget(rectangle);

        triangle = new QPushButton(centralwidget);
        triangle->setObjectName("triangle");

        horizontalLayout->addWidget(triangle);

        rhomb = new QPushButton(centralwidget);
        rhomb->setObjectName("rhomb");

        horizontalLayout->addWidget(rhomb);

        circle = new QPushButton(centralwidget);
        circle->setObjectName("circle");

        horizontalLayout->addWidget(circle);

        hexagon = new QPushButton(centralwidget);
        hexagon->setObjectName("hexagon");

        horizontalLayout->addWidget(hexagon);

        star5 = new QPushButton(centralwidget);
        star5->setObjectName("star5");

        horizontalLayout->addWidget(star5);

        star6 = new QPushButton(centralwidget);
        star6->setObjectName("star6");

        horizontalLayout->addWidget(star6);

        star8 = new QPushButton(centralwidget);
        star8->setObjectName("star8");

        horizontalLayout->addWidget(star8);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 3, 0, 1, 1);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lab1-2", nullptr));
        square->setText(QCoreApplication::translate("MainWindow", "\342\226\240", nullptr));
        rectangle->setText(QCoreApplication::translate("MainWindow", "\342\226\254", nullptr));
        triangle->setText(QCoreApplication::translate("MainWindow", "\342\226\262", nullptr));
        rhomb->setText(QCoreApplication::translate("MainWindow", "\342\247\253", nullptr));
        circle->setText(QCoreApplication::translate("MainWindow", "\342\227\217", nullptr));
        hexagon->setText(QCoreApplication::translate("MainWindow", "\342\254\243", nullptr));
        star5->setText(QCoreApplication::translate("MainWindow", "\342\230\205", nullptr));
        star6->setText(QCoreApplication::translate("MainWindow", "\342\234\241", nullptr));
        star8->setText(QCoreApplication::translate("MainWindow", "\342\234\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
