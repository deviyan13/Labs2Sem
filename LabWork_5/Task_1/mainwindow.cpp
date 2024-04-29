#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    keyboard = new Keyboard();
    ui->widgetForKeyboard->setLayout(keyboard);


    ui->comboBox->addItem("Пусто");
    ui->comboBox->addItem("Беларуская мова");
    ui->comboBox->addItem("Deutsch");
    ui->comboBox->addItem("Français");
    ui->comboBox->addItem("عرب");
    ui->comboBox->addItem("עִברִית");

    connect(ui->comboBox, &QComboBox::currentIndexChanged, this, [=](int index)
            {
        if(index == 1)
        {
            keyboard->setBelaruisan();
        }
        if(index == 2)
        {
            keyboard->setGerman();
        }
        if(index == 3)
        {
            keyboard->setFrench();
        }
        if(index == 4)
        {
            keyboard->setArabic();
        }
        if(index == 5)
        {
            keyboard->setHebrew();
        }
    });

    ui->comboBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);

    ui->widget->setFocus();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    keyboard->keyPressEvent(event);
}

MainWindow::~MainWindow()
{
    delete ui;
}

