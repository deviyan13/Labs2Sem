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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QListWidget *listWidget;
    QLabel *label_11;
    QWidget *layoutWidget;
    QFormLayout *marks;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QLineEdit *lineAvgMark;
    QSpinBox *spinMatan;
    QSpinBox *spinOAIP;
    QSpinBox *spinAgila;
    QSpinBox *spinHist;
    QSpinBox *spinDM;
    QWidget *layoutWidget1;
    QFormLayout *info;
    QLabel *label;
    QLineEdit *lineName;
    QLabel *label_9;
    QComboBox *comboFaculty;
    QLabel *label_13;
    QComboBox *comboSpeciality;
    QLabel *label_10;
    QComboBox *comboGroup;
    QWidget *layoutWidget2;
    QVBoxLayout *buttons;
    QPushButton *addButton;
    QPushButton *sortButton;
    QPushButton *findButton;
    QPushButton *openButton;
    QPushButton *saveButton;
    QPushButton *acceptAdding;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(918, 620);
        MainWindow->setMinimumSize(QSize(0, 620));
        MainWindow->setMaximumSize(QSize(1000000, 10000));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 180, 121, 31));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        label_2->setFont(font);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setEnabled(false);
        listWidget->setGeometry(QRect(430, 70, 471, 291));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(430, 40, 191, 25));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_11->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 220, 332, 281));
        marks = new QFormLayout(layoutWidget);
        marks->setObjectName("marks");
        marks->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setBold(true);
        label_3->setFont(font2);

        marks->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        marks->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        marks->setWidget(2, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);

        marks->setWidget(3, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);

        marks->setWidget(4, QFormLayout::LabelRole, label_7);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        marks->setItem(5, QFormLayout::LabelRole, verticalSpacer);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);

        marks->setWidget(6, QFormLayout::LabelRole, label_8);

        lineAvgMark = new QLineEdit(layoutWidget);
        lineAvgMark->setObjectName("lineAvgMark");
        lineAvgMark->setEnabled(true);
        lineAvgMark->setFrame(true);
        lineAvgMark->setReadOnly(true);

        marks->setWidget(6, QFormLayout::FieldRole, lineAvgMark);

        spinMatan = new QSpinBox(layoutWidget);
        spinMatan->setObjectName("spinMatan");
        spinMatan->setEnabled(false);
        spinMatan->setMaximum(10);
        spinMatan->setValue(1);

        marks->setWidget(0, QFormLayout::FieldRole, spinMatan);

        spinOAIP = new QSpinBox(layoutWidget);
        spinOAIP->setObjectName("spinOAIP");
        spinOAIP->setEnabled(false);
        spinOAIP->setMaximum(10);
        spinOAIP->setValue(1);

        marks->setWidget(1, QFormLayout::FieldRole, spinOAIP);

        spinAgila = new QSpinBox(layoutWidget);
        spinAgila->setObjectName("spinAgila");
        spinAgila->setEnabled(false);
        spinAgila->setMaximum(10);
        spinAgila->setValue(1);

        marks->setWidget(2, QFormLayout::FieldRole, spinAgila);

        spinHist = new QSpinBox(layoutWidget);
        spinHist->setObjectName("spinHist");
        spinHist->setEnabled(false);
        spinHist->setMaximum(10);
        spinHist->setValue(1);

        marks->setWidget(3, QFormLayout::FieldRole, spinHist);

        spinDM = new QSpinBox(layoutWidget);
        spinDM->setObjectName("spinDM");
        spinDM->setEnabled(false);
        spinDM->setMaximum(10);
        spinDM->setValue(1);

        marks->setWidget(4, QFormLayout::FieldRole, spinDM);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 40, 401, 162));
        info = new QFormLayout(layoutWidget1);
        info->setObjectName("info");
        info->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        label->setFont(font1);

        info->setWidget(0, QFormLayout::LabelRole, label);

        lineName = new QLineEdit(layoutWidget1);
        lineName->setObjectName("lineName");
        lineName->setEnabled(false);

        info->setWidget(0, QFormLayout::FieldRole, lineName);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);

        info->setWidget(1, QFormLayout::LabelRole, label_9);

        comboFaculty = new QComboBox(layoutWidget1);
        comboFaculty->setObjectName("comboFaculty");
        comboFaculty->setEnabled(false);

        info->setWidget(1, QFormLayout::FieldRole, comboFaculty);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        info->setWidget(2, QFormLayout::LabelRole, label_13);

        comboSpeciality = new QComboBox(layoutWidget1);
        comboSpeciality->setObjectName("comboSpeciality");
        comboSpeciality->setEnabled(false);

        info->setWidget(2, QFormLayout::FieldRole, comboSpeciality);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);

        info->setWidget(3, QFormLayout::LabelRole, label_10);

        comboGroup = new QComboBox(layoutWidget1);
        comboGroup->setObjectName("comboGroup");
        comboGroup->setEnabled(false);

        info->setWidget(3, QFormLayout::FieldRole, comboGroup);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(700, 370, 191, 215));
        buttons = new QVBoxLayout(layoutWidget2);
        buttons->setSpacing(6);
        buttons->setObjectName("buttons");
        buttons->setSizeConstraint(QLayout::SetDefaultConstraint);
        buttons->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(layoutWidget2);
        addButton->setObjectName("addButton");
        addButton->setEnabled(false);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("list-add")));
        addButton->setIcon(icon);

        buttons->addWidget(addButton);

        sortButton = new QPushButton(layoutWidget2);
        sortButton->setObjectName("sortButton");
        sortButton->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("go-bottom")));
        sortButton->setIcon(icon1);

        buttons->addWidget(sortButton);

        findButton = new QPushButton(layoutWidget2);
        findButton->setObjectName("findButton");
        findButton->setEnabled(false);
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-find")));
        findButton->setIcon(icon2);

        buttons->addWidget(findButton);

        openButton = new QPushButton(layoutWidget2);
        openButton->setObjectName("openButton");
        openButton->setEnabled(true);
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("document-new")));
        openButton->setIcon(icon3);

        buttons->addWidget(openButton);

        saveButton = new QPushButton(layoutWidget2);
        saveButton->setObjectName("saveButton");
        saveButton->setEnabled(false);
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8("document-save-as")));
        saveButton->setIcon(icon4);

        buttons->addWidget(saveButton);

        acceptAdding = new QPushButton(centralwidget);
        acceptAdding->setObjectName("acceptAdding");
        acceptAdding->setGeometry(QRect(30, 510, 331, 61));
        QFont font3;
        font3.setPointSize(17);
        acceptAdding->setFont(font3);
        QIcon icon5(QIcon::fromTheme(QString::fromUtf8("emblem-default")));
        acceptAdding->setIcon(icon5);
        acceptAdding->setIconSize(QSize(40, 40));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 918, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\222\320\265\320\264\320\276\320\274\320\276\321\201\321\202\320\270 \321\203\321\201\320\277\320\265\320\262\320\260\320\265\320\274\320\276\321\201\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\270:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\260\320\275\320\260\320\273\320\270\320\267:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\321\213 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\270\320\267\320\260\321\206\320\270\320\270\n"
"\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\263\320\265\320\276\320\274\320\265\321\202\321\200\320\270\321\217\n"
"\320\270 \320\273\320\270\320\275\320\265\320\271\320\275\320\260\321\217 \320\260\320\273\320\263\320\265\320\261\321\200\320\260:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\261\320\265\320\273\320\276\321\200\321\203\321\201\321\201\320\272\320\276\320\271\n"
"\320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\320\276\321\201\321\202\320\270:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\201\320\272\321\200\320\265\321\202\320\275\320\260\321\217 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\320\272\320\260:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \320\261\320\260\320\273\320\273:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\244.\320\230.\320\236.", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        sortButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        findButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273 \320\272\320\260\320\272", nullptr));
        acceptAdding->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260\n"
"\320\262 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\320\265\320\264\320\276\320\274\320\276\321\201\321\202\320\265\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
