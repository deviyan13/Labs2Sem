#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableIter->resizeColumnsToContents();

    vector.resize(3);

    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;


    updateListWidget();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateListWidget()
{
    ui->listWidget->clear();

    for(int i = 0; i < vector.size(); i++)
    {
        ui->listWidget->addItem(QString::number(vector[i]));
    }

    ui->lineCapacity->setText(QString::number(vector.capacity()));
    ui->lineMaxSize->setText(QString::number(vector.max_size()));
    ui->lineSize->setText(QString::number(vector.size()));

    ui->tableIter->setItem(0, 0, new QTableWidgetItem(!vector.empty() ? QString::number(*vector.begin()) : "Error"));
    ui->tableIter->setItem(1, 0, new QTableWidgetItem(!vector.empty() ? QString::number(*vector.end()) : "Error"));
    ui->tableIter->setItem(2, 0, new QTableWidgetItem(!vector.empty() ? QString::number(*vector.cbegin()) : "Error"));
    ui->tableIter->setItem(3, 0, new QTableWidgetItem(!vector.empty() ? QString::number(*vector.cend()) : "Error"));
    ui->tableIter->setItem(4, 0, new QTableWidgetItem(!vector.empty() ? QString::number(*vector.rbegin()) : "Error"));
    ui->tableIter->setItem(5, 0, new QTableWidgetItem(!vector.empty() ? QString::number(*vector.rend()) : "Error"));
    ui->tableIter->setItem(6, 0, new QTableWidgetItem(vector.empty() ? "True" : "False"));
    ui->tableIter->setItem(7, 0, new QTableWidgetItem(!vector.empty() ? QString::number(vector.front()) : "Error"));
    ui->tableIter->setItem(8, 0, new QTableWidgetItem(!vector.empty() ? QString::number(vector.back()) : "Error"));
    ui->tableIter->setItem(9, 0, new QTableWidgetItem(QString("0x%1").arg(reinterpret_cast<quintptr>(vector.data()), 0, 16)));

    ui->tableIter->resizeColumnsToContents();
}

void MainWindow::on_buttonClear_clicked()
{
    vector.clear();
    updateListWidget();
}


void MainWindow::on_buttonPopBack_clicked()
{
    if(vector.empty()) QMessageBox::warning(this, "Ошибка", "Вектор пустой!");
    else
    {
        vector.pop_back();
        updateListWidget();
    }
}

void MainWindow::on_buttonPushBack_clicked()
{
    DialogInputPushBack* dialog = new DialogInputPushBack();

    int value;

    connect(dialog, &DialogInputPushBack::accepted, [&value, dialog, this](){
        value = dialog->getValue();
        vector.push_back(value);
        updateListWidget();
    });

    dialog->exec();
}


void MainWindow::on_buttonAt_clicked()
{
    DialogInputPushBack* dialog = new DialogInputPushBack();

    if(vector.empty()) QMessageBox::warning(this, "Ошибка", "Вектор пустой!");

    else
    {
        dialog->setRange(0, vector.size() - 1);

        int value;

        connect(dialog, &DialogInputPushBack::accepted, [&value, dialog, this](){
            value = dialog->getValue();
            QMessageBox::information(this, "Ссылка на элемент",
                                     "Значение элемента на\nданной позиции: " + QString::number(vector.at(value)));
        });

        dialog->exec();
    }
}


void MainWindow::on_buttonReserve_clicked()
{
    DialogInputPushBack* dialog = new DialogInputPushBack();

        int value;

        dialog->setRange(0, 1000);

        connect(dialog, &DialogInputPushBack::accepted, [&value, dialog, this](){
            value = dialog->getValue();

            vector.reserve(value);

            updateListWidget();
        });

        dialog->setValue(vector.capacity());

        dialog->exec();
}


void MainWindow::on_buttonResize_clicked()
{
    DialogInputPushBack* dialog = new DialogInputPushBack();
        int value;

        dialog->setRange(0, 1000);

        connect(dialog, &DialogInputPushBack::accepted, [&value, dialog, this](){
            value = dialog->getValue();

            vector.resize(value);

            updateListWidget();
        });

        dialog->setValue(vector.size());

        dialog->exec();
}

