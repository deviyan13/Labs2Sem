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
#include <QtWidgets/QFrame>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineCapacity;
    QLabel *label_2;
    QLineEdit *lineMaxSize;
    QLabel *label_3;
    QLineEdit *lineSize;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *buttonClear;
    QPushButton *buttonAt;
    QPushButton *buttonPopBack;
    QPushButton *buttonReserve;
    QPushButton *buttonPushBack;
    QPushButton *buttonResize;
    QFrame *line;
    QTableWidget *matrix;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(743, 684);
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
        label_4->setGeometry(QRect(10, 0, 251, 17));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(290, 20, 211, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineCapacity = new QLineEdit(layoutWidget);
        lineCapacity->setObjectName("lineCapacity");
        lineCapacity->setReadOnly(true);

        verticalLayout->addWidget(lineCapacity);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineMaxSize = new QLineEdit(layoutWidget);
        lineMaxSize->setObjectName("lineMaxSize");
        lineMaxSize->setReadOnly(true);

        verticalLayout->addWidget(lineMaxSize);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineSize = new QLineEdit(layoutWidget);
        lineSize->setObjectName("lineSize");
        lineSize->setReadOnly(true);

        verticalLayout->addWidget(lineSize);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(300, 240, 177, 89));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonClear = new QPushButton(layoutWidget1);
        buttonClear->setObjectName("buttonClear");

        gridLayout->addWidget(buttonClear, 0, 0, 1, 1);

        buttonAt = new QPushButton(layoutWidget1);
        buttonAt->setObjectName("buttonAt");

        gridLayout->addWidget(buttonAt, 0, 1, 1, 1);

        buttonPopBack = new QPushButton(layoutWidget1);
        buttonPopBack->setObjectName("buttonPopBack");

        gridLayout->addWidget(buttonPopBack, 1, 0, 1, 1);

        buttonReserve = new QPushButton(layoutWidget1);
        buttonReserve->setObjectName("buttonReserve");

        gridLayout->addWidget(buttonReserve, 1, 1, 1, 1);

        buttonPushBack = new QPushButton(layoutWidget1);
        buttonPushBack->setObjectName("buttonPushBack");

        gridLayout->addWidget(buttonPushBack, 2, 0, 1, 1);

        buttonResize = new QPushButton(layoutWidget1);
        buttonResize->setObjectName("buttonResize");

        gridLayout->addWidget(buttonResize, 2, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(-30, 350, 811, 45));
        line->setLineWidth(5);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        matrix = new QTableWidget(centralwidget);
        if (matrix->columnCount() < 2)
            matrix->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        matrix->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        matrix->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        matrix->setObjectName("matrix");
        matrix->setGeometry(QRect(30, 420, 681, 192));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 400, 331, 17));
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
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\321\213\320\271 \320\260\321\200\320\263\321\203\320\274\320\265\320\275\321\202 pair (vector<int>)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "capacity:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "max_size:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "size", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "clear()", nullptr));
        buttonAt->setText(QCoreApplication::translate("MainWindow", "at()", nullptr));
        buttonPopBack->setText(QCoreApplication::translate("MainWindow", "pop_back()", nullptr));
        buttonReserve->setText(QCoreApplication::translate("MainWindow", "reserve()", nullptr));
        buttonPushBack->setText(QCoreApplication::translate("MainWindow", "push_back()", nullptr));
        buttonResize->setText(QCoreApplication::translate("MainWindow", "resize()", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = matrix->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "int", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = matrix->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "double", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\260\321\200\320\263\321\203\320\274\320\265\320\275\321\202 pair (vector <pair<int,double>>)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
