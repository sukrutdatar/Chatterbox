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

std::string ChatCommandResponseMessage::ToString()
{
	std::stringstream ss;
	ss << "ChatCommandResponseMessage { SessionKey: " << m_sessionKey <<  " }";
	return ss.str();
}

std::string ChatCommandResponseMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("session_key", m_sessionKey);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}