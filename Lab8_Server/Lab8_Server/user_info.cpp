#include "user_info.h"

User_Info::User_Info(QString Password_, QTcpSocket* Socket_)
{
    Password = Password_;
    Socket = Socket_;
    State = true;
    Chats = new QVector<QString>();
}

QString User_Info::Get_Password()
{
    return Password;
}

void User_Info::Set_Socket(QTcpSocket* Socket_)
{
    Socket = Socket_;
}

QVector<QString>* User_Info::Get_Chats()
{
    return Chats;
}

QTcpSocket* User_Info::Get_Socket()
{
    return Socket;
}

bool User_Info::Get_State()
{
    return State;
}

void User_Info::Set_State(bool State_)
{
    State = State_;
}
