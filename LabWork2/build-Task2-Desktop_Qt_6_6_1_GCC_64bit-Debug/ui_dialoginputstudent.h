/********************************************************************************
** Form generated from reading UI file 'dialoginputstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINPUTSTUDENT_H
#define UI_DIALOGINPUTSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogInputStudent
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QFormLayout *marks;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QLineEdit *lineAvgMark;
    QSpinBox *spinMatan;
    QSpinBox *spinOAIP;
    QSpinBox *spinAgila;
    QSpinBox *spinHist;
    QSpinBox *spinDM;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QFormLayout *info;
    QLabel *label;
    QLineEdit *lineName;
    QLabel *label_9;
    QComboBox *comboFaculty;
    QLabel *label_13;
    QComboBox *comboSpeciality;
    QLabel *label_10;
    QComboBox *comboGroup;

    void setupUi(QDialog *DialogInputStudent)
    {
        if (DialogInputStudent->objectName().isEmpty())
            DialogInputStudent->setObjectName("DialogInputStudent");
        DialogInputStudent->resize(424, 558);
        DialogInputStudent->setMinimumSize(QSize(424, 558));
        DialogInputStudent->setMaximumSize(QSize(424, 558));
        buttonBox = new QDialogButtonBox(DialogInputStudent);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setEnabled(false);
        buttonBox->setGeometry(QRect(160, 490, 81, 51));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        layoutWidget = new QWidget(DialogInputStudent);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(40, 200, 332, 281));
        marks = new QFormLayout(layoutWidget);
        marks->setObjectName("marks");
        marks->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setEnabled(true);
        QFont font;
        font.setBold(true);
        label_3->setFont(font);

        marks->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setEnabled(true);
        label_4->setFont(font);

        marks->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setEnabled(true);
        label_5->setFont(font);

        marks->setWidget(2, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setEnabled(true);
        label_6->setFont(font);

        marks->setWidget(3, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setEnabled(true);
        label_7->setFont(font);

        marks->setWidget(4, QFormLayout::LabelRole, label_7);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        marks->setItem(5, QFormLayout::LabelRole, verticalSpacer);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setEnabled(true);
        label_8->setFont(font);

        marks->setWidget(6, QFormLayout::LabelRole, label_8);

        lineAvgMark = new QLineEdit(layoutWidget);
        lineAvgMark->setObjectName("lineAvgMark");
        lineAvgMark->setEnabled(true);
        lineAvgMark->setFrame(true);
        lineAvgMark->setReadOnly(true);

        marks->setWidget(6, QFormLayout::FieldRole, lineAvgMark);

        spinMatan = new QSpinBox(layoutWidget);
        spinMatan->setObjectName("spinMatan");
        spinMatan->setEnabled(true);
        spinMatan->setMaximum(10);
        spinMatan->setValue(1);

        marks->setWidget(0, QFormLayout::FieldRole, spinMatan);

        spinOAIP = new QSpinBox(layoutWidget);
        spinOAIP->setObjectName("spinOAIP");
        spinOAIP->setEnabled(true);
        spinOAIP->setMaximum(10);
        spinOAIP->setValue(1);

        marks->setWidget(1, QFormLayout::FieldRole, spinOAIP);

        spinAgila = new QSpinBox(layoutWidget);
        spinAgila->setObjectName("spinAgila");
        spinAgila->setEnabled(true);
        spinAgila->setMaximum(10);
        spinAgila->setValue(1);

        marks->setWidget(2, QFormLayout::FieldRole, spinAgila);

        spinHist = new QSpinBox(layoutWidget);
        spinHist->setObjectName("spinHist");
        spinHist->setEnabled(true);
        spinHist->setMaximum(10);
        spinHist->setValue(1);

        marks->setWidget(3, QFormLayout::FieldRole, spinHist);

        spinDM = new QSpinBox(layoutWidget);
        spinDM->setObjectName("spinDM");
        spinDM->setEnabled(true);
        spinDM->setMaximum(10);
        spinDM->setValue(1);

        marks->setWidget(4, QFormLayout::FieldRole, spinDM);

        label_2 = new QLabel(DialogInputStudent);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(40, 160, 121, 31));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        label_2->setFont(font1);
        layoutWidget_2 = new QWidget(DialogInputStudent);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setEnabled(true);
        layoutWidget_2->setGeometry(QRect(10, 20, 401, 162));
        info = new QFormLayout(layoutWidget_2);
        info->setObjectName("info");
        info->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");
        label->setEnabled(true);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label->setFont(font2);

        info->setWidget(0, QFormLayout::LabelRole, label);

        lineName = new QLineEdit(layoutWidget_2);
        lineName->setObjectName("lineName");
        lineName->setEnabled(true);

        info->setWidget(0, QFormLayout::FieldRole, lineName);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setEnabled(true);
        label_9->setFont(font2);

        info->setWidget(1, QFormLayout::LabelRole, label_9);

        comboFaculty = new QComboBox(layoutWidget_2);
        comboFaculty->setObjectName("comboFaculty");
        comboFaculty->setEnabled(true);

        info->setWidget(1, QFormLayout::FieldRole, comboFaculty);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName("label_13");
        label_13->setEnabled(true);
        label_13->setFont(font2);

        info->setWidget(2, QFormLayout::LabelRole, label_13);

        comboSpeciality = new QComboBox(layoutWidget_2);
        comboSpeciality->setObjectName("comboSpeciality");
        comboSpeciality->setEnabled(true);

        info->setWidget(2, QFormLayout::FieldRole, comboSpeciality);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName("label_10");
        label_10->setEnabled(true);
        label_10->setFont(font2);

        info->setWidget(3, QFormLayout::LabelRole, label_10);

        comboGroup = new QComboBox(layoutWidget_2);
        comboGroup->setObjectName("comboGroup");
        comboGroup->setEnabled(true);

        info->setWidget(3, QFormLayout::FieldRole, comboGroup);


        retranslateUi(DialogInputStudent);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogInputStudent, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogInputStudent, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogInputStudent);
    } // setupUi

    void retranslateUi(QDialog *DialogInputStudent)
    {
        DialogInputStudent->setWindowTitle(QCoreApplication::translate("DialogInputStudent", "\320\222\320\265\320\264\320\276\320\274\320\276\321\201\321\202\321\214 \320\276 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("DialogInputStudent", "\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\260\320\275\320\260\320\273\320\270\320\267:", nullptr));
        label_4->setText(QCoreApplication::translate("DialogInputStudent", "\320\236\321\201\320\275\320\276\320\262\321\213 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\270\320\267\320\260\321\206\320\270\320\270\n"
"\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        label_5->setText(QCoreApplication::translate("DialogInputStudent", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\263\320\265\320\276\320\274\320\265\321\202\321\200\320\270\321\217\n"
"\320\270 \320\273\320\270\320\275\320\265\320\271\320\275\320\260\321\217 \320\260\320\273\320\263\320\265\320\261\321\200\320\260:", nullptr));
        label_6->setText(QCoreApplication::translate("DialogInputStudent", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\261\320\265\320\273\320\276\321\200\321\203\321\201\321\201\320\272\320\276\320\271\n"
"\320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\320\276\321\201\321\202\320\270:", nullptr));
        label_7->setText(QCoreApplication::translate("DialogInputStudent", "\320\224\320\270\321\201\320\272\321\200\320\265\321\202\320\275\320\260\321\217 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\320\272\320\260:", nullptr));
        label_8->setText(QCoreApplication::translate("DialogInputStudent", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \320\261\320\260\320\273\320\273:", nullptr));
        label_2->setText(QCoreApplication::translate("DialogInputStudent", "\320\236\321\206\320\265\320\275\320\272\320\270:", nullptr));
        label->setText(QCoreApplication::translate("DialogInputStudent", "\320\244.\320\230.\320\236.", nullptr));
        label_9->setText(QCoreApplication::translate("DialogInputStudent", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", nullptr));
        label_13->setText(QCoreApplication::translate("DialogInputStudent", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("DialogInputStudent", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogInputStudent: public Ui_DialogInputStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINPUTSTUDENT_H
