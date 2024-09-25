#ifndef WINDOWS_LOGIN_AND_REGISRATION_H
#define WINDOWS_LOGIN_AND_REGISRATION_H

#include <QMainWindow>
#include <QIntValidator>
#include "interface.h"
#include "mainwindow_and_client.h"

class Window_Login;
class Window_Registration;

QT_BEGIN_NAMESPACE
namespace Ui {
class Window_Login;
class Window_Registration;
}
QT_END_NAMESPACE

class Window_Login : public QMainWindow
{
    Q_OBJECT

public:
    Window_Login(QMainWindow* parent = nullptr, Client* client = nullptr);
    ~Window_Login();

private slots:
    void Show_Password();
    void Update_Button();
    void Registration_Window();
    void Log_In();
    void Connection_Error();
    void Answer(QString);

private:
    Ui::Window_Login* ui;
    bool Is_Password_Hidden;
    Client* client;
    QMainWindow* window_registration;

};

class Window_Registration : public QMainWindow
{
    Q_OBJECT

public:
    Window_Registration(QMainWindow* parent = nullptr,  Client* client = nullptr);
    ~Window_Registration();

private slots:
    void Show_Password();
    void Update_Button();
    void Login_Window();
    void Sign_Up();
    void Answer(QString);
    void Connection_Error();

private:
    Ui::Window_Registration* ui;
    bool Is_Password_Hidden;
    bool Is_Reply_Password_Hidden;
    Client* client;
    QMainWindow* window_login;

};

#endif // WINDOWS_LOGIN_AND_REGISRATION_H
