#include "stdafx.h"
#include "RegisterCommandMessage.h"
using namespace ChatterBoxCore;

RegisterCommandMessage::RegisterCommandMessage() :
	ICommandMessage(RegisterCommand)
{
}

RegisterCommandMessage::RegisterCommandMessage(std::string username, std::string password) :
	ICommandMessage(RegisterCommand),
	m_username(username),
	m_password(password)
{
}

RegisterCommandMessage::~RegisterCommandMessage()
{
}

std::string RegisterCommandMessage::GetUserName()
{
	return m_username;
}

std::string RegisterCommandMessage::GetPassword()
{
	return m_password;
}

void RegisterCommandMessage::SetUserName(std::string username)
{
	m_username = username;
}

void RegisterCommandMessage::SetPassword(std::string password)
{
	m_password = password;
}

std::string RegisterCommandMessage::ToString()
{
	std::stringstream ss;
	ss << "RegisterCommandMessage { username: " << m_username << ", password: " << m_password << " }";
	return ss.str();
}

std::string RegisterCommandMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("username", m_username);
	jsonObject.set("password", m_password);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}