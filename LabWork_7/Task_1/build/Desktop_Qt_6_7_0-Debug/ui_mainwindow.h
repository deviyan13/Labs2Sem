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
#include <QtWidgets/QFormLayout>
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
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushQ1;
    QPushButton *popQ1;
    QLabel *label_4;
    QPushButton *popQ2;
    QListWidget *listWidget2;
    QPushButton *pushQ2;
    QWidget *layoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLabel *emptyQ2;
    QLabel *label_8;
    QLabel *sizeQ2;
    QLabel *label_9;
    QLabel *backQ2;
    QLabel *label_10;
    QLabel *frontQ2;
    QSpinBox *spinBox_2;
    QPushButton *genQ1;
    QPushButton *genQ2;
    QPushButton *insertButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *emptyQ1;
    QLabel *label_3;
    QLabel *sizeQ1;
    QLabel *label_6;
    QLabel *backQ1;
    QLabel *label_5;
    QLabel *frontQ1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(993, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 50, 231, 321));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 91, 17));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(310, 250, 81, 26));
        spinBox->setMinimum(-1000000);
        spinBox->setMaximum(1000000);
        pushQ1 = new QPushButton(centralwidget);
        pushQ1->setObjectName("pushQ1");
        pushQ1->setGeometry(QRect(400, 250, 88, 25));
        popQ1 = new QPushButton(centralwidget);
        popQ1->setObjectName("popQ1");
        popQ1->setGeometry(QRect(400, 290, 88, 25));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(540, 20, 91, 17));
        popQ2 = new QPushButton(centralwidget);
        popQ2->setObjectName("popQ2");
        popQ2->setGeometry(QRect(890, 290, 88, 25));
        listWidget2 = new QListWidget(centralwidget);
        listWidget2->setObjectName("listWidget2");
        listWidget2->setGeometry(QRect(540, 50, 231, 321));
        pushQ2 = new QPushButton(centralwidget);
        pushQ2->setObjectName("pushQ2");
        pushQ2->setGeometry(QRect(890, 250, 88, 25));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(800, 60, 128, 88));
        formLayout_2 = new QFormLayout(layoutWidget);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        emptyQ2 = new QLabel(layoutWidget);
        emptyQ2->setObjectName("emptyQ2");
        emptyQ2->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, emptyQ2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        sizeQ2 = new QLabel(layoutWidget);
        sizeQ2->setObjectName("sizeQ2");
        sizeQ2->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sizeQ2);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        backQ2 = new QLabel(layoutWidget);
        backQ2->setObjectName("backQ2");
        backQ2->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, backQ2);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_10);

        frontQ2 = new QLabel(layoutWidget);
        frontQ2->setObjectName("frontQ2");
        frontQ2->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, frontQ2);

        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(800, 250, 81, 26));
        spinBox_2->setMinimum(-1000000);
        spinBox_2->setMaximum(1000000);
        genQ1 = new QPushButton(centralwidget);
        genQ1->setObjectName("genQ1");
        genQ1->setGeometry(QRect(20, 380, 291, 61));
        genQ2 = new QPushButton(centralwidget);
        genQ2->setObjectName("genQ2");
        genQ2->setGeometry(QRect(510, 380, 291, 61));
        insertButton = new QPushButton(centralwidget);
        insertButton->setObjectName("insertButton");
        insertButton->setGeometry(QRect(270, 470, 291, 61));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(310, 60, 128, 88));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        emptyQ1 = new QLabel(widget);
        emptyQ1->setObjectName("emptyQ1");
        emptyQ1->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, emptyQ1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        sizeQ1 = new QLabel(widget);
        sizeQ1->setObjectName("sizeQ1");
        sizeQ1->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, sizeQ1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        backQ1 = new QLabel(widget);
        backQ1->setObjectName("backQ1");
        backQ1->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, backQ1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        frontQ1 = new QLabel(widget);
        frontQ1->setObjectName("frontQ1");
        frontQ1->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, frontQ1);

        MainWindow->setCentralWidget(centralwidget);
        pushQ2->raise();
        listWidget->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        spinBox->raise();
        pushQ1->raise();
        popQ1->raise();
        emptyQ1->raise();
        sizeQ1->raise();
        frontQ1->raise();
        backQ1->raise();
        label_4->raise();
        popQ2->raise();
        listWidget2->raise();
        layoutWidget->raise();
        spinBox_2->raise();
        genQ1->raise();
        genQ2->raise();
        insertButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 993, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Task_1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\265\321\200\320\265\320\264\321\214 1", nullptr));
        pushQ1->setText(QCoreApplication::translate("MainWindow", "push()", nullptr));
        popQ1->setText(QCoreApplication::translate("MainWindow", "pop()", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\265\321\200\320\265\320\264\321\214 2", nullptr));
        popQ2->setText(QCoreApplication::translate("MainWindow", "pop()", nullptr));
        pushQ2->setText(QCoreApplication::translate("MainWindow", "push()", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "empty()", nullptr));
        emptyQ2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "size()", nullptr));
        sizeQ2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "back()", nullptr));
        backQ2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "front()", nullptr));
        frontQ2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        genQ1->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\274\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\320\274\320\270", nullptr));
        genQ2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\274\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\320\274\320\270", nullptr));
        insertButton->setText(QCoreApplication::translate("MainWindow", "Q1.insertAfterMax(Q2);", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "empty()", nullptr));
        emptyQ1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "size()", nullptr));
        sizeQ1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "back()", nullptr));
        backQ1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "front()", nullptr));
        frontQ1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
