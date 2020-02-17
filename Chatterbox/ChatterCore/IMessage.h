#pragma once
#include <string>
#include <sstream>

#include "Poco/JSON/Object.h"
using Poco::JSON::Object;

namespace ChatterBoxCore
{
	enum MessageType
	{
		CommandMessage,
		ChatterMessage,
		CommandResponseMessage
	};
	enum CommandType
	{
		LoginCommand,
		LogoutCommand,
		ListUsersCommand,
		RegisterCommand,
		ChatCommand
	};
	enum ChatterType
	{
		TextChatter,
		AudioChatter
	};
	enum CommandResponseType
	{
		LoginCommandResponse,
		RegisterCommandResponse,
		ChatCommandResponse,
		LogoutCommandResponse,
		ListUsersCommandResponse
	};

	class IMessage
	{
	protected:
		MessageType m_messageType;
		std::string m_sessionKey;
	public:
		IMessage(MessageType messageType, std::string sessionKey = "") : m_messageType(messageType), m_sessionKey(sessionKey) {}
		virtual ~IMessage() {}

		void SetMessageType(MessageType messageType) { m_messageType = messageType; }
		MessageType GetMessageType() { return m_messageType; }

		std::string GetSessionKey() { return m_sessionKey; }
		void SetSessionKey(std::string sessionKey) { m_sessionKey = sessionKey; }

		virtual std::string ToString() = 0;
		virtual std::string ToJson() = 0;

		static IMessage* Create(MessageType, CommandType);
		static IMessage* Create(MessageType, ChatterType);
		static IMessage* Create(MessageType, CommandResponseType);
	};

#pragma region Chatter Message

	class IChatterMessage : public IMessage
	{
	protected:
		ChatterType m_chatterType;
	public:
		IChatterMessage(ChatterType chatterType, std::string sessionKey = "") : IMessage(ChatterMessage, sessionKey), m_chatterType(chatterType)
		{}
		virtual ~IChatterMessage() {}
	};

#pragma endregion

#pragma region Command Message

	class ICommandMessage : public IMessage
	{
	protected:
		CommandType m_commandType;
	public:
		ICommandMessage(CommandType commandType, std::string sessionKey = "") : 
			IMessage(CommandMessage, sessionKey), 
			m_commandType(commandType)
		{
		}
		
		virtual ~ICommandMessage() {}
	};

#pragma endregion

#pragma region Command Response Message

	class ICommandResponseMessage : public IMessage
	{
	protected:
		CommandResponseType m_commandResponseType;
	public:
		ICommandResponseMessage(CommandResponseType commandResponseType, std::string sessionKey = "") : 
			IMessage(CommandResponseMessage, sessionKey), 
			m_commandResponseType(commandResponseType)
		{}
		virtual ~ICommandResponseMessage() {}
	};

#pragma endregion
}
