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

    validator = new QDoubleValidator(-1000, 100, 3);
    validator->setLocale(QLocale::C);
    validator->setNotation(QDoubleValidator::StandardNotation);
    ui->x_line->setValidator(validator);
    ui->y_line->setValidator(validator);

    updatingScene = new QTimer();

    connect(updatingScene, &QTimer::timeout, [this]()
    {
        this->scene->update();

        if(scene != nullptr && scene->selectedItems().isEmpty())
        {
            if(ui->area_line->text() != "")
            {
                ui->area_line->clear();
                ui->perimetr_line->clear();
                ui->x_line->clear();
                ui->y_line->clear();
            }

            ui->x_line->setReadOnly(true);
            ui->y_line->setReadOnly(true);
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
                        if(obj->getIsMoving())
                        {
                            ui->x_line->setReadOnly(false);
                            ui->y_line->setReadOnly(false);
                            ui->x_line->setText(QString::number(obj->getCenter().x()));
                            ui->y_line->setText(QString::number(-obj->getCenter().y()));
                        }

                        if(obj->getIsScaling())
                        {
                            ui->area_line->setText(QString::number(obj->getArea()));
                            ui->perimetr_line->setText(QString::number(obj->getPerimetr()));
                        }
                    }
                }
            });

            connect(ui->x_line, &QLineEdit::textChanged, [=](){
                if(obj != nullptr)
                {
                    if(!obj->getIsMoving() && obj->isSelected())
                    {
                        obj->setPos((ui->x_line->text()).toDouble(), obj->getCenter().y());
                    }
                }

            });

            connect(ui->y_line, &QLineEdit::textChanged, [=](){
                if(obj != nullptr)
                {
                    if(!obj->getIsMoving() && obj->isSelected())
                    {
                        obj->setPos(obj->getCenter().x(), -(ui->y_line->text()).toDouble());
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
    if(objects.size() >= 20)
    {
        QMessageBox::warning(this, "Ошибочка вышла", "Вы уже добавили 20 объектов на сцену. Удалите что-нибудь для дальнешего добавления");
    }
    else
    {
        //Square* square = new Square(QPoint(0, 0), QPoint(50, 0), QPoint(50, 50), QPoint(0, 50));
        //QPointer <Square> square = new Square(QPoint(0, 0), QPoint(50, 0), QPoint(50, 50), QPoint(0, 50));
        QPointer <Square> square = new Square(50);


        scene->addItem(square);
        objects.push_back(square);

        emit addedToScene();
    }


}

void MainWindow::on_triangle_clicked()
{
    if(objects.size() >= 20)
    {
        QMessageBox::warning(this, "Ошибочка вышла", "Вы уже добавили 20 объектов на сцену. Удалите что-нибудь для дальнешего добавления");
    }
    else
    {
        QPointer <Triangle> triangle = new Triangle(QPoint(0, 70), QPoint(30, 0), QPoint(60, 70));

        scene->addItem(triangle);
        objects.push_back(triangle);

        emit addedToScene();
    }
}


void MainWindow::on_rhomb_clicked()
{

    if(objects.size() >= 20)
    {
        QMessageBox::warning(this, "Ошибочка вышла", "Вы уже добавили 20 объектов на сцену. Удалите что-нибудь для дальнешего добавления");
    }
    else
    {
        QPointer <Rhomb> rhomb = new Rhomb(QPoint(0, 40), QPoint(70, 0), QPoint(140, 40), QPoint(70, 80));

        scene->addItem(rhomb);
        objects.push_back(rhomb);

        emit addedToScene();
    }

}


void MainWindow::on_rectangle_clicked()
{

    if(objects.size() >= 20)
    {
        QMessageBox::warning(this, "Ошибочка вышла", "Вы уже добавили 20 объектов на сцену. Удалите что-нибудь для дальнешего добавления");
    }
    else
    {
        QPointer <Rectangle> rectangle = new Rectangle(QPointF(0, 0), QPointF(100, 0), QPointF(100, 50), QPointF(0, 50));

        scene->addItem(rectangle);
        objects.push_back(rectangle);

        emit addedToScene();
    }

}


void MainWindow::on_circle_clicked()
{
    if(objects.size() >= 20)
    {
        QMessageBox::warning(this, "Ошибочка вышла", "Вы уже добавили 20 объектов на сцену. Удалите что-нибудь для дальнешего добавления");
    }
    else
    {
        QPointer <Circle> circle = new Circle(50);

        scene->addItem(circle);
        objects.push_back(circle);

        emit addedToScene();
    }


}


void MainWindow::on_hexagon_clicked()
{
    if(objects.size() >= 20)
    {
        QMessageBox::warning(this, "Ошибочка вышла", "Вы уже добавили 20 объектов на сцену. Удалите что-нибудь для дальнешего добавления");
    }
    else
    {
        QPointer <Hexagon> hexagon = new Hexagon(50);

        scene->addItem(hexagon);
        objects.push_back(hexagon);

        emit addedToScene();
    }

}


void MainWindow::on_star5_clicked()
{
    if(objects.size() >= 20)
    {
        QMessageBox::warning(this, "Ошибочка вышла", "Вы уже добавили 20 объектов на сцену. Удалите что-нибудь для дальнешего добавления");
    }
    else
    {
        Star5* star5 = new Star5(60, 25);

        scene->addItem(star5);
        objects.push_back(star5);

        emit addedToScene();
    }

}


void MainWindow::on_star6_clicked()
{
    if(objects.size() >= 20)
    {
        QMessageBox::warning(this, "Ошибочка вышла", "Вы уже добавили 20 объектов на сцену. Удалите что-нибудь для дальнешего добавления");
    }
    else
    {
        QPointer <Star6> star6 = new Star6(80, 45);

        scene->addItem(star6);
        objects.push_back(star6);

        emit addedToScene();
    }

}


void MainWindow::on_star8_clicked()
{
    if(objects.size() >= 20)
    {
        QMessageBox::warning(this, "Ошибочка вышла", "Вы уже добавили 20 объектов на сцену. Удалите что-нибудь для дальнешего добавления");
    }
    else
    {
        QPointer <Star8> star8 = new Star8(80, 50);

        scene->addItem(star8);
        objects.push_back(star8);

        emit addedToScene();
    }

}



