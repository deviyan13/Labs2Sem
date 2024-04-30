#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    keyboard = new Keyboard();
    keyboard->setTextEdit(ui->textEdit);
    timer = new QTimer();

    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    connect(keyboard, &Keyboard::oneWordWasInputed, this, &MainWindow::oneWordPlus);
    connect(keyboard, &Keyboard::endOfInput, this, &MainWindow::endOfInput);

    elapsedTime = 0;
    inputedWords = 0;

    ui->widgetForKeyboard->setLayout(keyboard);

    ui->comboBox->addItem("Не выбран язык");
    ui->comboBox->addItem("Беларуская мова");
    ui->comboBox->addItem("Deutsch");
    ui->comboBox->addItem("Français");
    ui->comboBox->addItem("عرب");
    ui->comboBox->addItem("עִברִית");
    ui->comboBox->addItem("拼音");

    connect(ui->comboBox, &QComboBox::currentIndexChanged, this, [=](int index)
    {
        if(index == 0)
        {
            keyboard->clear();
        }
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
        if(index == 6)
        {
            keyboard->setChinese();
        }
    });

    keyboard->clear();

    ui->comboBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->textEdit->setFocusPolicy(Qt::FocusPolicy::NoFocus);


    ui->textEdit->setPlainText("Ich hatte Angst: vor dem Berühren, vor dem Küssen, davor, daß ich ihr nicht gefallen und nicht genügen würde. Aber als wir uns eine Weile gehalten hatten, ich ihren Geruch gerochen und ihre Wärme und Kraft gefühlt hatte, wurde alles selbstverständlich. Das Erforschen ihres Körpers mit Händen und Mund, die Begegnung der Münder und schließlich sie über mir, Auge in Auge, bis es mir kam und ich die Augen fest schloß und zunächst mich zu beherrschen versuchte und dann so laut schrie, daß sie den Schrei mit ihrer Hand auf meinem Mund erstickte. ");

    QTextCursor cursor = ui->textEdit->textCursor();


    cursor.setPosition(0);
    ui->textEdit->setTextCursor(cursor);

    ui->widget->setFocus();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    ui->widget->setFocus();
    keyboard->keyPressEvent(event);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_openFileButton_clicked()
{
    QString openedFileName = QFileDialog::getOpenFileName(this, "Выберите файл", "/home/deviyan/QTprojects/LabWork_5/Task_1/files", "Текстовые файлы (*.txt)");
    QFile *openedFile = new QFile(openedFileName);

    if(openedFile->open(QIODevice::ReadWrite))
    {
        QTextStream in(openedFile);
        ui->textEdit->clear();

        while(!in.atEnd())
        {
            QString text = in.readLine();
            ui->textEdit->setPlainText(text);
        }

        QTextCursor cursor = ui->textEdit->textCursor();

        cursor.setPosition(0);
        ui->textEdit->setTextCursor(cursor);

    }

    openedFile->close();
}


void MainWindow::on_beginButton_clicked()
{
    elapsedTime = 0;
    timer->start(10);

}

void MainWindow::updateTime()
{
    // Увеличиваем счетчик времени
    elapsedTime++;

    // Вычисляем часы, минуты и секунды
    int minutes = (elapsedTime / 6000) % 60;
    int seconds = (elapsedTime / 100) % 60;
    int miliseconds = elapsedTime % 100;

    // Форматируем время в виде строки
    QString timeStr = QString("%1:%2.%3")
                          .arg(minutes, 2, 10, QLatin1Char('0'))
                          .arg(seconds, 2, 10, QLatin1Char('0'))
                          .arg(miliseconds, 3, 10, QLatin1Char('0'));

    // Обновляем текст QLabel
    ui->labelTimer->setText(timeStr);

}

void MainWindow::oneWordPlus()
{
    ui->labelWords->setText(QString::number(++inputedWords));
}

void MainWindow::endOfInput()
{
    timer->stop();
    QMessageBox::information(this, "lol", "it's all!");
}

