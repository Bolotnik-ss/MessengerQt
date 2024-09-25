#include "windows_login_and_regisration.h"
#include "ui_window_login.h"

Window_Login::Window_Login(QMainWindow* parent, Client* client)
    : QMainWindow(parent)
    , ui(new Ui::Window_Login)
    , Is_Password_Hidden(true)
    , client(client)
    , window_registration(parent)
{
    ui->setupUi(this);

    ui->Error->setStyleSheet("color: rgb(250, 55, 55)");

    ui->Password->setEchoMode(QLineEdit::Password);

    ui->Log_In->setEnabled(false);

    QIntValidator* iv = new QIntValidator(0, 65535);
    ui->Port->setValidator(iv);

    ui->Login->setFocus();
    QWidget::setTabOrder(ui->Login, ui->Password);
    QWidget::setTabOrder(ui->Password, ui->IP_Address);
    QWidget::setTabOrder(ui->IP_Address, ui->Port);
    QWidget::setTabOrder(ui->Port, ui->Log_In);

    connect(ui->Show_Password, &QCheckBox::stateChanged, this, &Window_Login::Show_Password);

    connect(ui->Login, &QLineEdit::textEdited, this, &Window_Login::Update_Button);
    connect(ui->Password, &QLineEdit::textEdited, this, &Window_Login::Update_Button);
    connect(ui->IP_Address, &QLineEdit::textEdited, this, &Window_Login::Update_Button);
    connect(ui->Port, &QLineEdit::textEdited, this, &Window_Login::Update_Button);

    connect(ui->Registration_Window, &QPushButton::clicked, this, &Window_Login::Registration_Window);

    connect(ui->Log_In, &QPushButton::clicked, this, &Window_Login::Log_In);

    connect(client, &Client::connectionError, this, &Window_Login::Connection_Error);
    connect(client, &Client::getMessage, this, &Window_Login::Answer);
}

Window_Login::~Window_Login()
{
    delete ui;
}


void Window_Login::Show_Password()
{
    Interface::Show(ui->Password, Is_Password_Hidden);
}


void Window_Login::Update_Button()
{
    if(!ui->Login->text().isEmpty() && !ui->Password->text().isEmpty() && !ui->IP_Address->text().isEmpty() && !ui->Port->text().isEmpty())
        ui->Log_In->setEnabled(true);
    else
        ui->Log_In->setEnabled(false);
}

void Window_Login::Registration_Window()
{
    if(!window_registration)
        window_registration = new Window_Registration(this, client);
    close();
    window_registration->show();
}

void Window_Login::Log_In()
{
    ui->Error->clear();
    QRegularExpression ipv4Regex(R"((\b25[0-5]\b|\b2[0-4][0-9]\b|\b1[0-9][0-9]\b|\b[1-9]?[0-9]\b)(\.(\b25[0-5]\b|\b2[0-4][0-9]\b|\b1[0-9][0-9]\b|\b[1-9]?[0-9]\b)){3})");
    QRegularExpressionMatch match = ipv4Regex.match(ui->IP_Address->text());
    if(match.hasMatch() || ui->IP_Address->text().toLower() == "localhost")
    {
        client->Connect(ui->IP_Address->text(), (quint16)ui->Port->text().toInt());
        client->SendToServer(QString("/l/%1//%2/e/").arg(ui->Login->text(), ui->Password->text()));
    }
    else
    {
        ui->Error->setText("Некорректный формат IP-адреса.");
    }
}

void Window_Login::Connection_Error()
{
    ui->Error->setText("Превышено время ожидания ответа сервера. Проверьте Ip-адрес и порт.");
}

void Window_Login::Answer(QString answer)
{
    if(answer.startsWith("/l/"))
    {
        QRegularExpression regex("/l/(.*)/e/");
        QRegularExpressionMatch match = regex.match(answer);
        answer = match.captured(1);

        if(answer == "success")
        {
            client->Set_Login(ui->Login->text());
            MainWindow* mainwindow = new MainWindow(nullptr, client);
            close();
            mainwindow->show();
        }
        else
            ui->Error->setText(answer);
    }
    else if(answer.startsWith("/e/"))
    {
        QRegularExpression regex("/e/(.*)/e/");
        QRegularExpressionMatch match = regex.match(answer);
        answer = match.captured(1);

        ui->Error->setText(answer);
    }
}
