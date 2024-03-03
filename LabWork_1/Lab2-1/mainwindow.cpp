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
    Square* square = new Square(QPoint(0, 0), QPoint(50, 0), QPoint(50, 50), QPoint(0, 50));

    scene->addItem(square);
    objects.push_back(square);

    connect(square, &Shape::isDeleted, [this, square]() {
        objects.removeOne(square); // Удаляем square из вектора objects
        delete square; // Освобождаем память, выделенную для square
    });
}

void MainWindow::on_triangle_clicked()
{
    Triangle* triangle = new Triangle(QPoint(0, 70), QPoint(30, 0), QPoint(60, 70));

    scene->addItem(triangle);
    objects.push_back(triangle);

    connect(triangle, &Shape::isDeleted, [this, triangle]() {
        objects.removeOne(triangle);
        delete triangle;
    });
}


void MainWindow::on_rhomb_clicked()
{
    Rhomb* rhomb = new Rhomb(QPoint(0, 40), QPoint(70, 0), QPoint(140, 40), QPoint(70, 80));

    scene->addItem(rhomb);
    objects.push_back(rhomb);

    connect(rhomb, &Shape::isDeleted, [this, rhomb]() {
        objects.removeOne(rhomb);
        delete rhomb;
    });
}


void MainWindow::on_rectangle_clicked()
{
    Rectangle* rectangle = new Rectangle(QPointF(0, 0), QPointF(100, 0), QPointF(100, 50), QPointF(0, 50));

    scene->addItem(rectangle);
    objects.push_back(rectangle);

    connect(rectangle, &Shape::isDeleted, [this, rectangle]() {
        objects.removeOne(rectangle);
        delete rectangle;
    });
}


void MainWindow::on_circle_clicked()
{
    Circle* circle = new Circle(50);

    scene->addItem(circle);
    objects.push_back(circle);

    connect(circle, &Shape::isDeleted, [this, circle]() {
        objects.removeOne(circle);
        delete circle;
    });
}


void MainWindow::on_hexagon_clicked()
{
    Hexagon* hexagon = new Hexagon(50);

    scene->addItem(hexagon);
    objects.push_back(hexagon);

    connect(hexagon, &Shape::isDeleted, [this, hexagon]() {
        objects.removeOne(hexagon);
        delete hexagon;
    });
}


void MainWindow::on_star5_clicked()
{
    Star5* star5 = new Star5(60, 25);

    scene->addItem(star5);
    objects.push_back(star5);

    connect(star5, &Shape::isDeleted, [this, star5]() {
        objects.removeOne(star5);
        delete star5;
    });
}


void MainWindow::on_star6_clicked()
{
    Star6* star6 = new Star6(80, 45);

    scene->addItem(star6);
    objects.push_back(star6);

    connect(star6, &Shape::isDeleted, [this, star6]() {
        objects.removeOne(star6);
        delete star6;
    });
}


void MainWindow::on_star8_clicked()
{
    Star8* star8 = new Star8(80, 50);

    scene->addItem(star8);
    objects.push_back(star8);

    connect(star8, &Shape::isDeleted, [this, star8]() {
        objects.removeOne(star8);
        delete star8;
    });
}
