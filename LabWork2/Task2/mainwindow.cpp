#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->acceptAdding->hide();

    setStyleSheet("QLineEdit:disabled, QSpinBox:disabled, QPushButton:disabled,"
                  " QComboBox:disabled, QListWidget:disabled { background-color: #D3D3D3; }");


    FACULTIES = {"—", "ФРЭ", "ФКСиС", "ИЭФ"};

    FKSIS = {"—", "ИиТП", "КИ", "ПИ"};
    IEF = {"—", "ИСиТ", "ЭЭ"};
    FRE = {"—", "ИиУСФУ", "ИПД", "МиН", "НиН", "РиР"};

    GROUPS_PI = {"—", "351001", "351002", "351003", "351004", "351005"};
    GROUPS_KI = {"—", "358301", "358302", "358303", "358304", "358305", "358306", "358307"};
    GROUPS_IITP = {"—", "353501", "353502", "353503", "353504", "353505"};

    GROUPS_ISIT = {"—", "378101", "378102" ,"378103", "378104", "378105", "378106", "378107", "378108"};
    GROUPS_EE = {"—", "373901", "373902", "373903", "373904"};

    GROUPS_IIUSFU = {"—", "348001"};
    GROUPS_IPD = {"—", "344671"};
    GROUPS_MIN = {"—", "348601", "348602"};
    GROUPS_NIN = {"—", "343201"};
    GROUPS_RIR = {"—", "348801", "348802", "348803", "348804"};

    ui->comboFaculty->clear();
    ui->comboFaculty->addItems(FACULTIES);

    connect(ui->comboFaculty, &QComboBox::currentIndexChanged, this, &MainWindow::changeSpecialityCombo);
    connect(ui->comboSpeciality, &QComboBox::currentIndexChanged, this, &MainWindow::changeGroupCombo);

    ui->spinAgila->findChild<QLineEdit*>()->setMaxLength(2);
    ui->spinDM->findChild<QLineEdit*>()->setMaxLength(2);
    ui->spinHist->findChild<QLineEdit*>()->setMaxLength(2);
    ui->spinMatan->findChild<QLineEdit*>()->setMaxLength(2);
    ui->spinOAIP->findChild<QLineEdit*>()->setMaxLength(2);

    ui->lineName->setMaxLength(75);

    ui->spinAgila->setRange(0, 10);
    ui->spinDM->setRange(0, 10);
    ui->spinHist->setRange(0, 10);
    ui->spinMatan->setRange(0, 10);
    ui->spinOAIP->setRange(0, 10);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeSpecialityCombo()
{
    if(ui->comboFaculty->currentText() == "—")
    {
        ui->comboSpeciality->clear();
        ui->comboGroup->clear();
    }

    else if(ui->comboFaculty->currentText() == "ФРЭ")
    {
        ui->comboSpeciality->clear();
        ui->comboSpeciality->addItems(FRE);
        ui->comboGroup->clear();
    }
    else if(ui->comboFaculty->currentText() == "ФКСиС")
    {
        ui->comboSpeciality->clear();
        ui->comboSpeciality->addItems(FKSIS);
        ui->comboGroup->clear();
    }
    else if(ui->comboFaculty->currentText() == "ИЭФ")
    {
        ui->comboSpeciality->clear();
        ui->comboSpeciality->addItems(IEF);
        ui->comboGroup->clear();
    }
}

void MainWindow::changeGroupCombo()
{
    if(ui->comboFaculty->currentText() == "ФКСиС")
    {
        if(ui->comboSpeciality->currentText() == "КИ")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_KI);
        }
        else if(ui->comboSpeciality->currentText() == "ПИ")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_PI);
        }
        else if(ui->comboSpeciality->currentText() == "ИиТП")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_IITP);
        }
    }
    else if(ui->comboFaculty->currentText() == "ФРЭ")
    {
        if(ui->comboSpeciality->currentText() == "ИиУСФУ")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_KI);
        }
        else if(ui->comboSpeciality->currentText() == "ИПД")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_IPD);
        }
        else if(ui->comboSpeciality->currentText() == "МиН")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_MIN);
        }
        else if(ui->comboSpeciality->currentText() == "НиН")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_NIN);
        }
        else if(ui->comboSpeciality->currentText() == "РиР")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_RIR);
        }
    }
    else if(ui->comboFaculty->currentText() == "ИЭФ")
    {
        if(ui->comboSpeciality->currentText() == "ЭЭ")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_EE);
        }
        else if(ui->comboSpeciality->currentText() == "ИСиТ")
        {
            ui->comboGroup->clear();
            ui->comboGroup->addItems(GROUPS_ISIT);
        }
    }
}

void MainWindow::on_exitButton_clicked()
{
    if(openedFile && openedFile->isOpen()) openedFile->close();
    close();
}


void MainWindow::on_openButton_clicked()
{
    openedFileName = QFileDialog::getOpenFileName(this, "Выберите файл", "/home/deviyan/QTprojects/LabWork2/", "Текстовые файлы (*.txt)");
    openedFile = new QFile(openedFileName);

    if(openedFile->open(QIODevice::ReadWrite))
    {
        ui->addButton->setEnabled(true);
        ui->findButton->setEnabled(true);
        ui->saveButton->setEnabled(true);
        ui->sortButton->setEnabled(true);

        ui->listWidget->setEnabled(true);

        QTextStream in(openedFile);

        while(!in.atEnd())
        {
            QString name = in.readLine();

            QString fac, spec, gr;
            double matan, oaip, agila, hist, dm;

            in >> fac >> spec >> gr;
            in >> matan >> oaip >> agila >> hist >> dm;

            studentsList.push_back(Student(name, fac, spec, gr, matan, oaip, agila, hist, dm));

            in.readLine();
        }

        for(int i = 0; i < studentsList.size(); i++)
        {
            //ui->listWidget->addItem(studentsList[i].getFIO());
            ui->listWidget->addItem(" (" + studentsList[i].getGroup() + ") "
                                    + studentsList[i].getFIO()
                                    + " — " + QString::number(studentsList[i].getAvgMark()));

        }
    }
}

void MainWindow::on_saveButton_clicked()
{
    QString savedFileName = QFileDialog::getSaveFileName(this, "Куда сохранить файл", "", "Текстовый файл .txt (*.txt)");

    if(!savedFileName.endsWith(".txt")) savedFileName += ".txt";

    if(!savedFileName.isEmpty())
    {
        openedFile->open(QIODevice::ReadOnly);

        openedFile->seek(0);

        QByteArray text = openedFile->readAll();

        QFile savedFile(savedFileName);
        savedFile.open(QIODevice::WriteOnly);

        QTextStream out(&savedFile);
        savedFile.seek(0);

        out << text;

        savedFile.close();

        ui->statusbar->showMessage("Файл сохранен.", 5000);
    }
}

void MainWindow::on_addButton_clicked()
{
    ui->addButton->setEnabled(false);

    ui->spinAgila->setEnabled(true);
    ui->spinDM->setEnabled(true);
    ui->spinHist->setEnabled(true);
    ui->spinMatan->setEnabled(true);
    ui->spinOAIP->setEnabled(true);

    ui->comboFaculty->setEnabled(true);
    ui->comboGroup->setEnabled(true);
    ui->comboSpeciality->setEnabled(true);
    ui->lineName->setEnabled(true);

    ui->addButton->setEnabled(false);
    ui->findButton->setEnabled(false);
    ui->saveButton->setEnabled(false);
    ui->sortButton->setEnabled(false);
    ui->openButton->setEnabled(false);

    ui->listWidget->setEnabled(false);


    ui->acceptAdding->show();
    ui->acceptAdding->setEnabled(false);

    QTimer* timer = new QTimer();

    connect(timer, &QTimer::timeout, [=](){
        if(ui->comboFaculty->count() > 0 && ui->comboFaculty->currentText() != "—" && ui->comboSpeciality->count() > 0
            && ui->comboSpeciality->currentText() != "—" && ui->comboGroup->count() > 0 && ui->comboGroup->currentText() != "—"
            && ui->lineName->text() != "")
        {
            ui->acceptAdding->setEnabled(true);
        }
        else
        {
            ui->acceptAdding->setEnabled(false);
        }

        double avgMark = (ui->spinAgila->value() + ui->spinDM->value() + ui->spinHist->value() + ui->spinMatan->value() + ui->spinOAIP->value()) / 5.0;
        ui->lineAvgMark->setText(QString::number(avgMark));
    });

    timer->start(10);
}


void MainWindow::on_acceptAdding_clicked()
{
    QString name = ui->lineName->text();


    QString fac = ui->comboFaculty->currentText(), spec = ui->comboSpeciality->currentText(), gr = ui->comboGroup->currentText();
    double matan = ui->spinMatan->value(), oaip = ui->spinOAIP->value(), agila = ui->spinAgila->value(),
        hist = ui->spinHist->value(), dm = ui->spinDM->value();

    studentsList.push_back(Student(name, fac, spec, gr, matan, oaip, agila, hist, dm));

    ui->listWidget->addItem(" (" + studentsList.back().getGroup() + ") "
                            + studentsList.back().getFIO()
                            + " — " + QString::number(studentsList.back().getAvgMark()));

    ui->lineName->setEnabled(false);
    ui->comboFaculty->setEnabled(false);
    ui->comboSpeciality->setEnabled(false);
    ui->comboGroup->setEnabled(false);

    ui->spinAgila->setEnabled(false);
    ui->spinDM->setEnabled(false);
    ui->spinHist->setEnabled(false);
    ui->spinMatan->setEnabled(false);
    ui->spinOAIP->setEnabled(false);

    ui->acceptAdding->hide();

    ui->addButton->setEnabled(true);
    ui->findButton->setEnabled(true);
    ui->saveButton->setEnabled(true);
    ui->sortButton->setEnabled(true);

    ui->listWidget->setEnabled(true);
}


