#include "stdafx.h"
#include "ChatCommandMessage.h"
using namespace ChatterBoxCore;

ChatCommandMessage::ChatCommandMessage() :
	ICommandMessage(ChatCommand)
{
}

ChatCommandMessage::ChatCommandMessage(std::string sessionKey, std::string toUser) :
	ICommandMessage(ChatCommand, sessionKey),
	m_toUser(toUser)
{
}

ChatCommandMessage::~ChatCommandMessage()
{
}

void ChatCommandMessage::SetToUser(std::string toUser)
{
	m_toUser = toUser;
}

std::string ChatCommandMessage::GetToUser()
{
	return m_toUser;
}

std::string ChatCommandMessage::ToString()
{
	std::stringstream ss;
	ss << "ChatCommandMessage { SessionKey: " << m_sessionKey << ", To: " << m_toUser << " }";
	return ss.str();
}

std::string ChatCommandMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("session_key", m_sessionKey);
	jsonObject.set("to_user", m_toUser);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}
