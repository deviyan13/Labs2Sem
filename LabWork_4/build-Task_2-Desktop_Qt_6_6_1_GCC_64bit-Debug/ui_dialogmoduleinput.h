/********************************************************************************
** Form generated from reading UI file 'dialogmoduleinput.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODULEINPUT_H
#define UI_DIALOGMODULEINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogModuleInput
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;

    void setupUi(QDialog *DialogModuleInput)
    {
        if (DialogModuleInput->objectName().isEmpty())
            DialogModuleInput->setObjectName("DialogModuleInput");
        DialogModuleInput->resize(400, 300);
        buttonBox = new QDialogButtonBox(DialogModuleInput);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(110, 230, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(DialogModuleInput);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 291, 151));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        spinBox = new QSpinBox(DialogModuleInput);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(140, 170, 181, 26));
        QFont font1;
        font1.setPointSize(16);
        spinBox->setFont(font1);
        spinBox->setMinimum(1);
        spinBox->setMaximum(1000000);
        spinBox->setValue(1000);
        label_2 = new QLabel(DialogModuleInput);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 160, 81, 41));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogModuleInput);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogModuleInput, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogModuleInput, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogModuleInput);
    } // setupUi

    void retranslateUi(QDialog *DialogModuleInput)
    {
        DialogModuleInput->setWindowTitle(QCoreApplication::translate("DialogModuleInput", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogModuleInput", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276,\n"
"\320\277\320\276 \320\274\320\276\320\264\321\203\320\273\321\216 \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\262\321\213\320\262\320\265\321\201\321\202\320\270\n"
"\320\270\320\275\320\264\320\265\320\272\321\201 \320\275\320\260\320\271\320\264\320\265\320\275\320\275\320\276\320\263\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\n"
"(\320\276\321\202 1 \320\264\320\276 1,000,000)", nullptr));
        label_2->setText(QCoreApplication::translate("DialogModuleInput", "mod = ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogModuleInput: public Ui_DialogModuleInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODULEINPUT_H
