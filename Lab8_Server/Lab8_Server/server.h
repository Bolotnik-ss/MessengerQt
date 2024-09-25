#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include "database_fasade.h"

class Server : public QTcpServer
{
    Q_OBJECT

public:
    Server(Database_Fasade*);
    void Start(quint16);
    void Stop();

private:
    QTcpSocket* socket;
    QVector<QTcpSocket*>* Sockets;
    QByteArray Data;
    void SendToClient(QString);
    quint16 nextBlockSize;
    Database_Fasade* Database;

public slots:
    void incomingConnection(qintptr socketDescriptor);
    void slotDisconnected();
    void slotReadyRead();

signals:
    void start();
    void stop();
    void log(QString);

};

#endif // SERVER_H
