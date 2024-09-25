#ifndef CONVERSATION_INFO_FACTORY_H
#define CONVERSATION_INFO_FACTORY_H

#include "abstract_chat_info_factory.h"
#include "conversation_info.h"

class Conversation_Info_Factory : public Abstract_Chat_Info_Factory
{
public:
    Abstract_Chat_Info* Create_Chat_Info(QString) final;
};

#endif // CONVERSATION_INFO_FACTORY_H
