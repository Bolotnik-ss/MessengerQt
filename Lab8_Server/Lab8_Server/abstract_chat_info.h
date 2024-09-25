#ifndef ABSTRACT_CHAT_INFO_H
#define ABSTRACT_CHAT_INFO_H

#include <QVector>
#include <QString>
#include <QFile>

class Abstract_Chat_Info
{    
public:
    virtual ~Abstract_Chat_Info() = default;
    virtual QVector<QString>* Get_Members() = 0;
    virtual QFile* Get_History() = 0;
};

#endif // ABSTRACT_CHAT_INFO_H
