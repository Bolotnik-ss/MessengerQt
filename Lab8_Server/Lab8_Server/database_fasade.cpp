#include "database_fasade.h"

Database_Fasade::Database_Fasade(QHash<QString, User_Info>* Users_, QHash<QString, Abstract_Chat_Info*>* Chats_)
{
    Users = Users_;
    Chats = Chats_;
}

QString Database_Fasade::Request(QString String, QTcpSocket* Socket, QVector<QTcpSocket*>* Sockets)
{
    if(String.startsWith("/l/"))
    {
        QRegularExpression regex("/l/(.*)//(.*)/e/");
        QRegularExpressionMatch match = regex.match(String);
        QString login = match.captured(1);
        QString password = match.captured(2);

        if(Users->contains(login))
            if(Users->find(login)->Get_Password() == password)
            {
                Users->find(login)->Set_Socket(Socket);
                Users->find(login)->Set_State(true);
                return "/l/success/e/";
            }
            else
                return "/l/Неверный пароль./e/";
        else
            return "/l/Пользователя с таким логином нет в базе./e/";
    }

    else if(String.startsWith("/r/"))
    {
        QRegularExpression regex("/r/(.*)//(.*)/e/");
        QRegularExpressionMatch match = regex.match(String);
        QString login = match.captured(1);
        QString password = match.captured(2);

        if(!Users->contains(login))
        {
            Users->insert(login, User_Info(password, Socket));
            return "/r/success/e/";
        }
        else
            return "/r/Пользователь с таким логином уже зарегистрирован в базе./e/";
    }

    else if(String.startsWith("/g/"))
    {
        QRegularExpression regex("/g/(.*)/e/");
        QRegularExpressionMatch match = regex.match(String);
        QString login = match.captured(1);
        QVector<QString>* Chats = Users->find(login)->Get_Chats();

        QString res = "/g/" + Chats->join("//") + "/e/";
        return res;
    }

    else if(String.startsWith("/c/"))
    {
        QRegularExpression regex("/c/(.*)//(.*)/e/");
        QRegularExpressionMatch match = regex.match(String);
        QString login = match.captured(1);
        QString chat = match.captured(2);

        if(!Chats->contains(chat))
        {
            Conversation_Info_Factory Factory;
            Abstract_Chat_Info* Chat_Info = Factory.Create_Chat_Info(chat);
            Chats->insert(chat, Chat_Info);
            Chats->find(chat).value()->Get_Members()->push_back(login);
            Users->find(login)->Get_Chats()->push_back(chat);

            QString message = QDateTime::currentDateTime().toString("dd.MM.yyyy_HH:mm:ss: Пользователь: ") + login + " создал беседу: " + chat + ".";
            QFile* History = Chats->find(chat).value()->Get_History();
            if(History->open(QIODevice::WriteOnly | QIODevice::Append))
            {
                History->write(QString("/s/%1/e/\n").arg(message).toUtf8());
                History->close();
            }

            return "/c/success/e/";
        }
        else
            return "/c/Чат с таким идентификатором уже существует./e/";
    }

    else if(String.startsWith("/j/"))
    {
        QRegularExpression regex("/j/(.*)//(.*)/e/");
        QRegularExpressionMatch match = regex.match(String);
        QString login = match.captured(1);
        QString chat = match.captured(2);

        if(Chats->contains(chat))
        {
            if(!Chats->find(chat).value()->Get_Members()->contains(login))
            {
                Chats->find(chat).value()->Get_Members()->push_back(login);
                Users->find(login)->Get_Chats()->push_back(chat);

                QString message = QDateTime::currentDateTime().toString("dd.MM.yyyy_HH:mm:ss: Пользователь: ") + login + " был добавлен в беседу.";
                QFile* History = Chats->find(chat).value()->Get_History();
                if(History->open(QIODevice::WriteOnly | QIODevice::Append))
                {
                    History->write(QString("/s/%1/e/\n").arg(message).toUtf8());
                    History->close();
                }

                message = QString("/m/%1//%2/e/").arg(chat, message);
                QVector<QString>* Members = Chats->find(chat).value()->Get_Members();
                for(QVector<QString>::ConstIterator cit = Members->cbegin(); cit != Members->cend(); ++cit)
                    if(Users->find(*cit)->Get_State())
                    {
                        QTcpSocket* CurrentSocket = Users->find(*cit)->Get_Socket();
                        if(CurrentSocket != Socket)
                        {
                            QByteArray Data;
                            Data.clear();
                            QDataStream out(&Data, QIODevice::WriteOnly);
                            out.setVersion(QDataStream::Qt_6_2);
                            out << quint16(0) << message;
                            out.device()->seek(0);
                            out << quint16(Data.size() - sizeof(quint16));
                            CurrentSocket->write(Data);
                        }
                    }

                return "/j/success/e/";
            }
            else
                return "/j/Вы уже состоите в этой беседе./e/";
        }
        else
            return "/j/Чата с таким идентификатором не существует./e/";
    }

    else if(String.startsWith("/s/"))
    {
        QRegularExpression regex("/s/(.*)/e/");
        QRegularExpressionMatch match = regex.match(String);
        QString chat = match.captured(1);

        QFile* History = Chats->find(chat).value()->Get_History();
        if (History->open(QIODevice::ReadOnly)) {
            QByteArray Data;
            Data.clear();
            QDataStream out(&Data, QIODevice::WriteOnly);
            out.setVersion(QDataStream::Qt_6_2);

            out << quint16(0) << (QString::fromUtf8(History->readAll()));

            History->close();

            out.device()->seek(0);
            out << quint16(Data.size() - sizeof(quint16));

            Socket->write(Data);
        }

        return "";
    }

    else if(String.startsWith("/m/"))
    {
        QRegularExpression regex("/m/(.*)//(.*)//(.*)/e/");
        QRegularExpressionMatch match = regex.match(String);
        QString login = match.captured(1);
        QString chat = match.captured(2);
        QString message = match.captured(3);

        message = QDateTime::currentDateTime().toString("dd.MM.yyyy_HH:mm:ss_") + login + ": " + message;
        QFile* History = Chats->find(chat).value()->Get_History();
        if(History->open(QIODevice::WriteOnly | QIODevice::Append))
        {
            History->write(QString("/s/%1/e/\n").arg(message).toUtf8());
            History->close();
        }

        message = QString("/m/%1//%2/e/").arg(chat, message);
        QVector<QString>* Members = Chats->find(chat).value()->Get_Members();
        for(QVector<QString>::ConstIterator cit = Members->cbegin(); cit != Members->cend(); ++cit)
            if(Users->find(*cit)->Get_State())
            {
                QTcpSocket* CurrentSocket = Users->find(*cit)->Get_Socket();
                QByteArray Data;
                Data.clear();
                QDataStream out(&Data, QIODevice::WriteOnly);
                out.setVersion(QDataStream::Qt_6_2);
                out << quint16(0) << message;
                out.device()->seek(0);
                out << quint16(Data.size() - sizeof(quint16));
                CurrentSocket->write(Data);
            }

        return "";
    }

    return "";
}

void Database_Fasade::disconnect(QTcpSocket* Socket)
{
    for(QHash<QString, User_Info>::Iterator it = Users->begin(); it != Users->end(); ++it)
        if(it.value().Get_Socket() == Socket)
            it.value().Set_State(false);
}
