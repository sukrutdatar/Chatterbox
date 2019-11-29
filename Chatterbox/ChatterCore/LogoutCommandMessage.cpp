#include "stdafx.h"
#include "LogoutCommandMessage.h"
using namespace ChatterBoxCore;

LogoutCommandMessage::LogoutCommandMessage() :
	ICommandMessage(LogoutCommand)
{
}

LogoutCommandMessage::LogoutCommandMessage(std::string sessionKey) :
	ICommandMessage(LogoutCommand, sessionKey)
{
}


LogoutCommandMessage::~LogoutCommandMessage()
{
}


std::string LogoutCommandMessage::ToString()
{
	std::stringstream ss;
	ss << "LogoutCommandMessage { SessionKey: " << m_sessionKey << " }";
	return ss.str();
}

std::string LogoutCommandMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("session_key", m_sessionKey);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}