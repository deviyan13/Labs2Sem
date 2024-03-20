/********************************************************************************
** Form generated from reading UI file 'dialogupdatetable.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUPDATETABLE_H
#define UI_DIALOGUPDATETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogUpdateTable
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *DialogUpdateTable)
    {
        if (DialogUpdateTable->objectName().isEmpty())
            DialogUpdateTable->setObjectName("DialogUpdateTable");
        DialogUpdateTable->resize(316, 170);
        buttonBox = new QDialogButtonBox(DialogUpdateTable);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(70, 100, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(DialogUpdateTable);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 261, 61));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogUpdateTable);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogUpdateTable, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogUpdateTable, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogUpdateTable);
    } // setupUi

    void retranslateUi(QDialog *DialogUpdateTable)
    {
        DialogUpdateTable->setWindowTitle(QCoreApplication::translate("DialogUpdateTable", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogUpdateTable", "\320\224\320\260\320\275\320\275\321\213\320\265 \321\204\320\260\320\271\320\273\320\260 \320\261\321\213\320\273\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\321\213.\n"
"\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogUpdateTable: public Ui_DialogUpdateTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUPDATETABLE_H
