#ifndef ABSTRACT_CHAT_INFO_FACTORY_H
#define ABSTRACT_CHAT_INFO_FACTORY_H

#include "abstract_chat_info.h"

class Abstract_Chat_Info_Factory
{
public:
    virtual ~Abstract_Chat_Info_Factory() = default;
    virtual Abstract_Chat_Info* Create_Chat_Info(QString) = 0;
};

#endif // ABSTRACT_CHAT_INFO_FACTORY_H
