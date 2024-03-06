/********************************************************************************
** Form generated from reading UI file 'dialogsquare.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSQUARE_H
#define UI_DIALOGSQUARE_H

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

class Ui_DialogSquare
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *DialogSquare)
    {
        if (DialogSquare->objectName().isEmpty())
            DialogSquare->setObjectName("DialogSquare");
        DialogSquare->resize(400, 185);
        layoutWidget = new QWidget(DialogSquare);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 30, 325, 115));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(DialogSquare);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogSquare, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogSquare, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogSquare);
    } // setupUi

    void retranslateUi(QDialog *DialogSquare)
    {
        DialogSquare->setWindowTitle(QCoreApplication::translate("DialogSquare", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
        label->setText(QCoreApplication::translate("DialogSquare", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\273\320\270\320\275\321\203 \320\275\320\276\320\262\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213  (\320\276\321\202 14 \320\264\320\276 345) ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSquare: public Ui_DialogSquare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSQUARE_H
