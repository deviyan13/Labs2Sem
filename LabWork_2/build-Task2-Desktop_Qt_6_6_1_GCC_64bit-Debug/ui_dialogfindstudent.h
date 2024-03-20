/********************************************************************************
** Form generated from reading UI file 'dialogfindstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFINDSTUDENT_H
#define UI_DIALOGFINDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogFindStudent
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineName;
    QLabel *label;

    void setupUi(QDialog *DialogFindStudent)
    {
        if (DialogFindStudent->objectName().isEmpty())
            DialogFindStudent->setObjectName("DialogFindStudent");
        DialogFindStudent->resize(340, 211);
        buttonBox = new QDialogButtonBox(DialogFindStudent);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(130, 160, 81, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        lineName = new QLineEdit(DialogFindStudent);
        lineName->setObjectName("lineName");
        lineName->setEnabled(true);
        lineName->setGeometry(QRect(50, 100, 235, 25));
        label = new QLabel(DialogFindStudent);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(20, 20, 301, 61));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogFindStudent);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogFindStudent, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogFindStudent, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogFindStudent);
    } // setupUi

    void retranslateUi(QDialog *DialogFindStudent)
    {
        DialogFindStudent->setWindowTitle(QCoreApplication::translate("DialogFindStudent", "\320\237\320\276\320\270\321\201\320\272 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("DialogFindStudent", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\244\320\230\320\236 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260,\n"
"\320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \321\205\320\276\321\202\320\270\321\202\320\265 \320\275\320\260\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFindStudent: public Ui_DialogFindStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFINDSTUDENT_H
