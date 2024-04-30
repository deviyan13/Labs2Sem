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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widgetForKeyboard;
    QWidget *widget;
    QComboBox *comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *openFileButton;
    QPushButton *beginButton;
    QLabel *labelTimer;
    QLabel *labelWords;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widgetForKeyboard = new QWidget(centralwidget);
        widgetForKeyboard->setObjectName("widgetForKeyboard");
        widgetForKeyboard->setStyleSheet(QString::fromUtf8("background-color:rgb(87, 227, 137)"));

        gridLayout->addWidget(widgetForKeyboard, 1, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMouseTracking(false);
        widget->setAutoFillBackground(false);
        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(450, 220, 171, 31));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 90, 781, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName("textEdit");
        QFont font;
        font.setPointSize(16);
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        openFileButton = new QPushButton(widget);
        openFileButton->setObjectName("openFileButton");
        openFileButton->setGeometry(QRect(640, 220, 121, 31));
        beginButton = new QPushButton(widget);
        beginButton->setObjectName("beginButton");
        beginButton->setGeometry(QRect(600, 30, 88, 25));
        labelTimer = new QLabel(widget);
        labelTimer->setObjectName("labelTimer");
        labelTimer->setGeometry(QRect(50, 30, 121, 31));
        labelTimer->setFrameShape(QFrame::Box);
        labelTimer->setAlignment(Qt::AlignCenter);
        labelWords = new QLabel(widget);
        labelWords->setObjectName("labelWords");
        labelWords->setGeometry(QRect(220, 30, 121, 31));
        labelWords->setFrameShape(QFrame::Box);
        labelWords->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(widget, 0, 0, 1, 1);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Task_1", nullptr));
        openFileButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        beginButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelTimer->setText(QCoreApplication::translate("MainWindow", "00:00.000", nullptr));
        labelWords->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
