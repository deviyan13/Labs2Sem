#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include "student.h"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void changeSpecialityCombo();
    void changeGroupCombo();

private slots:
    void on_exitButton_clicked();

    void on_openButton_clicked();

    void on_saveButton_clicked();

    void on_addButton_clicked();

    void on_acceptAdding_clicked();

private:
    Ui::MainWindow *ui;

    QList<QString> FACULTIES, FKSIS, IEF, FRE;
    QList<QString> GROUPS_KI, GROUPS_PI, GROUPS_IITP, GROUPS_IPD, GROUPS_IIUSFU, GROUPS_MIN, GROUPS_NIN, GROUPS_RIR;
    QList<QString> GROUPS_EE, GROUPS_ISIT;

    QFile *openedFile;
    QString openedFileName;

    QVector <Student> studentsList;
};
#endif // MAINWINDOW_H
