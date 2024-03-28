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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSpinBox *spinRings;
    QListWidget *listWidget;
    QPushButton *buttonAnimate;
    QLabel *label;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1110, 510);
        MainWindow->setMinimumSize(QSize(1110, 510));
        MainWindow->setMaximumSize(QSize(1110, 510));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        spinRings = new QSpinBox(centralwidget);
        spinRings->setObjectName("spinRings");
        spinRings->setGeometry(QRect(20, 30, 181, 41));
        QFont font;
        font.setPointSize(18);
        spinRings->setFont(font);
        spinRings->setMinimum(1);
        spinRings->setMaximum(8);
        spinRings->setValue(1);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setEnabled(true);
        listWidget->setGeometry(QRect(20, 100, 181, 321));
        listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        buttonAnimate = new QPushButton(centralwidget);
        buttonAnimate->setObjectName("buttonAnimate");
        buttonAnimate->setGeometry(QRect(20, 430, 181, 41));
        QFont font1;
        font1.setPointSize(13);
        buttonAnimate->setFont(font1);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("media-playback-start")));
        buttonAnimate->setIcon(icon);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 151, 17));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(210, 10, 891, 461));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 151, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1110, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\245\320\260\320\275\320\276\320\271\321\201\320\272\320\270\320\265 \320\261\320\260\321\210\320\275\320\270", nullptr));
        buttonAnimate->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\200\320\265\321\210\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\245\320\276\320\264\321\213 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\273\320\265\321\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
