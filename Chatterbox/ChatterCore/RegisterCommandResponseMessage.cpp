#include "stdafx.h"
#include "RegisterCommandResponseMessage.h"
using namespace ChatterBoxCore;

RegisterCommandResponseMessage::RegisterCommandResponseMessage() :
	ICommandResponseMessage(RegisterCommandResponse),
	m_recoveryKey(""),
	m_status(false)
{
}

RegisterCommandResponseMessage::RegisterCommandResponseMessage(std::string recoveryKey, bool status) :
	ICommandResponseMessage(RegisterCommandResponse),
	m_recoveryKey(recoveryKey),
	m_status(status)
{
}

RegisterCommandResponseMessage::~RegisterCommandResponseMessage()
{
}

std::string RegisterCommandResponseMessage::GetRecoveryKey()
{
	return m_recoveryKey;
}

void RegisterCommandResponseMessage::SetRecoveryKey(std::string recoveryKey)
{
	m_recoveryKey = recoveryKey;
}

void RegisterCommandResponseMessage::SetStatus(bool status)
{
	m_status = status;
}

bool RegisterCommandResponseMessage::GetStatus()
{
	return m_status;
}

std::string RegisterCommandResponseMessage::ToString()
{
	std::stringstream ss;
	ss << "RegisterCommandResponseMessage { RecoveryKey: " << m_recoveryKey << ", Status: " << Util::Bool2String(m_status) << " }";
	return ss.str();
}

std::string RegisterCommandResponseMessage::ToJson()
{
	std::stringstream ss;
	Poco::JSON::Object jsonObject;

	jsonObject.set("recovery_key", m_recoveryKey);
	jsonObject.set("status", m_status);
	jsonObject.stringify(ss, JSON_INDENT_LEVEL);

	return ss.str();
}