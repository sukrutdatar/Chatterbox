#include "stdafx.h"
#include "ListUsersCommandResponseMessage.h"
using namespace ChatterBoxCore;


ListUsersCommandResponseMessage::ListUsersCommandResponseMessage() :
	ICommandResponseMessage(ListUsersCommandResponse),
	m_activeUsers(std::vector<std::string>())
{
}

ListUsersCommandResponseMessage::ListUsersCommandResponseMessage(std::string sessionKey, std::vector<std::string> activeUsers, bool status, std::string responseMessage) :
	ICommandResponseMessage(ListUsersCommandResponse, status, responseMessage, sessionKey),
	m_activeUsers(activeUsers)
{
}


ListUsersCommandResponseMessage::~ListUsersCommandResponseMessage()
{
}

void ListUsersCommandResponseMessage::SetActiveUsers(std::vector<std::string> activeUsers)
{
	m_activeUsers = activeUsers;
}

std::vector<std::string> ListUsersCommandResponseMessage::GetActiveUsers()
{
	return m_activeUsers;
}

std::string ListUsersCommandResponseMessage::ToString()
{
	std::stringstream ss;
	ss << "ListUsersCommandResponseMessage { SessionKey: " << m_sessionKey << ", ActiveUsers: " << Util::Vector2String(m_activeUsers) << ", Status: " << Util::Bool2String(m_status) << ", ResponseMessage: " << m_responseMessage << " }";
	return ss.str();
}

Poco::JSON::Array ListUsersCommandResponseMessage::UsersToJsonArray()
{
	Poco::JSON::Array users;
	for (auto it = m_activeUsers.begin(); it != m_activeUsers.end(); ++it)
	{
		users.add(*it);
	}
	return users;
}

std::string ListUsersCommandResponseMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;
	
	jsonObject.set("session_key", m_sessionKey);
	jsonObject.set("active_users", UsersToJsonArray());
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}