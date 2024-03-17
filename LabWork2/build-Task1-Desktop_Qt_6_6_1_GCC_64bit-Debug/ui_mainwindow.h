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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *outputDatesButton;
    QPushButton *outputNextDayButton;
    QPushButton *outputPreviousDayButton;
    QPushButton *outputDaysTillBDButton;
    QPushButton *outputDurationToNextButton;
    QPushButton *outputLeapDatesButton;
    QPushButton *outputWeekNumbersButton;
    QSpacerItem *verticalSpacer;
    QPushButton *outputFullFilebutton;
    QPushButton *inputBDdutton;
    QPushButton *clearTableButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QPushButton *addNewDateButton;
    QPushButton *openFilebutton;
    QPushButton *closeFileButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1158, 695);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName("tableWidget");
        QPalette palette;
        QBrush brush(QColor(119, 118, 123, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        tableWidget->setPalette(palette);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->setRowCount(1);
        tableWidget->setColumnCount(5);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush2(QColor(154, 153, 150, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(36, 31, 49, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        label->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(false);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setFrameShape(QFrame::WinPanel);
        label->setLineWidth(2);
        label->setMidLineWidth(0);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        outputDatesButton = new QPushButton(centralwidget);
        outputDatesButton->setObjectName("outputDatesButton");
        QFont font1;
        font1.setBold(true);
        outputDatesButton->setFont(font1);

        verticalLayout->addWidget(outputDatesButton);

        outputNextDayButton = new QPushButton(centralwidget);
        outputNextDayButton->setObjectName("outputNextDayButton");

        verticalLayout->addWidget(outputNextDayButton);

        outputPreviousDayButton = new QPushButton(centralwidget);
        outputPreviousDayButton->setObjectName("outputPreviousDayButton");

        verticalLayout->addWidget(outputPreviousDayButton);

        outputDaysTillBDButton = new QPushButton(centralwidget);
        outputDaysTillBDButton->setObjectName("outputDaysTillBDButton");

        verticalLayout->addWidget(outputDaysTillBDButton);

        outputDurationToNextButton = new QPushButton(centralwidget);
        outputDurationToNextButton->setObjectName("outputDurationToNextButton");

        verticalLayout->addWidget(outputDurationToNextButton);

        outputLeapDatesButton = new QPushButton(centralwidget);
        outputLeapDatesButton->setObjectName("outputLeapDatesButton");

        verticalLayout->addWidget(outputLeapDatesButton);

        outputWeekNumbersButton = new QPushButton(centralwidget);
        outputWeekNumbersButton->setObjectName("outputWeekNumbersButton");

        verticalLayout->addWidget(outputWeekNumbersButton);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        outputFullFilebutton = new QPushButton(centralwidget);
        outputFullFilebutton->setObjectName("outputFullFilebutton");
        QFont font2;
        font2.setBold(false);
        font2.setUnderline(false);
        outputFullFilebutton->setFont(font2);

        verticalLayout->addWidget(outputFullFilebutton);

        inputBDdutton = new QPushButton(centralwidget);
        inputBDdutton->setObjectName("inputBDdutton");
        QFont font3;
        font3.setBold(false);
        inputBDdutton->setFont(font3);

        verticalLayout->addWidget(inputBDdutton);

        clearTableButton = new QPushButton(centralwidget);
        clearTableButton->setObjectName("clearTableButton");

        verticalLayout->addWidget(clearTableButton);

        verticalSpacer_2 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        label_2->setPalette(palette2);
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        label_2->setFont(font4);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setFrameShape(QFrame::WinPanel);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setLineWidth(2);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        addNewDateButton = new QPushButton(centralwidget);
        addNewDateButton->setObjectName("addNewDateButton");
        addNewDateButton->setFont(font1);

        verticalLayout->addWidget(addNewDateButton);

        openFilebutton = new QPushButton(centralwidget);
        openFilebutton->setObjectName("openFilebutton");
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(true);
        openFilebutton->setFont(font5);

        verticalLayout->addWidget(openFilebutton);

        closeFileButton = new QPushButton(centralwidget);
        closeFileButton->setObjectName("closeFileButton");
        closeFileButton->setFont(font5);

        verticalLayout->addWidget(closeFileButton);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1158, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LabWork2_Task1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\253\320\222\320\236\320\224 \320\224\320\220\320\235\320\235\320\253\320\245", nullptr));
        outputDatesButton->setText(QCoreApplication::translate("MainWindow", " \320\224\320\260\321\202\321\213 \321\201 \321\204\320\260\320\271\320\273\320\260", nullptr));
        outputNextDayButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271 \320\264\320\265\320\275\321\214\n"
"\320\264\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\271 \320\264\320\260\321\202\321\213", nullptr));
        outputPreviousDayButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \320\264\320\265\320\275\321\214\n"
"\320\264\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\271 \320\264\320\260\321\202\321\213", nullptr));
        outputDaysTillBDButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\264\320\275\320\265\320\271 \320\264\320\276\n"
"\320\262\320\260\321\210\320\265\320\263\320\276 \320\264\320\275\321\217 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        outputDurationToNextButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\264\320\275\320\265\320\271 \320\264\320\276 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\263\320\276\n"
"\320\264\320\275\321\217 \320\264\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\271 \320\264\320\260\321\202\321\213", nullptr));
        outputLeapDatesButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\201\320\276\320\272\320\276\321\201\320\275\320\276\321\201\321\202\321\214 \320\272\320\260\320\266\320\264\320\276\320\271 \320\264\320\260\321\202\321\213", nullptr));
        outputWeekNumbersButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200\320\260 \320\275\320\265\320\264\320\265\320\273\321\214 \320\262 \320\263\320\276\320\264\321\203", nullptr));
        outputFullFilebutton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \321\201 \321\204\320\260\320\271\320\273\320\260\n"
"\320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        inputBDdutton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\264\320\260\321\202\321\203 \320\264\320\275\321\217 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        clearTableButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\220\320\221\320\236\320\242\320\220 \320\241 \320\244\320\220\320\231\320\233\320\236\320\234", nullptr));
        addNewDateButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\321\202\321\203 \320\262 \320\272\320\276\320\275\320\265\321\206 \321\204\320\260\320\271\320\273\320\260", nullptr));
        openFilebutton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        closeFileButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
