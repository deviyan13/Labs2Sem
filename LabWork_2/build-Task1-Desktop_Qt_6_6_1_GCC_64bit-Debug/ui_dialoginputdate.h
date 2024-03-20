/********************************************************************************
** Form generated from reading UI file 'dialoginputdate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINPUTDATE_H
#define UI_DIALOGINPUTDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogInputDate
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinDay;
    QSpinBox *spinMonth;
    QSpinBox *spinYear;
    QLabel *label;

    void setupUi(QDialog *DialogInputDate)
    {
        if (DialogInputDate->objectName().isEmpty())
            DialogInputDate->setObjectName("DialogInputDate");
        DialogInputDate->resize(300, 199);
        DialogInputDate->setAutoFillBackground(false);
        buttonBox = new QDialogButtonBox(DialogInputDate);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(70, 130, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinDay = new QSpinBox(DialogInputDate);
        spinDay->setObjectName("spinDay");
        spinDay->setGeometry(QRect(70, 70, 44, 26));
        spinDay->setValue(14);
        spinMonth = new QSpinBox(DialogInputDate);
        spinMonth->setObjectName("spinMonth");
        spinMonth->setGeometry(QRect(120, 70, 44, 26));
        spinMonth->setValue(3);
        spinYear = new QSpinBox(DialogInputDate);
        spinYear->setObjectName("spinYear");
        spinYear->setGeometry(QRect(170, 70, 61, 26));
        spinYear->setMaximum(9999);
        spinYear->setValue(2024);
        label = new QLabel(DialogInputDate);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 50, 161, 17));

        retranslateUi(DialogInputDate);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogInputDate, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogInputDate, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogInputDate);
    } // setupUi

    void retranslateUi(QDialog *DialogInputDate)
    {
        DialogInputDate->setWindowTitle(QCoreApplication::translate("DialogInputDate", "\320\222\320\262\320\276\320\264 \320\264\320\260\321\202\321\213", nullptr));
        label->setText(QCoreApplication::translate("DialogInputDate", "\320\224\320\265\320\275\321\214    \320\234\320\265\321\201\321\217\321\206      \320\223\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogInputDate: public Ui_DialogInputDate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINPUTDATE_H
