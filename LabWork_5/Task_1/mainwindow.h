#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QFile>
#include <QTimer>
#include <QMessageBox>

#include "keyboard.h"

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
    void keyPressEvent(QKeyEvent *event) override;

private slots:

    void on_openFileButton_clicked();
    void on_beginButton_clicked();

public slots:
    void updateTime();
    void oneWordPlus();
    void endOfInput();


private:
    Ui::MainWindow *ui;
    Keyboard* keyboard;
    QTimer* timer;

    long long elapsedTime;
    long long inputedWords;

};
#endif // MAINWINDOW_H
