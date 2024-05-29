#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Deque<int> deq;

    deq.push_back(10);
    deq.push_front(1);
    deq.push_front(2);

    deq.pop_front();
    deq.pop_front();

    // deq.pop_back();

    deq.push_back(232);

    qDebug() << deq[0] << deq[1] << deq.size() << deq.empty();

    deq.clear();
    qDebug() << deq.size() << deq.empty();

}

MainWindow::~MainWindow()
{
    delete ui;
}
