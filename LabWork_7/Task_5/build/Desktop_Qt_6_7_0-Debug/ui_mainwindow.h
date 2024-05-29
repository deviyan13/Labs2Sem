/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QSpinBox *spinBox;
    QPushButton *push_backButton;
    QPushButton *push_frontButton;
    QPushButton *pop_frontButton;
    QPushButton *pop_backButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineSize;
    QLineEdit *lineEmpty;
    QPushButton *clearButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 40, 461, 431));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(510, 70, 121, 31));
        push_backButton = new QPushButton(centralwidget);
        push_backButton->setObjectName("push_backButton");
        push_backButton->setGeometry(QRect(640, 50, 101, 31));
        push_frontButton = new QPushButton(centralwidget);
        push_frontButton->setObjectName("push_frontButton");
        push_frontButton->setGeometry(QRect(640, 90, 101, 31));
        pop_frontButton = new QPushButton(centralwidget);
        pop_frontButton->setObjectName("pop_frontButton");
        pop_frontButton->setGeometry(QRect(640, 210, 101, 31));
        pop_backButton = new QPushButton(centralwidget);
        pop_backButton->setObjectName("pop_backButton");
        pop_backButton->setGeometry(QRect(640, 170, 101, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(510, 330, 66, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 390, 66, 17));
        lineSize = new QLineEdit(centralwidget);
        lineSize->setObjectName("lineSize");
        lineSize->setGeometry(QRect(510, 350, 113, 25));
        lineSize->setReadOnly(true);
        lineEmpty = new QLineEdit(centralwidget);
        lineEmpty->setObjectName("lineEmpty");
        lineEmpty->setGeometry(QRect(510, 410, 113, 25));
        lineEmpty->setReadOnly(true);
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(640, 250, 101, 31));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        push_backButton->setText(QCoreApplication::translate("MainWindow", "push_back()", nullptr));
        push_frontButton->setText(QCoreApplication::translate("MainWindow", "push_front()", nullptr));
        pop_frontButton->setText(QCoreApplication::translate("MainWindow", "pop_front()", nullptr));
        pop_backButton->setText(QCoreApplication::translate("MainWindow", "pop_back()", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Empty", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "clear()", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
