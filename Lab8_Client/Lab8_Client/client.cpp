#include "mainwindow_and_client.h"

Client::Client(QObject *parent) : QObject{parent}
{
    socket = new QTcpSocket(this);
    nextBlockSize = 0;

    connect(socket, &QTcpSocket::disconnected, this, &Client::slotDisconnected);
    connect(socket, &QTcpSocket::readyRead, this, &Client::slotReadyRead);
}

void Client::Connect(QString Address, quint16 port)
{
    socket->connectToHost(Address, port);
    if (!socket->waitForConnected(5000)) emit connectionError();
}

void Client::slotDisconnected()
{
    emit getMessage(QString("/e/Разорвано соединение с сервером./e/"));
    socket->deleteLater();
}

void Client::SendToServer(QString str)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_2);
    out << quint16(0) << str;
    out.device()->seek(0);
    out << quint16(Data.size() - sizeof(quint16));
    socket->write(Data);
}

void Client::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_2);
    if(in.status() == QDataStream::Ok)
    {
        QString strres;
        for(;;)
        {
            if(nextBlockSize == 0)
            {
                if(socket->bytesAvailable() < 2)
                {
                    break;
                }
                in >> nextBlockSize;
            }
            if(socket->bytesAvailable() < nextBlockSize)
            {
                break;
            }
            QString str;
            in >> str;
            nextBlockSize = 0;
            strres += str;
            break;
        }
        emit getMessage(strres);
    }
    else
        emit getMessage("/e/Ошибка чтения потока данных./e/");
}

void Client::Set_Login(QString Login_)
{
    Login = Login_;
}

QString Client::Get_Login()
{
    return Login;
}

void Client::Set_Active_Chat(QString Active_Chat_)
{
    Active_Chat = Active_Chat_;
}

QString Client::Get_Active_Chat()
{
    return Active_Chat;
}
