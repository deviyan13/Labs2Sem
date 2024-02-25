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
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->deductSpeed->setStyleSheet("QPushButton:disabled { color: gray; background-color: lightgray; }");
    ui->addSpeed->setStyleSheet("QPushButton:disabled { color: gray; background-color: lightgray; }");
    ui->stopMoving->setStyleSheet("QPushButton:disabled { color: gray; background-color: lightgray; }");
    ui->startMoving->setStyleSheet("QPushButton:disabled { color: gray; background-color: lightgray; }");

    ui->addSpeed->setDisabled(true);
    ui->deductSpeed->setDisabled(true);
    ui->stopMoving->setDisabled(true);
    ui->stopMoving->setDisabled(true);

    wagon = new Wagon();

    scene->addItem(wagon);

    movingObjectTimer = new QTimer(this);
    speedUpdating = new QTimer(this);

    connect(speedUpdating, &QTimer::timeout, [this](){
        ui->speed->setText("Speed: " + QString::number(wagon->getSpeed()));
        if(wagon->getSpeed() == 20 || wagon->getSpeed() == 0)
            {
            ui->addSpeed->setDisabled(true);
        }
        else ui->addSpeed->setDisabled(false);
    });

    speedUpdating->start(10);

    connect(movingObjectTimer, &QTimer::timeout,
            wagon, &Rectangle::moveRect);

    connect(ui->addSpeed, &QPushButton::clicked,
            wagon, &Rectangle::addSpeed);

    connect(ui->deductSpeed, &QPushButton::clicked,
            wagon, &Rectangle::deductSpeed);

    connect(wagon, &Wagon::stop, this, [this]() {
        movingObjectTimer->stop();
        wagon->setSpeed(0);

        ui->stopMoving->setDisabled(true);
        ui->startMoving->setDisabled(false);
        ui->addSpeed->setDisabled(true);
        ui->deductSpeed->setDisabled(true);
    });


    connect(wagon, &Wagon::highSpeed, this, [this]() {
        ui->addSpeed->setDisabled(false);
        ui->deductSpeed->setDisabled(false);
        ui->addSpeed->setDisabled(true);
    });


}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startMoving_clicked()
{
    movingObjectTimer->start(1000/120);
    wagon->setSpeed(1);

    ui->startMoving->setDisabled(true);
    ui->stopMoving->setDisabled(false);
    ui->addSpeed->setDisabled(false);
    ui->deductSpeed->setDisabled(false);
}

void MainWindow::on_stopMoving_clicked()
{
    movingObjectTimer->stop();
    wagon->setSpeed(0);

    ui->stopMoving->setDisabled(true);
    ui->startMoving->setDisabled(false);
    ui->addSpeed->setDisabled(true);
    ui->deductSpeed->setDisabled(true);
}
