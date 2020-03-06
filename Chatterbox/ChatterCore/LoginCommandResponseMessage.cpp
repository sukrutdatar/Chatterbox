#include "stdafx.h"
#include "LoginCommandResponseMessage.h"
using namespace ChatterBoxCore;

LoginCommandResponseMessage::LoginCommandResponseMessage() :
	ICommandResponseMessage(LoginCommandResponse)
{
}

LoginCommandResponseMessage::LoginCommandResponseMessage(std::string sessionKey, bool status, std::string responseMessage = "") :
	ICommandResponseMessage(LoginCommandResponse, status, responseMessage, sessionKey)
{
}

LoginCommandResponseMessage::~LoginCommandResponseMessage()
{
}

std::string LoginCommandResponseMessage::ToString()
{
	std::stringstream ss;
	ss << "LoginCommandResponseMessage { SessionKey: " << m_sessionKey << ", Status: " << Util::Bool2String(m_status) << ", ResponseMessage: " << m_responseMessage << " }";
	return ss.str();
}

std::string LoginCommandResponseMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("session_key", m_sessionKey);
	jsonObject.set("status", m_status);
	jsonObject.set("response_message", m_responseMessage);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}