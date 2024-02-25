#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rectangle.h"
#include "wagon.h"

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

private slots:
    void on_startMoving_clicked();

    void on_stopMoving_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene* scene;
    Rectangle* rect;
    QTimer* movingObjectTimer, *speedUpdating;
    Wagon* wagon;
};
#endif // MAINWINDOW_H
