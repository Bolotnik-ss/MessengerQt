#ifndef MAINWINDOW_AND_CLIENT_H
#define MAINWINDOW_AND_CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>

class MainWindow;
class Client;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QMainWindow* parent = nullptr, Client* client = nullptr);
    ~MainWindow();

private slots:
    void UpdateButtons();
    void Get_List(QString);
    void Try_Create();
    void Create(QString);
    void Try_Join();
    void Join(QString);
    void Try_Select();
    void Select(QString);
    void Send();
    void Get(QString);
    void Error(QString);

private:
    Ui::MainWindow *ui;
    Client* client;
};

class Client : public QObject
{
    Q_OBJECT

public:
    explicit Client(QObject *parent = nullptr);
    void Connect(QString, quint16);
    void SendToServer(QString);
    void Set_Login(QString);
    QString Get_Login();
    void Set_Active_Chat(QString);
    QString Get_Active_Chat();

private:
    QTcpSocket* socket;
    QByteArray Data;
    quint16 nextBlockSize;
    QString Login;
    QString Active_Chat;

public slots:
    void slotDisconnected();
    void slotReadyRead();

signals:
    void connectionError();
    void getMessage(QString);

};

#endif // MAINWINDOW_AND_CLIENT_H
