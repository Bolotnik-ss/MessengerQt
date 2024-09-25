#ifndef CONVERSATION_INFO_H
#define CONVERSATION_INFO_H

#include "abstract_chat_info.h"

class Conversation_Info : public Abstract_Chat_Info
{
private:
    QVector<QString>* Members;
    QFile* History;

public:
    Conversation_Info(QString Chat);
    QVector<QString>* Get_Members() final;
    QFile* Get_History() final;
};

#endif // CONVERSATION_INFO_H
