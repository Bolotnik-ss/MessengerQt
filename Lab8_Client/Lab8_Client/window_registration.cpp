#include "windows_login_and_regisration.h"
#include "ui_window_registration.h"

Window_Registration::Window_Registration(QMainWindow* parent, Client* client)
    : QMainWindow(parent)
    , ui(new Ui::Window_Registration)
    , Is_Password_Hidden(true)
    , Is_Reply_Password_Hidden(true)
    , client(client)
    , window_login(parent)
{
    ui->setupUi(this);

    ui->Error->setStyleSheet("color: rgb(250, 55, 55)");

    ui->Password->setEchoMode(QLineEdit::Password);
    ui->Reply_Password->setEchoMode(QLineEdit::Password);

    ui->Sign_Up->setEnabled(false);

    QIntValidator* iv = new QIntValidator(0, 65535);
    ui->Port->setValidator(iv);

    ui->Login->setFocus();
    QWidget::setTabOrder(ui->Login, ui->Password);
    QWidget::setTabOrder(ui->Password, ui->Reply_Password);
    QWidget::setTabOrder(ui->Reply_Password, ui->IP_Address);
    QWidget::setTabOrder(ui->IP_Address, ui->Port);
    QWidget::setTabOrder(ui->Port, ui->Sign_Up);

    connect(ui->Show_Password, &QCheckBox::stateChanged, this, &Window_Registration::Show_Password);

    connect(ui->Login, &QLineEdit::textEdited, this, &Window_Registration::Update_Button);
    connect(ui->Password, &QLineEdit::textEdited, this, &Window_Registration::Update_Button);
    connect(ui->Reply_Password, &QLineEdit::textEdited, this, &Window_Registration::Update_Button);
    connect(ui->IP_Address, &QLineEdit::textEdited, this, &Window_Registration::Update_Button);
    connect(ui->Port, &QLineEdit::textEdited, this, &Window_Registration::Update_Button);

    connect(ui->Login_Window, &QPushButton::clicked, this, &Window_Registration::Login_Window);

    connect(ui->Sign_Up, &QPushButton::clicked, this, &Window_Registration::Sign_Up);

    connect(client, &Client::connectionError, this, &Window_Registration::Connection_Error);
    connect(client, &Client::getMessage, this, &Window_Registration::Answer);
}

Window_Registration::~Window_Registration()
{
    delete ui;
}

void Window_Registration::Show_Password()
{
    Interface::Show(ui->Password, Is_Password_Hidden);
    Interface::Show(ui->Reply_Password, Is_Reply_Password_Hidden);
}

void Window_Registration::Update_Button()
{
    if(!ui->Login->text().isEmpty() && !ui->Password->text().isEmpty() && !ui->Reply_Password->text().isEmpty() && !ui->IP_Address->text().isEmpty() && !ui->Port->text().isEmpty())
        ui->Sign_Up->setEnabled(true);
    else
        ui->Sign_Up->setEnabled(false);
}

void Window_Registration::Login_Window()
{
    if(!window_login)
        window_login = new Window_Login(this, client);
    close();
    window_login->show();
}

void Window_Registration::Sign_Up()
{
    ui->Error->clear();
    if(ui->Password->text() != ui->Reply_Password->text())
        ui->Error->setText("Пароли должны совпадать.");
    else
    {
        QRegularExpression ipv4Regex(R"((\b25[0-5]\b|\b2[0-4][0-9]\b|\b1[0-9][0-9]\b|\b[1-9]?[0-9]\b)(\.(\b25[0-5]\b|\b2[0-4][0-9]\b|\b1[0-9][0-9]\b|\b[1-9]?[0-9]\b)){3})");
        QRegularExpressionMatch match = ipv4Regex.match(ui->IP_Address->text());
        if(match.hasMatch() || ui->IP_Address->text().toLower() == "localhost")
        {
            client->Connect(ui->IP_Address->text(), (quint16)ui->Port->text().toInt());
            client->SendToServer(QString("/r/%1//%2/e/").arg(ui->Login->text(), ui->Password->text()));
        }
        else
        {
            ui->Error->setText("Некорректный формат IP-адреса.");
        }
    }
}

void Window_Registration::Connection_Error()
{
    ui->Error->setText("Превышено время ожидания ответа сервера. Проверьте Ip-адрес и порт.");
}

void Window_Registration::Answer(QString answer)
{
    if(answer.startsWith("/r/"))
    {
        QRegularExpression regex("/r/(.*)/e/");
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

