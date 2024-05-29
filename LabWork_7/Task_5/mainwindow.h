#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "deque.h"
#include "deque.cpp"

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

    void printDeque();

private slots:
    void on_push_backButton_clicked();

    void on_push_frontButton_clicked();

    void on_pop_backButton_clicked();

    void on_pop_frontButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::MainWindow *ui;
    Deque<int> deq;
};
#endif // MAINWINDOW_H
