#include "stdafx.h"
#include "TextChatterMessage.h"
using namespace ChatterBoxCore;

TextChatterMessage::TextChatterMessage() :
	IChatterMessage(TextChatter),
	m_textMessage("")
{
}

TextChatterMessage::TextChatterMessage(std::string textMessage, std::string sessionKey) :
	IChatterMessage(TextChatter, sessionKey),
	m_textMessage(textMessage)
{
}

TextChatterMessage::~TextChatterMessage()
{
}

void TextChatterMessage::SetTextMessage(std::string textMessage)
{
	m_textMessage = textMessage;
}

std::string TextChatterMessage::GetTextMessage()
{
	return m_textMessage;
}

void TextChatterMessage::SetToUser(std::string toUser)
{
	m_toUser = toUser;
}

std::string TextChatterMessage::GetToUser()
{
	return m_toUser;
}

std::string TextChatterMessage::ToString()
{
	std::stringstream ss;
	ss << "TextChatterMessage { SessionKey: " << m_sessionKey << ", To: " << m_toUser << ", TextMessage: " << m_textMessage << " }";
	return ss.str();
}

std::string TextChatterMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("session_key", m_sessionKey);
	jsonObject.set("to_user", m_toUser);
	jsonObject.set("text_message", m_textMessage);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}
