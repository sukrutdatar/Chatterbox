#include "stdafx.h"
#include "ChatCommandResponseMessage.h"
using namespace ChatterBoxCore;

ChatCommandResponseMessage::ChatCommandResponseMessage() :
	ICommandResponseMessage(ChatCommandResponse)
{
}

ChatCommandResponseMessage::ChatCommandResponseMessage(bool status, std::string responseMessage) :
	ICommandResponseMessage(ChatCommandResponse, status, responseMessage)
{
}

ChatCommandResponseMessage::~ChatCommandResponseMessage()
{
}

std::string ChatCommandResponseMessage::ToString()
{
	std::stringstream ss;
	ss << "ChatCommandResponseMessage { SessionKey: " << m_sessionKey << ", Status: " << Util::Bool2String(m_status) << ", ResponseMessage: " << m_responseMessage << " }";
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