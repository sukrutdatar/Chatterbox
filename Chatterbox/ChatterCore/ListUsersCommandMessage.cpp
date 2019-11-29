#include "stdafx.h"
#include "ListUsersCommandMessage.h"
using namespace ChatterBoxCore;

ListUsersCommandMessage::ListUsersCommandMessage() :
	ICommandMessage(ListUsersCommand)
{
}

ListUsersCommandMessage::ListUsersCommandMessage(std::string sessionKey) :
	ICommandMessage(ListUsersCommand, sessionKey)
{
}


ListUsersCommandMessage::~ListUsersCommandMessage()
{
}

std::string ListUsersCommandMessage::ToString()
{
	std::stringstream ss;
	ss << "ListUsersCommandMessage { SessionKey: " << m_sessionKey << " }";
	return ss.str();
}

std::string ListUsersCommandMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("session_key", m_sessionKey);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}
