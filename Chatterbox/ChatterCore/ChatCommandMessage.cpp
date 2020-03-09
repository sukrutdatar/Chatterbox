#include "stdafx.h"
#include "ChatCommandMessage.h"
using namespace ChatterBoxCore;

ChatCommandMessage::ChatCommandMessage() :
	ICommandMessage(ChatCommand)
{
}

ChatCommandMessage::ChatCommandMessage(std::string sessionKey, std::string chatWithUser) :
	ICommandMessage(ChatCommand, sessionKey),
	m_chatWithUser(chatWithUser)
{
}

ChatCommandMessage::~ChatCommandMessage()
{
}

void ChatCommandMessage::SetToUser(std::string toUser)
{
	m_chatWithUser = toUser;
}

std::string ChatCommandMessage::GetChatWithUser()
{
	return m_chatWithUser;
}

std::string ChatCommandMessage::ToString()
{
	std::stringstream ss;
	ss << "ChatCommandMessage { SessionKey: " << m_sessionKey << ", To: " << m_chatWithUser << " }";
	return ss.str();
}

std::string ChatCommandMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("session_key", m_sessionKey);
	jsonObject.set("to_user", m_chatWithUser);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}
