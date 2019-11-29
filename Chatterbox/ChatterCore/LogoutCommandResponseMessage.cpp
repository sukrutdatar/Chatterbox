#include "stdafx.h"
#include "LogoutCommandResponseMessage.h"
using namespace ChatterBoxCore;


LogoutCommandResponseMessage::LogoutCommandResponseMessage() :
	ICommandResponseMessage(LogoutCommandResponse),
	m_status(false),
	m_responseMessage("")
{
}

LogoutCommandResponseMessage::LogoutCommandResponseMessage(std::string sessionKey, bool status, std::string responseMessage = "") :
	ICommandResponseMessage(LogoutCommandResponse, sessionKey),
	m_status(status),
	m_responseMessage(responseMessage)
{
}

LogoutCommandResponseMessage::~LogoutCommandResponseMessage()
{
}

void LogoutCommandResponseMessage::SetStatus(bool status)
{
	m_status = status;
}

bool LogoutCommandResponseMessage::GetStatus()
{
	return m_status;
}

void LogoutCommandResponseMessage::SetResponseMessage(std::string responseMessage)
{
	m_responseMessage = responseMessage;
}

std::string LogoutCommandResponseMessage::GetResponseMessage()
{
	return m_responseMessage;
}

std::string LogoutCommandResponseMessage::ToString()
{
	std::stringstream ss;
	ss << "LogoutCommandResponseMessage { SessionKey: " << m_sessionKey << ", Status: " << Util::Bool2String(m_status) << ", ResponseMessage: " << m_responseMessage << " }";
	return ss.str();
}

std::string LogoutCommandResponseMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("session_key", m_sessionKey);
	jsonObject.set("status", m_status);
	jsonObject.set("response_message", m_responseMessage);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}
