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
    QSpinBox *insertKey;
    QLineEdit *insertValue;
    QPushButton *insertButton;
    QPushButton *removeButton;
    QPushButton *getButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *getValue;
    QLabel *label_4;
    QPushButton *removeEvenKeys;
    QPushButton *insertButton_2;
    QSpinBox *countGenerate;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 503);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 30, 391, 421));
        insertKey = new QSpinBox(centralwidget);
        insertKey->setObjectName("insertKey");
        insertKey->setGeometry(QRect(430, 90, 111, 26));
        insertKey->setMinimum(0);
        insertKey->setMaximum(1000000000);
        insertValue = new QLineEdit(centralwidget);
        insertValue->setObjectName("insertValue");
        insertValue->setGeometry(QRect(550, 90, 113, 25));
        insertButton = new QPushButton(centralwidget);
        insertButton->setObjectName("insertButton");
        insertButton->setGeometry(QRect(680, 90, 88, 25));
        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(680, 130, 88, 25));
        getButton = new QPushButton(centralwidget);
        getButton->setObjectName("getButton");
        getButton->setGeometry(QRect(680, 160, 88, 25));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 70, 66, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(430, 70, 66, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(430, 160, 111, 21));
        getValue = new QLineEdit(centralwidget);
        getValue->setObjectName("getValue");
        getValue->setGeometry(QRect(550, 160, 113, 25));
        getValue->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 10, 171, 21));
        removeEvenKeys = new QPushButton(centralwidget);
        removeEvenKeys->setObjectName("removeEvenKeys");
        removeEvenKeys->setGeometry(QRect(617, 280, 151, 25));
        insertButton_2 = new QPushButton(centralwidget);
        insertButton_2->setObjectName("insertButton_2");
        insertButton_2->setGeometry(QRect(600, 390, 88, 25));
        countGenerate = new QSpinBox(centralwidget);
        countGenerate->setObjectName("countGenerate");
        countGenerate->setGeometry(QRect(440, 390, 131, 26));
        countGenerate->setMinimum(0);
        countGenerate->setMaximum(1000);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(440, 370, 131, 17));
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
        insertButton->setText(QCoreApplication::translate("MainWindow", "insert()", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "remove()", nullptr));
        getButton->setText(QCoreApplication::translate("MainWindow", "get()", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "key", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Received value:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\265\320\272\320\270 \321\205\320\265\321\210-\321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
        removeEvenKeys->setText(QCoreApplication::translate("MainWindow", "deleteAllEvenKeys()", nullptr));
        insertButton_2->setText(QCoreApplication::translate("MainWindow", "generate", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
