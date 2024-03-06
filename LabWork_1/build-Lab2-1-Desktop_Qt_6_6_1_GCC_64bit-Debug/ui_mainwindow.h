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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QGridLayout *gridLayout_2;
    QLabel *perimetr_label;
    QLabel *area_label;
    QLineEdit *perimetr_line;
    QLineEdit *area_line;
    QLabel *x_label;
    QLabel *label_4;
    QSpinBox *x_spin;
    QSpinBox *y_spin;
    QHBoxLayout *horizontalLayout;
    QPushButton *square;
    QPushButton *rectangle;
    QPushButton *triangle;
    QPushButton *rhomb;
    QPushButton *circle;
    QPushButton *hexagon;
    QPushButton *star5;
    QPushButton *star6;
    QPushButton *star8;
    QRadioButton *radioPencil;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(890, 604);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMouseTracking(false);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        perimetr_label = new QLabel(centralwidget);
        perimetr_label->setObjectName("perimetr_label");

        gridLayout_2->addWidget(perimetr_label, 0, 3, 1, 1);

        area_label = new QLabel(centralwidget);
        area_label->setObjectName("area_label");

        gridLayout_2->addWidget(area_label, 0, 0, 1, 1);

        perimetr_line = new QLineEdit(centralwidget);
        perimetr_line->setObjectName("perimetr_line");
        perimetr_line->setReadOnly(true);

        gridLayout_2->addWidget(perimetr_line, 0, 5, 1, 1);

        area_line = new QLineEdit(centralwidget);
        area_line->setObjectName("area_line");
        area_line->setReadOnly(true);
        area_line->setClearButtonEnabled(false);

        gridLayout_2->addWidget(area_line, 0, 1, 1, 1);

        x_label = new QLabel(centralwidget);
        x_label->setObjectName("x_label");

        gridLayout_2->addWidget(x_label, 1, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 3, 1, 1);

        x_spin = new QSpinBox(centralwidget);
        x_spin->setObjectName("x_spin");

        gridLayout_2->addWidget(x_spin, 1, 1, 1, 1);

        y_spin = new QSpinBox(centralwidget);
        y_spin->setObjectName("y_spin");

        gridLayout_2->addWidget(y_spin, 1, 5, 1, 1);


        gridLayout->addLayout(gridLayout_2, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        square = new QPushButton(centralwidget);
        square->setObjectName("square");
        QFont font;
        font.setPointSize(16);
        square->setFont(font);

        horizontalLayout->addWidget(square);

        rectangle = new QPushButton(centralwidget);
        rectangle->setObjectName("rectangle");
        rectangle->setFont(font);

        horizontalLayout->addWidget(rectangle);

        triangle = new QPushButton(centralwidget);
        triangle->setObjectName("triangle");
        triangle->setFont(font);

        horizontalLayout->addWidget(triangle);

        rhomb = new QPushButton(centralwidget);
        rhomb->setObjectName("rhomb");
        rhomb->setEnabled(true);
        QFont font1;
        font1.setPointSize(13);
        rhomb->setFont(font1);

        horizontalLayout->addWidget(rhomb);

        circle = new QPushButton(centralwidget);
        circle->setObjectName("circle");
        circle->setFont(font);

        horizontalLayout->addWidget(circle);

        hexagon = new QPushButton(centralwidget);
        hexagon->setObjectName("hexagon");
        hexagon->setFont(font);

        horizontalLayout->addWidget(hexagon);

        star5 = new QPushButton(centralwidget);
        star5->setObjectName("star5");
        star5->setFont(font);

        horizontalLayout->addWidget(star5);

        star6 = new QPushButton(centralwidget);
        star6->setObjectName("star6");
        star6->setFont(font);

        horizontalLayout->addWidget(star6);

        star8 = new QPushButton(centralwidget);
        star8->setObjectName("star8");
        star8->setFont(font);

        horizontalLayout->addWidget(star8);

        radioPencil = new QRadioButton(centralwidget);
        radioPencil->setObjectName("radioPencil");

        horizontalLayout->addWidget(radioPencil);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 890, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lab1-2", nullptr));
        perimetr_label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\274\320\265\321\202\321\200", nullptr));
        area_label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        x_label->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 x \321\206\320\265\320\275\321\202\321\200\320\260 \321\202\321\217\320\266\320\265\321\201\321\202\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 y \321\206\320\265\320\275\321\202\321\200\320\260 \321\202\321\217\320\266\320\265\321\201\321\202\320\270", nullptr));
        square->setText(QCoreApplication::translate("MainWindow", "\342\226\240", nullptr));
        rectangle->setText(QCoreApplication::translate("MainWindow", "\342\226\254", nullptr));
        triangle->setText(QCoreApplication::translate("MainWindow", "\342\226\262", nullptr));
        rhomb->setText(QCoreApplication::translate("MainWindow", "\342\247\253", nullptr));
        circle->setText(QCoreApplication::translate("MainWindow", "\342\227\217", nullptr));
        hexagon->setText(QCoreApplication::translate("MainWindow", "\342\254\243", nullptr));
        star5->setText(QCoreApplication::translate("MainWindow", "\342\230\205", nullptr));
        star6->setText(QCoreApplication::translate("MainWindow", "\342\234\241", nullptr));
        star8->setText(QCoreApplication::translate("MainWindow", "\342\234\270", nullptr));
        radioPencil->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\200\320\260\320\275\320\264\320\260\321\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
