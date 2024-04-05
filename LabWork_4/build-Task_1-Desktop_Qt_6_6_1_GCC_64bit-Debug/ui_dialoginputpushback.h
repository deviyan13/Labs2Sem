/********************************************************************************
** Form generated from reading UI file 'dialoginputpushback.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINPUTPUSHBACK_H
#define UI_DIALOGINPUTPUSHBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogInputPushBack
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSpinBox *spinBox;

    void setupUi(QDialog *DialogInputPushBack)
    {
        if (DialogInputPushBack->objectName().isEmpty())
            DialogInputPushBack->setObjectName("DialogInputPushBack");
        DialogInputPushBack->resize(231, 182);
        buttonBox = new QDialogButtonBox(DialogInputPushBack);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 120, 171, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(DialogInputPushBack);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 151, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        spinBox = new QSpinBox(DialogInputPushBack);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(40, 70, 151, 31));
        spinBox->setMinimum(-1000000);
        spinBox->setMaximum(1000000);

        retranslateUi(DialogInputPushBack);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogInputPushBack, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogInputPushBack, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogInputPushBack);
    } // setupUi

    void retranslateUi(QDialog *DialogInputPushBack)
    {
        DialogInputPushBack->setWindowTitle(QCoreApplication::translate("DialogInputPushBack", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogInputPushBack", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogInputPushBack: public Ui_DialogInputPushBack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINPUTPUSHBACK_H
