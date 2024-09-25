#include "server.h"

Server::Server(Database_Fasade* Database_) {
    Database = Database_;
    connect(this, &Server::acceptError, this, [this](QAbstractSocket::SocketError socketError) {
        emit log(QString("Accept error: ").arg(socketError));
    });
    nextBlockSize = 0;
}

void Server::Start(quint16 port)
{
    if(this->listen(QHostAddress::Any, port))
    {
        emit start();
        emit log("Сервер запущен.");

        Sockets = new QVector<QTcpSocket*>();
    }
    else
        emit log("Ошибка запуска сервера.");
}

void Server::Stop()
{
    for (QTcpSocket *socket : *Sockets)
    {
        Database->disconnect(socket);
        socket->disconnectFromHost();
        socket->deleteLater();
    }

    Sockets->clear();

    close();

    emit stop();
    emit log("Сервер отключен.");
}

void Server::SendToClient(QString str)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_2);
    out << quint16(0) << str;
    out.device()->seek(0);
    out << quint16(Data.size() - sizeof(quint16));
    socket->write(Data);
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket;

    if (!socket->setSocketDescriptor(socketDescriptor)) {
        emit log("Ошибка подключения клиента, номер дескриптора сокета: %1.");
        delete socket;
        return;
    }

    connect(socket, &QTcpSocket::disconnected, this, &Server::slotDisconnected);
    connect(socket, &QTcpSocket::readyRead, this, &Server::slotReadyRead);

    emit log(QString("Подключился клиент, номер дескриптора сокета: %1.").arg(socketDescriptor));

    Sockets->push_back(socket);
}

void Server::slotDisconnected()
{
    emit log("Отключился клиент.");
    socket = (QTcpSocket*)sender();

    Database->disconnect(socket);

    auto it = std::find(Sockets->begin(), Sockets->end(), socket);
    if (it != Sockets->end())
        Sockets->erase(it);

    socket->deleteLater();
}

void Server::slotReadyRead()
{
    socket = (QTcpSocket*)sender();
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
        emit log(strres);
        QString Answer = Database->Request(strres, socket, Sockets);
        if(Answer != "")
            SendToClient(Answer);

    }
    else
        emit log("Ошибка чтения потока данных.");
}
