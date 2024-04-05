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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QTableWidget *tableIter;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineCapacity;
    QLabel *label_2;
    QLineEdit *lineMaxSize;
    QLabel *label_3;
    QLineEdit *lineSize;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QPushButton *buttonClear;
    QPushButton *buttonAt;
    QPushButton *buttonPopBack;
    QPushButton *buttonReserve;
    QPushButton *buttonPushBack;
    QPushButton *buttonResize;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(743, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 20, 261, 331));
        tableIter = new QTableWidget(centralwidget);
        if (tableIter->columnCount() < 1)
            tableIter->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableIter->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableIter->rowCount() < 10)
            tableIter->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableIter->setVerticalHeaderItem(9, __qtablewidgetitem10);
        tableIter->setObjectName("tableIter");
        tableIter->setEnabled(false);
        tableIter->setGeometry(QRect(510, 10, 211, 321));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 161, 17));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(290, 20, 211, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineCapacity = new QLineEdit(widget);
        lineCapacity->setObjectName("lineCapacity");
        lineCapacity->setReadOnly(true);

        verticalLayout->addWidget(lineCapacity);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineMaxSize = new QLineEdit(widget);
        lineMaxSize->setObjectName("lineMaxSize");
        lineMaxSize->setReadOnly(true);

        verticalLayout->addWidget(lineMaxSize);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineSize = new QLineEdit(widget);
        lineSize->setObjectName("lineSize");
        lineSize->setReadOnly(true);

        verticalLayout->addWidget(lineSize);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(300, 240, 177, 89));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonClear = new QPushButton(widget1);
        buttonClear->setObjectName("buttonClear");

        gridLayout->addWidget(buttonClear, 0, 0, 1, 1);

        buttonAt = new QPushButton(widget1);
        buttonAt->setObjectName("buttonAt");

        gridLayout->addWidget(buttonAt, 0, 1, 1, 1);

        buttonPopBack = new QPushButton(widget1);
        buttonPopBack->setObjectName("buttonPopBack");

        gridLayout->addWidget(buttonPopBack, 1, 0, 1, 1);

        buttonReserve = new QPushButton(widget1);
        buttonReserve->setObjectName("buttonReserve");

        gridLayout->addWidget(buttonReserve, 1, 1, 1, 1);

        buttonPushBack = new QPushButton(widget1);
        buttonPushBack->setObjectName("buttonPushBack");

        gridLayout->addWidget(buttonPushBack, 2, 0, 1, 1);

        buttonResize = new QPushButton(widget1);
        buttonResize->setObjectName("buttonResize");

        gridLayout->addWidget(buttonResize, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 743, 22));
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
        QTableWidgetItem *___qtablewidgetitem = tableIter->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableIter->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "*begin()", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableIter->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "*end()", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableIter->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "*cbegin()", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableIter->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "*cend()", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableIter->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "*rbegin()", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableIter->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "*rend()", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableIter->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "empty()", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableIter->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "front()", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableIter->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "back()", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableIter->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "data()", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\265 \320\262\320\265\321\202\320\272\320\276\321\200\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "capacity:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "max_size:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "size", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "clear()", nullptr));
        buttonAt->setText(QCoreApplication::translate("MainWindow", "at()", nullptr));
        buttonPopBack->setText(QCoreApplication::translate("MainWindow", "pop_back()", nullptr));
        buttonReserve->setText(QCoreApplication::translate("MainWindow", "reserve()", nullptr));
        buttonPushBack->setText(QCoreApplication::translate("MainWindow", "push_back()", nullptr));
        buttonResize->setText(QCoreApplication::translate("MainWindow", "resize()", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
