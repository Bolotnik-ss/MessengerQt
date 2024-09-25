#include "conversation_info_factory.h"

Abstract_Chat_Info* Conversation_Info_Factory::Create_Chat_Info(QString History)
{
    return new Conversation_Info(History);
}
