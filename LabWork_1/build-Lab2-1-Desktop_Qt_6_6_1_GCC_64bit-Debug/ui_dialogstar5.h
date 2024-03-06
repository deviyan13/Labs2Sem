/********************************************************************************
** Form generated from reading UI file 'dialogstar5.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTAR5_H
#define UI_DIALOGSTAR5_H

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

class Ui_DialogStar5
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QLabel *label;

    void setupUi(QDialog *DialogStar5)
    {
        if (DialogStar5->objectName().isEmpty())
            DialogStar5->setObjectName("DialogStar5");
        DialogStar5->resize(400, 300);
        layoutWidget = new QWidget(DialogStar5);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 70, 371, 143));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName("spinBox_2");

        gridLayout->addWidget(spinBox_2, 3, 0, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(DialogStar5);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogStar5, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogStar5, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogStar5);
    } // setupUi

    void retranslateUi(QDialog *DialogStar5)
    {
        DialogStar5->setWindowTitle(QCoreApplication::translate("DialogStar5", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DialogStar5", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\275\320\265\321\210\320\275\320\270\320\271  \321\200\320\260\320\264\320\270\321\203\321\201 (\320\276\321\202 50 \320\264\320\276 100) ", nullptr));
        label->setText(QCoreApplication::translate("DialogStar5", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271  \321\200\320\260\320\264\320\270\321\203\321\201 (\320\276\321\202 10 \320\264\320\276 50) ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStar5: public Ui_DialogStar5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTAR5_H
