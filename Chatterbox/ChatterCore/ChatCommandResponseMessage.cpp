#include "stdafx.h"
#include "ChatCommandResponseMessage.h"
using namespace ChatterBoxCore;

ChatCommandResponseMessage::ChatCommandResponseMessage() :
	ICommandResponseMessage(ChatCommandResponse)
{
}


ChatCommandResponseMessage::~ChatCommandResponseMessage()
{
}
