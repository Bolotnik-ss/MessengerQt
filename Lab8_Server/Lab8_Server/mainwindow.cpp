#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent, Server* server)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , Is_Key_Hidden(true)
    , State(false)
    , server(server)
{
    ui->setupUi(this);

    ui->Deploy->setEnabled(false);
    ui->Retract->setEnabled(false);

    QIntValidator* iv = new QIntValidator(0, 65535);
    ui->Port->setValidator(iv);

    QNetworkAccessManager manager;
    QNetworkRequest request(QUrl("http://ipinfo.io/ip"));
    QEventLoop loop;
    QObject::connect(&manager, &QNetworkAccessManager::finished, &loop, &QEventLoop::quit);
    QNetworkReply *reply = manager.get(request);
    loop.exec();
    if (reply->error() == QNetworkReply::NoError)
    {
        QString ipAddress = reply->readAll();
        delete reply;
        QRegularExpression regex("\\s");
        ipAddress.remove(regex);
        ui->IP_Address->setText(ipAddress);
    }
    else
    {
        ui->IP_Address->setText("Ошибка определения!");
        delete reply;
    }

    ui->Port->setFocus();
    QWidget::setTabOrder(ui->Port, ui->Deploy);

    connect(ui->Port, &QLineEdit::textEdited, this, &MainWindow::Update_Buttons);

    connect(ui->Deploy, &QPushButton::clicked, this, &MainWindow::Try_Deploy);
    connect(ui->Deploy, &QPushButton::clicked, this, &MainWindow::Update_Buttons);

    connect(ui->Retract, &QPushButton::clicked, this, &MainWindow::Try_Retract);
    connect(ui->Retract, &QPushButton::clicked, this, &MainWindow::Update_Buttons);

    connect(server, &Server::start, this, &MainWindow::Deploy);
    connect(server, &Server::stop, this, &MainWindow::Retract);
    connect(server, &Server::log, this, &MainWindow::Write_Log);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Update_Buttons()
{
    if(State)
    {
        ui->Deploy->setEnabled(false);
        ui->Retract->setEnabled(true);
    }
    else
    {
        ui->Retract->setEnabled(false);
        if(!ui->Port->text().isEmpty())
            ui->Deploy->setEnabled(true);
    }
}

void MainWindow::Try_Deploy()
{
    server->Start((quint16)ui->Port->text().toInt());
}

void MainWindow::Deploy()
{
    State = true;
    ui->State->setText("Включен");
    ui->Port->setReadOnly(true);
}

void MainWindow::Try_Retract()
{
    server->Stop();
}

void MainWindow::Retract()
{
    State = false;
    ui->State->setText("Выключен");
    ui->Port->setReadOnly(false);
}

void MainWindow::Write_Log(QString Log)
{
    ui->Logs->append(Log);
}
