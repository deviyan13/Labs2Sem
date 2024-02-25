#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, ui->graphicsView->width(), ui->graphicsView->height());
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();

    QTimer *updatingScene = new QTimer();
    connect(updatingScene, &QTimer::timeout, [this]()
    {
        this->scene->update();
    });

    updatingScene->start(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_square_clicked()
{
    Square* square = new Square();

    scene->addItem(square);
}

void MainWindow::on_triangle_clicked()
{
    Triangle* triangle = new Triangle();

    scene->addItem(triangle);
}


void MainWindow::on_rhomb_clicked()
{
    Rhomb* rhomb = new Rhomb();

    scene->addItem(rhomb);
}


void MainWindow::on_rectangle_clicked()
{
    Rectangle* rectangle = new Rectangle();

    scene->addItem(rectangle);
}


void MainWindow::on_circle_clicked()
{
    Circle* circle = new Circle();

    scene->addItem(circle);
}


void MainWindow::on_hexagon_clicked()
{
    Hexagon* hexagon = new Hexagon();

    scene->addItem(hexagon);
}


void MainWindow::on_star5_clicked()
{
    Star5* star5 = new Star5();

    scene->addItem(star5);
}


void MainWindow::on_star6_clicked()
{
    Star6* star6 = new Star6();

    scene->addItem(star6);
}

