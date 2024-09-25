#include "conversation_info.h"

Conversation_Info::Conversation_Info(QString Chat) : Abstract_Chat_Info()
{
    Members = new QVector<QString>();
    History = new QFile(QString("%1_History.txt").arg(Chat));
}

QVector<QString>* Conversation_Info::Get_Members()
{
    return Members;
}

QFile* Conversation_Info::Get_History()
{
    return History;
}
