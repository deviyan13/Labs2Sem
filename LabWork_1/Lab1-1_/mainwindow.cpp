#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //rect = new Rectangle();

    wagon = new Wagon();

    scene->addItem(wagon);

    movingObjectTimer = new QTimer(this);
    speedUpdating = new QTimer(this);

    connect(speedUpdating, &QTimer::timeout, [this](){
        ui->speed->setText("Speed: " + QString::number(wagon->getSpeed()));
    });

    speedUpdating->start(10);

    connect(movingObjectTimer, &QTimer::timeout,
            wagon, &Rectangle::moveRect);

    connect(ui->addSpeed, &QPushButton::clicked,
            wagon, &Rectangle::addSpeed);

    connect(ui->deductSpeed, &QPushButton::clicked,
            wagon, &Rectangle::deductSpeed);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startMoving_clicked()
{
    movingObjectTimer->start(1000/120);
}

void MainWindow::on_stopMoving_clicked()
{
    movingObjectTimer->stop();
}


