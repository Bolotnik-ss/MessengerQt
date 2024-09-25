#ifndef USER_INFO_H
#define USER_INFO_H

#include <QString>
#include <QTcpSocket>

class User_Info
{
private:
    QString Password;
    QTcpSocket* Socket;
    QVector<QString>* Chats;
    bool State;

public:
    User_Info(QString, QTcpSocket*);
    QString Get_Password();
    void Set_Socket(QTcpSocket*);
    QVector<QString>* Get_Chats();
    QTcpSocket* Get_Socket();
    bool Get_State();
    void Set_State(bool);
};

#endif // USER_INFO_H
