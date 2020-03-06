#include "stdafx.h"
#include "RegisterCommandResponseMessage.h"
using namespace ChatterBoxCore;

RegisterCommandResponseMessage::RegisterCommandResponseMessage() :
	ICommandResponseMessage(RegisterCommandResponse),
	m_recoveryKey("")
{
}

RegisterCommandResponseMessage::RegisterCommandResponseMessage(std::string recoveryKey, bool status, std::string responseMessage) :
	ICommandResponseMessage(RegisterCommandResponse, status, responseMessage),
	m_recoveryKey(recoveryKey)
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

std::string RegisterCommandResponseMessage::ToString()
{
	std::stringstream ss;
	ss << "RegisterCommandResponseMessage { RecoveryKey: " << m_recoveryKey << ", Status: " << Util::Bool2String(m_status) << ", ResponseMessage: " << m_responseMessage << " }";
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