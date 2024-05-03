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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *beginButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QComboBox *comboMode;
    QWidget *widgetForKeyboard;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QComboBox *comboLanguage;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *labelTimer;
    QLabel *labelWords;
    QLabel *labelPrecision;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1019, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(1100, 560));
        centralwidget->setMaximumSize(QSize(1100, 560));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMouseTracking(false);
        widget->setAutoFillBackground(false);
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 100, 771, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        beginButton = new QPushButton(widget);
        beginButton->setObjectName("beginButton");
        beginButton->setGeometry(QRect(840, 300, 141, 41));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(830, 220, 161, 61));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans")});
        font.setBold(true);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        comboMode = new QComboBox(layoutWidget);
        comboMode->setObjectName("comboMode");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboMode->sizePolicy().hasHeightForWidth());
        comboMode->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(comboMode);

        widgetForKeyboard = new QWidget(widget);
        widgetForKeyboard->setObjectName("widgetForKeyboard");
        widgetForKeyboard->setEnabled(true);
        widgetForKeyboard->setGeometry(QRect(0, 270, 781, 271));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetForKeyboard->sizePolicy().hasHeightForWidth());
        widgetForKeyboard->setSizePolicy(sizePolicy2);
        widgetForKeyboard->setStyleSheet(QString::fromUtf8(""));
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(830, 160, 161, 61));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        comboLanguage = new QComboBox(layoutWidget1);
        comboLanguage->setObjectName("comboLanguage");
        sizePolicy1.setHeightForWidth(comboLanguage->sizePolicy().hasHeightForWidth());
        comboLanguage->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(comboLanguage);

        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(220, 30, 351, 61));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName("label");
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        labelTimer = new QLabel(layoutWidget2);
        labelTimer->setObjectName("labelTimer");
        QFont font1;
        font1.setPointSize(16);
        labelTimer->setFont(font1);
        labelTimer->setFrameShape(QFrame::Box);
        labelTimer->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelTimer, 1, 0, 1, 1);

        labelWords = new QLabel(layoutWidget2);
        labelWords->setObjectName("labelWords");
        labelWords->setFont(font1);
        labelWords->setFrameShape(QFrame::Box);
        labelWords->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelWords, 1, 1, 1, 1);

        labelPrecision = new QLabel(layoutWidget2);
        labelPrecision->setObjectName("labelPrecision");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelPrecision->sizePolicy().hasHeightForWidth());
        labelPrecision->setSizePolicy(sizePolicy4);
        labelPrecision->setFont(font1);
        labelPrecision->setFrameShape(QFrame::Box);
        labelPrecision->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelPrecision, 1, 2, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1019, 22));
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
        beginButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Mode", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Language", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Accuracy", nullptr));
        labelTimer->setText(QCoreApplication::translate("MainWindow", "00:00.000", nullptr));
        labelWords->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        labelPrecision->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
