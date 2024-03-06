/********************************************************************************
** Form generated from reading UI file 'dialogcircle.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCIRCLE_H
#define UI_DIALOGCIRCLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCircle
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *DialogCircle)
    {
        if (DialogCircle->objectName().isEmpty())
            DialogCircle->setObjectName("DialogCircle");
        DialogCircle->resize(301, 246);
        widget = new QWidget(DialogCircle);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 70, 264, 115));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(DialogCircle);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogCircle, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogCircle, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogCircle);
    } // setupUi

    void retranslateUi(QDialog *DialogCircle)
    {
        DialogCircle->setWindowTitle(QCoreApplication::translate("DialogCircle", "\320\232\321\200\321\203\320\263", nullptr));
        label->setText(QCoreApplication::translate("DialogCircle", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \321\200\320\260\320\264\320\270\321\203\321\201 (\320\276\321\202 14 \320\264\320\276 344) ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCircle: public Ui_DialogCircle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCIRCLE_H
