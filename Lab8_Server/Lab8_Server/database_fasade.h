#ifndef DATABASE_FASADE_H
#define DATABASE_FASADE_H

#include <QHash>
#include <QRegularExpression>
#include <QDateTime>
#include "user_info.h"
#include "conversation_info_factory.h"

class Database_Fasade
{
private:
    QHash<QString, User_Info>* Users;
    QHash<QString, Abstract_Chat_Info*>* Chats;

public:
    Database_Fasade(QHash<QString, User_Info>*, QHash<QString, Abstract_Chat_Info*>*);
    QString Request(QString, QTcpSocket*, QVector<QTcpSocket*>*);
    void disconnect(QTcpSocket*);
};

#endif // DATABASE_FASADE_H
