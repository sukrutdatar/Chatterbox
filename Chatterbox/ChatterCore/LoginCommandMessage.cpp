#include "stdafx.h"
#include "LoginCommandMessage.h"
using namespace ChatterBoxCore;

LoginCommandMessage::LoginCommandMessage() :
	ICommandMessage(LoginCommand)
{
}

LoginCommandMessage::LoginCommandMessage(std::string username, std::string password) :
	ICommandMessage(LoginCommand),
	m_username(username),
	m_password(password)
{
}

LoginCommandMessage::~LoginCommandMessage()
{
}

void LoginCommandMessage::SetUserName(std::string username)
{
	m_username = username;
}

void LoginCommandMessage::SetPassword(std::string password)
{
	m_password = password;
}

std::string LoginCommandMessage::GetUserName()
{
	return m_username;
}

std::string LoginCommandMessage::GetPassword()
{
	return m_password;
}

std::string LoginCommandMessage::ToString()
{
	std::stringstream ss;
	ss << "LoginCommandMessage { username: " << m_username << ", password: " << m_password << " }";
	return ss.str();
}

std::string LoginCommandMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("username", m_username);
	jsonObject.set("password", m_password);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}
