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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QTreeWidget *treeWidget_2;
    QSpinBox *spinKey1;
    QLineEdit *lineValue1;
    QLabel *label;
    QLabel *label_2;
    QPushButton *addButton1;
    QPushButton *removeButton1;
    QPushButton *findButton1;
    QSpinBox *spinKey2;
    QPushButton *addButton2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *removeButton2;
    QLineEdit *lineValue2;
    QPushButton *insertSubtreeButton;
    QPushButton *insertLBranchButton;
    QPushButton *insertRBranchButton;
    QPushButton *removeSubtreeButton;
    QPushButton *removeLBranchButton;
    QPushButton *removeRBranchButton;
    QPushButton *lowestCommonAncestorButton;
    QSpinBox *spin1;
    QLabel *label_5;
    QSpinBox *spin2;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1202, 579);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(10, 10, 301, 411));
        treeWidget_2 = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Subtree (branch from this tree)"));
        treeWidget_2->setHeaderItem(__qtreewidgetitem);
        treeWidget_2->setObjectName("treeWidget_2");
        treeWidget_2->setGeometry(QRect(620, 10, 301, 411));
        spinKey1 = new QSpinBox(centralwidget);
        spinKey1->setObjectName("spinKey1");
        spinKey1->setGeometry(QRect(330, 40, 111, 26));
        spinKey1->setMaximum(1000000000);
        lineValue1 = new QLineEdit(centralwidget);
        lineValue1->setObjectName("lineValue1");
        lineValue1->setGeometry(QRect(330, 90, 113, 25));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 20, 66, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 70, 66, 17));
        addButton1 = new QPushButton(centralwidget);
        addButton1->setObjectName("addButton1");
        addButton1->setGeometry(QRect(460, 40, 88, 25));
        removeButton1 = new QPushButton(centralwidget);
        removeButton1->setObjectName("removeButton1");
        removeButton1->setGeometry(QRect(460, 70, 91, 25));
        findButton1 = new QPushButton(centralwidget);
        findButton1->setObjectName("findButton1");
        findButton1->setGeometry(QRect(460, 100, 91, 25));
        spinKey2 = new QSpinBox(centralwidget);
        spinKey2->setObjectName("spinKey2");
        spinKey2->setGeometry(QRect(940, 40, 111, 26));
        spinKey2->setMaximum(1000000000);
        addButton2 = new QPushButton(centralwidget);
        addButton2->setObjectName("addButton2");
        addButton2->setGeometry(QRect(1070, 40, 88, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(940, 20, 66, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(940, 70, 66, 17));
        removeButton2 = new QPushButton(centralwidget);
        removeButton2->setObjectName("removeButton2");
        removeButton2->setGeometry(QRect(1070, 70, 91, 25));
        lineValue2 = new QLineEdit(centralwidget);
        lineValue2->setObjectName("lineValue2");
        lineValue2->setGeometry(QRect(940, 90, 113, 25));
        insertSubtreeButton = new QPushButton(centralwidget);
        insertSubtreeButton->setObjectName("insertSubtreeButton");
        insertSubtreeButton->setGeometry(QRect(370, 140, 141, 25));
        insertLBranchButton = new QPushButton(centralwidget);
        insertLBranchButton->setObjectName("insertLBranchButton");
        insertLBranchButton->setGeometry(QRect(370, 200, 141, 25));
        insertRBranchButton = new QPushButton(centralwidget);
        insertRBranchButton->setObjectName("insertRBranchButton");
        insertRBranchButton->setGeometry(QRect(370, 230, 141, 25));
        removeSubtreeButton = new QPushButton(centralwidget);
        removeSubtreeButton->setObjectName("removeSubtreeButton");
        removeSubtreeButton->setGeometry(QRect(370, 170, 141, 25));
        removeLBranchButton = new QPushButton(centralwidget);
        removeLBranchButton->setObjectName("removeLBranchButton");
        removeLBranchButton->setGeometry(QRect(370, 260, 141, 25));
        removeRBranchButton = new QPushButton(centralwidget);
        removeRBranchButton->setObjectName("removeRBranchButton");
        removeRBranchButton->setGeometry(QRect(370, 290, 141, 25));
        lowestCommonAncestorButton = new QPushButton(centralwidget);
        lowestCommonAncestorButton->setObjectName("lowestCommonAncestorButton");
        lowestCommonAncestorButton->setGeometry(QRect(460, 360, 141, 25));
        QFont font1;
        font1.setPointSize(9);
        lowestCommonAncestorButton->setFont(font1);
        spin1 = new QSpinBox(centralwidget);
        spin1->setObjectName("spin1");
        spin1->setGeometry(QRect(340, 340, 111, 26));
        spin1->setMaximum(1000000000);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(340, 320, 66, 17));
        spin2 = new QSpinBox(centralwidget);
        spin2->setObjectName("spin2");
        spin2->setGeometry(QRect(340, 390, 111, 26));
        spin2->setMaximum(1000000000);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 370, 66, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1202, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Task1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Tree 1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        addButton1->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        removeButton1->setText(QCoreApplication::translate("MainWindow", "Remove(key)", nullptr));
        findButton1->setText(QCoreApplication::translate("MainWindow", "Find(key)", nullptr));
        addButton2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        removeButton2->setText(QCoreApplication::translate("MainWindow", "Remove(key)", nullptr));
        insertSubtreeButton->setText(QCoreApplication::translate("MainWindow", "insertSubtree", nullptr));
        insertLBranchButton->setText(QCoreApplication::translate("MainWindow", "insertLeftBranch", nullptr));
        insertRBranchButton->setText(QCoreApplication::translate("MainWindow", "insertRightBranch", nullptr));
        removeSubtreeButton->setText(QCoreApplication::translate("MainWindow", "removeSubtree", nullptr));
        removeLBranchButton->setText(QCoreApplication::translate("MainWindow", "removeLeftBranch", nullptr));
        removeRBranchButton->setText(QCoreApplication::translate("MainWindow", "removeRightBranch", nullptr));
        lowestCommonAncestorButton->setText(QCoreApplication::translate("MainWindow", "lowestCommonAncestor", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Key1", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Key2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
