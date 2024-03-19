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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *buttons;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QPushButton *sortButton;
    QPushButton *findButton;
    QSpacerItem *verticalSpacer;
    QPushButton *openButton;
    QPushButton *saveButton;
    QComboBox *comboGroups;
    QListWidget *listWidget;
    QLabel *label_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(554, 620);
        MainWindow->setMinimumSize(QSize(0, 620));
        MainWindow->setMaximumSize(QSize(1000000, 10000));
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        buttons = new QVBoxLayout();
        buttons->setSpacing(6);
        buttons->setObjectName("buttons");
        buttons->setSizeConstraint(QLayout::SetDefaultConstraint);
        buttons->setContentsMargins(-1, 0, -1, -1);
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setEnabled(false);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("list-add")));
        addButton->setIcon(icon);

        buttons->addWidget(addButton);

        editButton = new QPushButton(centralwidget);
        editButton->setObjectName("editButton");
        editButton->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("accessories-text-editor")));
        editButton->setIcon(icon1);

        buttons->addWidget(editButton);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setEnabled(false);
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-delete")));
        deleteButton->setIcon(icon2);

        buttons->addWidget(deleteButton);

        sortButton = new QPushButton(centralwidget);
        sortButton->setObjectName("sortButton");
        sortButton->setEnabled(false);
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("go-bottom")));
        sortButton->setIcon(icon3);

        buttons->addWidget(sortButton);

        findButton = new QPushButton(centralwidget);
        findButton->setObjectName("findButton");
        findButton->setEnabled(false);
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8("edit-find")));
        findButton->setIcon(icon4);

        buttons->addWidget(findButton);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        buttons->addItem(verticalSpacer);

        openButton = new QPushButton(centralwidget);
        openButton->setObjectName("openButton");
        openButton->setEnabled(true);
        QIcon icon5(QIcon::fromTheme(QString::fromUtf8("document-new")));
        openButton->setIcon(icon5);

        buttons->addWidget(openButton);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setEnabled(false);
        QIcon icon6(QIcon::fromTheme(QString::fromUtf8("document-save-as")));
        saveButton->setIcon(icon6);

        buttons->addWidget(saveButton);


        gridLayout->addLayout(buttons, 3, 1, 1, 2);

        comboGroups = new QComboBox(centralwidget);
        comboGroups->setObjectName("comboGroups");
        comboGroups->setMaxVisibleItems(10);
        comboGroups->setMaxCount(40);
        comboGroups->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboGroups->setDuplicatesEnabled(false);

        gridLayout->addWidget(comboGroups, 0, 2, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setEnabled(false);

        gridLayout->addWidget(listWidget, 2, 1, 1, 2);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 554, 22));
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
        addButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        sortButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        findButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \321\201 \321\204\320\260\320\271\320\273\320\260", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        comboGroups->setCurrentText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
