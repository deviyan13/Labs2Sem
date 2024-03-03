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

    updatingScene = new QTimer();
    connect(updatingScene, &QTimer::timeout, [this]()
    {
        this->scene->update();

        if(scene != nullptr && scene->selectedItems().isEmpty())
        {
            ui->area_line->clear();
            ui->area_line->clear();
            ui->perimetr_line->clear();
            ui->xCenter->clear();
            ui->yCenter->clear();
        }
    });

    updatingScene->start(10);

    connect(this, &MainWindow::addedToScene, [=](){
        QPointer<Shape> obj = objects.back();
        {
            connect(obj, &Shape::isDeleted, [this, obj]() {
                if(obj != nullptr)
                {
                    if(obj->isSelected()) obj->setSelected(false);
                    objects.removeOne(obj);
                    delete obj;
                }
            });

            connect(updatingScene, &QTimer::timeout, [this, obj](){
                if(obj != nullptr)
                {
                    if (obj->isSelected())
                    {
                        ui->area_line->setText(QString::number(obj->getArea()));
                        ui->perimetr_line->setText(QString::number(obj->getPerimetr()));
                        ui->xCenter->setText(QString::number(obj->getCenter().x()));
                        ui->yCenter->setText(QString::number(-(obj->getCenter().y())));
                    }
                }
            });
        }
    });
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_square_clicked()
{
    //Square* square = new Square(QPoint(0, 0), QPoint(50, 0), QPoint(50, 50), QPoint(0, 50));
    QPointer <Square> square = new Square(QPoint(0, 0), QPoint(50, 0), QPoint(50, 50), QPoint(0, 50));


    scene->addItem(square);
    objects.push_back(square);

    emit addedToScene();
}

void MainWindow::on_triangle_clicked()
{
    QPointer <Triangle> triangle = new Triangle(QPoint(0, 70), QPoint(30, 0), QPoint(60, 70));

    scene->addItem(triangle);
    objects.push_back(triangle);

    emit addedToScene();
}


void MainWindow::on_rhomb_clicked()
{
    QPointer <Rhomb> rhomb = new Rhomb(QPoint(0, 40), QPoint(70, 0), QPoint(140, 40), QPoint(70, 80));

    scene->addItem(rhomb);
    objects.push_back(rhomb);

    emit addedToScene();
}


void MainWindow::on_rectangle_clicked()
{
    QPointer <Rectangle> rectangle = new Rectangle(QPointF(0, 0), QPointF(100, 0), QPointF(100, 50), QPointF(0, 50));

    scene->addItem(rectangle);
    objects.push_back(rectangle);

    emit addedToScene();
}


void MainWindow::on_circle_clicked()
{
    QPointer <Circle> circle = new Circle(50);

    scene->addItem(circle);
    objects.push_back(circle);

    emit addedToScene();
}


void MainWindow::on_hexagon_clicked()
{
    QPointer <Hexagon> hexagon = new Hexagon(50);

    scene->addItem(hexagon);
    objects.push_back(hexagon);

    emit addedToScene();
}


void MainWindow::on_star5_clicked()
{
    Star5* star5 = new Star5(60, 25);

    scene->addItem(star5);
    objects.push_back(star5);

    emit addedToScene();
}


void MainWindow::on_star6_clicked()
{
    QPointer <Star6> star6 = new Star6(80, 45);

    scene->addItem(star6);
    objects.push_back(star6);

    emit addedToScene();
}


void MainWindow::on_star8_clicked()
{
    QPointer <Star8> star8 = new Star8(80, 50);

    scene->addItem(star8);
    objects.push_back(star8);

    emit addedToScene();
}
