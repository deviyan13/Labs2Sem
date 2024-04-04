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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonClose;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboSorts;
    QPushButton *buttonSort;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpinBox *spinCountIndexes;
    QPushButton *buttonGenerate;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QSpinBox *spinSearch;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineIndex;
    QPushButton *buttonBinSearch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1210, 707);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonClose = new QPushButton(centralwidget);
        buttonClose->setObjectName("buttonClose");
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(17);
        buttonClose->setFont(font);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("application-exit")));
        buttonClose->setIcon(icon);
        buttonClose->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(buttonClose);


        verticalLayout_4->addLayout(horizontalLayout_2);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        verticalLayout_4->addWidget(graphicsView);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        comboSorts = new QComboBox(centralwidget);
        comboSorts->addItem(QString());
        comboSorts->addItem(QString());
        comboSorts->addItem(QString());
        comboSorts->setObjectName("comboSorts");
        comboSorts->setEnabled(false);

        verticalLayout_3->addWidget(comboSorts);

        buttonSort = new QPushButton(centralwidget);
        buttonSort->setObjectName("buttonSort");
        buttonSort->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonSort->sizePolicy().hasHeightForWidth());
        buttonSort->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(26);
        buttonSort->setFont(font1);

        verticalLayout_3->addWidget(buttonSort);


        gridLayout_3->addLayout(verticalLayout_3, 1, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(15);
        label->setFont(font2);

        verticalLayout_2->addWidget(label);

        spinCountIndexes = new QSpinBox(centralwidget);
        spinCountIndexes->setObjectName("spinCountIndexes");
        QFont font3;
        font3.setPointSize(18);
        spinCountIndexes->setFont(font3);
        spinCountIndexes->setMinimum(1);
        spinCountIndexes->setMaximum(1000);

        verticalLayout_2->addWidget(spinCountIndexes);


        horizontalLayout->addLayout(verticalLayout_2);

        buttonGenerate = new QPushButton(centralwidget);
        buttonGenerate->setObjectName("buttonGenerate");
        buttonGenerate->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonGenerate->sizePolicy().hasHeightForWidth());
        buttonGenerate->setSizePolicy(sizePolicy1);
        buttonGenerate->setFont(font2);

        horizontalLayout->addWidget(buttonGenerate);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font4;
        font4.setPointSize(11);
        label_2->setFont(font4);

        verticalLayout_5->addWidget(label_2);

        spinSearch = new QSpinBox(centralwidget);
        spinSearch->setObjectName("spinSearch");
        spinSearch->setEnabled(false);
        spinSearch->setFont(font3);
        spinSearch->setMinimum(-125);
        spinSearch->setMaximum(125);

        verticalLayout_5->addWidget(spinSearch);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineIndex = new QLineEdit(centralwidget);
        lineIndex->setObjectName("lineIndex");
        lineIndex->setEnabled(false);

        horizontalLayout_4->addWidget(lineIndex);


        verticalLayout_5->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_5);

        buttonBinSearch = new QPushButton(centralwidget);
        buttonBinSearch->setObjectName("buttonBinSearch");
        buttonBinSearch->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBinSearch->sizePolicy().hasHeightForWidth());
        buttonBinSearch->setSizePolicy(sizePolicy2);
        QFont font5;
        font5.setPointSize(14);
        buttonBinSearch->setFont(font5);

        horizontalLayout_5->addWidget(buttonBinSearch);


        horizontalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_3);


        gridLayout_3->addLayout(verticalLayout_6, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1210, 22));
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
        buttonClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        comboSorts->setItemText(0, QCoreApplication::translate("MainWindow", "Merge Sort (\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \321\201\320\273\320\270\321\217\320\275\320\270\320\265\320\274)", nullptr));
        comboSorts->setItemText(1, QCoreApplication::translate("MainWindow", "Quick Sort (\320\261\321\213\321\201\321\202\321\200\320\260\321\217 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260)", nullptr));
        comboSorts->setItemText(2, QCoreApplication::translate("MainWindow", "Heap Sort (\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\272\321\203\321\207\320\265\320\271)", nullptr));

        buttonSort->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\274\320\260\321\201\321\201\320\270\320\262", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\274\320\260\321\201\321\201\320\270\320\262\320\260(\320\276\321\202 1 \320\264\320\276 500)", nullptr));
        buttonGenerate->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\274\320\260\321\201\321\201\320\270\320\262\n"
"\321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\321\205 \321\207\320\270\321\201\320\265\320\273 (\320\276\321\202 -125 \320\264\320\276 125)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\275\320\270\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260\n"
"(\320\276\321\202 -125 \320\264\320\276 125)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\264\320\265\320\272\321\201 \320\275\320\260\320\271\320\264\320\265\320\275\320\275\320\276\320\263\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260:", nullptr));
        buttonBinSearch->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\n"
"\320\261\320\270\320\275\320\260\321\200\320\275\321\213\320\274 \320\277\320\276\320\270\321\201\320\272\320\276\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
