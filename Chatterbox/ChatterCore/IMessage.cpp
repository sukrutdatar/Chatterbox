#include "IMessage.h"
#include "LoginCommandMessage.h"
#include "LogoutCommandMessage.h"
#include "ListUsersCommandMessage.h"
#include "RegisterCommandMessage.h"
#include "ChatCommandMessage.h"
#include "TextChatterMessage.h"
#include "LoginCommandResponseMessage.h"
#include "RegisterCommandResponseMessage.h"
#include "ChatCommandResponseMessage.h"
#include "LogoutCommandResponseMessage.h"
#include "ListUsersCommandResponseMessage.h"

using namespace ChatterBoxCore;

IMessage* IMessage::Create(MessageType messageType, CommandType commandType)
{
	IMessage* message = NULL;
	if (messageType != CommandMessage)
		return message;

	switch (commandType)
	{
		case LoginCommand: 
			message =  new LoginCommandMessage();
			break;
		case LogoutCommand: 
			message = new LogoutCommandMessage();
			break;
		case ListUsersCommand: 
			message = new ListUsersCommandMessage();
			break;
		case RegisterCommand:
			message = new RegisterCommandMessage();
			break;
		case ChatCommand:
			message = new ChatCommandMessage();
			break;
	}
	return message;
}

IMessage* IMessage::Create(MessageType messageType, ChatterType chatterType)
{
	IMessage* message = NULL;
	if (messageType != ChatterMessage)
		return message;

	switch (chatterType)
	{
	case TextChatter:
		message = new TextChatterMessage();
		break;
	case AudioChatter:
		message = new TextChatterMessage();
		break;
	}
	return message;
}

IMessage* IMessage::Create(std::string input)
{
	std::string commandName = std::string();
	std::getline(std::stringstream(input), commandName, ' ');
	IMessage* message;

	if (commandName.compare("//chat") == 0)
	{
		std::cout << std::endl << "chat command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::ChatCommand);
	}
	else if (commandName.compare("/login") == 0)
	{
		std::cout << std::endl << "login command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::LoginCommand);
	}
	else if (commandName.compare("/join") == 0)
	{
		std::cout << std::endl << "join command";
		//message = IMessage::Create(MessageType::CommandMessage, CommandType::);

	}
	else if (commandName.compare("/create") == 0)
	{
		std::cout << std::endl << "create command";
		//message = IMessage::Create(MessageType::CommandMessage, CommandType::);
	}
	else if (commandName.compare("/list") == 0)
	{
		std::cout << std::endl << "list command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::ListUsersCommand);
	}
	else if (commandName.compare("/logout") == 0)
	{
		std::cout << std::endl << "logout command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::LogoutCommand);
	}
	else if (commandName.compare("/register") == 0)
	{
		std::cout << std::endl << "register command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::RegisterCommand);
	}
	else if (commandName.compare("/status") == 0)
	{
		std::cout << std::endl << "status command";
		//message = IMessage::Create(MessageType::CommandMessage, CommandType::);
	}
}

IMessage* IMessage::Create(MessageType messageType, CommandResponseType commandResponseType)
{
	IMessage* message = NULL;
	if (messageType != CommandResponseMessage)
		return message;

	switch (commandResponseType)
	{
	case LoginCommandResponse:
		message = new LoginCommandResponseMessage();
		break;
	case RegisterCommandResponse:
		message = new RegisterCommandResponseMessage();
		break;
	case ChatCommandResponse:
		message = new ChatCommandResponseMessage();
		break;
	case LogoutCommandResponse:
		message = new LogoutCommandResponseMessage();
		break;
	case ListUsersCommandResponse:
		message = new ListUsersCommandResponseMessage();
		break;
	}
	return message;
}


void ICommandResponseMessage::SetStatus(bool value)
{
	m_status = value;
}

bool ICommandResponseMessage::GetStatus()
{
	return m_status;
}

void ICommandResponseMessage::SetResponseMessage(std::string value)
{
	m_responseMessage = value;
}

std::string ICommandResponseMessage::GetResponseMessage()
{
	return m_responseMessage;
}