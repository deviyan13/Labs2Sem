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
    QPushButton *insertButton;
    QPushButton *extractMax;
    QPushButton *getMaxButton;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(603, 336);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(40, 70, 256, 192));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(340, 110, 111, 26));
        spinBox->setMinimum(-1000000000);
        spinBox->setMaximum(1000000000);
        insertButton = new QPushButton(centralwidget);
        insertButton->setObjectName("insertButton");
        insertButton->setGeometry(QRect(480, 110, 88, 25));
        extractMax = new QPushButton(centralwidget);
        extractMax->setObjectName("extractMax");
        extractMax->setGeometry(QRect(480, 140, 88, 25));
        getMaxButton = new QPushButton(centralwidget);
        getMaxButton->setObjectName("getMaxButton");
        getMaxButton->setGeometry(QRect(480, 170, 88, 25));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 91, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 90, 66, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 603, 22));
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
        insertButton->setText(QCoreApplication::translate("MainWindow", "insert", nullptr));
        extractMax->setText(QCoreApplication::translate("MainWindow", "extractMax", nullptr));
        getMaxButton->setText(QCoreApplication::translate("MainWindow", "getMax", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Binary Heap", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
