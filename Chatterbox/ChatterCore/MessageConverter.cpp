#include "MessageConverter.h"
using namespace ChatterBoxCore;

MessageConverter& MessageConverter::Instance()
{
	static MessageConverter converter;
	return converter;
}

IMessage* MessageConverter::ConvertTo(IMessageProtoBuf* protoMessage)
{
	IMessage* message = NULL;

	if (protoMessage == NULL)
		return NULL;

	switch (protoMessage->messagetype())
	{
		case IMessageProtoBuf_MessageTypeProtoBuf_ChatterMessage:
			if ((protoMessage->MessageData_case() == IMessageProtoBuf::MessageDataCase::kIChatterMessagePB) && protoMessage->has_ichattermessagepb())
			{
				message = ConvertToChatterMessage(protoMessage);
			}
			break;
		case IMessageProtoBuf_MessageTypeProtoBuf_CommandMessage:
			if ((protoMessage->MessageData_case() == IMessageProtoBuf::MessageDataCase::kICommandMessagePB) && protoMessage->has_icommandmessagepb())
			{
				message = ConvertToCommandMessage(protoMessage);
			}
			break;
		case IMessageProtoBuf_MessageTypeProtoBuf_CommandResponseMessage:
			if ((protoMessage->MessageData_case() == IMessageProtoBuf::MessageDataCase::kICommandResponseMessagePB) && protoMessage->has_icommandresponsemessagepb())
			{
				message = ConvertToCommandResponseMessage(protoMessage);
			}
			break;
		default:
			break;
	}

	return message;
}

IMessageProtoBuf* MessageConverter::ConvertTo(IMessage* message)
{
	IMessageProtoBuf* protoMessage = NULL;
	if (message == NULL)
		return NULL;

	switch (message->GetMessageType())
	{
		case CommandMessage:
			protoMessage = ConvertToCommandMessage(message);
			break;
		case ChatterMessage:
			protoMessage = ConvertToChatterMessage(message);
			break;
		case CommandResponseMessage:
			protoMessage = ConvertToCommandResponseMessage(message);
			break;
	}
	return protoMessage;
}

IMessageProtoBuf* MessageConverter::ConvertToChatterMessage(IMessage* message)
{
	IMessageProtoBuf* protoMessage = NULL;
	IChatterMessage* iChatterMessage = dynamic_cast<IChatterMessage*>(message);

	switch (iChatterMessage->GetChatterType())
	{
		case TextChatter:
			TextChatterMessage* textChatterMessage = dynamic_cast<TextChatterMessage*>(iChatterMessage);
			protoMessage = new IMessageProtoBuf();
			protoMessage->set_sessionkey(iChatterMessage->GetSessionKey());
			protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_ChatterMessage);
			
			IChatterMessageProtoBuf* pbChatterMessage = new IChatterMessageProtoBuf();
			pbChatterMessage->set_chattertype(IChatterMessageProtoBuf_ChatterTypeProtoBuf::IChatterMessageProtoBuf_ChatterTypeProtoBuf_TextChatter);
			
			TextChatterMessageProtoBuf* pbTextChatterMessage = new TextChatterMessageProtoBuf();
			pbTextChatterMessage->set_chatwithuser(textChatterMessage->GetToUser());
			pbTextChatterMessage->set_allocated_textmessage(new std::string(textChatterMessage->GetTextMessage()));
			
			pbChatterMessage->set_allocated_textchattermessagepb(pbTextChatterMessage);
			protoMessage->set_allocated_ichattermessagepb(pbChatterMessage);
			break;
		case AudioChatter:
			break;
	}
	return protoMessage;
}

IMessageProtoBuf* MessageConverter::ConvertToCommandMessage(IMessage* message)
{
	IMessageProtoBuf* protoMessage = NULL;
	ICommandMessage* iCommandMessage = dynamic_cast<ICommandMessage*>(message);

	switch (iCommandMessage->GetCommandType())
	{
		case LoginCommand:
			LoginCommandMessage* loginCommandMessage = dynamic_cast<LoginCommandMessage*>(iCommandMessage);
			protoMessage = new IMessageProtoBuf();
			protoMessage->set_sessionkey(iCommandMessage->GetSessionKey());
			protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandMessage);

			ICommandMessageProtoBuf* pbCommandMessage = new ICommandMessageProtoBuf();
			pbCommandMessage->set_commandtype(ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_LoginCommand);
			
			LoginCommandMessageProtoBuf* pbLoginCommandMessage = new LoginCommandMessageProtoBuf();
			pbLoginCommandMessage->set_username(loginCommandMessage->GetUserName());
			pbLoginCommandMessage->set_password(loginCommandMessage->GetPassword());
			
			pbCommandMessage->set_allocated_logincommandmessagepb(pbLoginCommandMessage);
			protoMessage->set_allocated_icommandmessagepb(pbCommandMessage);
			break;
		case LogoutCommand:
			LogoutCommandMessage* logoutCommandMessage = dynamic_cast<LogoutCommandMessage*>(iCommandMessage);
			protoMessage = new IMessageProtoBuf();
			protoMessage->set_sessionkey(iCommandMessage->GetSessionKey());
			protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandMessage);

			ICommandMessageProtoBuf* pbCommandMessage = new ICommandMessageProtoBuf();
			pbCommandMessage->set_commandtype(ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_LogoutCommand);
			
			LogoutCommandMessageProtoBuf* pbLogoutCommandMessage = new LogoutCommandMessageProtoBuf();

			pbCommandMessage->set_allocated_logoutcommandmessagepb(pbLogoutCommandMessage);
			protoMessage->set_allocated_icommandmessagepb(pbCommandMessage);
			break;
		case ListUsersCommand:
			ListUsersCommandMessage* listUsersCommandMessage = dynamic_cast<ListUsersCommandMessage*>(iCommandMessage);
			protoMessage = new IMessageProtoBuf();
			protoMessage->set_sessionkey(iCommandMessage->GetSessionKey());
			protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandMessage);

			ICommandMessageProtoBuf* pbCommandMessage = new ICommandMessageProtoBuf();
			pbCommandMessage->set_commandtype(ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_ListUsersCommand);
			
			ListUsersCommandMessageProtoBuf* pbListUsersCommandMessage = new ListUsersCommandMessageProtoBuf();

			pbCommandMessage->set_allocated_listuserscommandmessagepb(pbListUsersCommandMessage);
			protoMessage->set_allocated_icommandmessagepb(pbCommandMessage);
			break;
		case RegisterCommand:
			RegisterCommandMessage* registerCommandMessage = dynamic_cast<RegisterCommandMessage*>(iCommandMessage);
			protoMessage = new IMessageProtoBuf();
			protoMessage->set_sessionkey(iCommandMessage->GetSessionKey());
			protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandMessage);

			ICommandMessageProtoBuf* pbCommandMessage = new ICommandMessageProtoBuf();
			pbCommandMessage->set_commandtype(ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_RegisterCommand);
			
			RegisterCommandMessageProtoBuf * pbRegisterCommandMessage = new RegisterCommandMessageProtoBuf();
			pbRegisterCommandMessage->set_username(registerCommandMessage->GetUserName());
			pbRegisterCommandMessage->set_password(registerCommandMessage->GetPassword());

			pbCommandMessage->set_allocated_registercommandmessagepb(pbRegisterCommandMessage);
			protoMessage->set_allocated_icommandmessagepb(pbCommandMessage);
			break;
		case ChatCommand:
			ChatCommandMessage* chatCommandMessage = dynamic_cast<ChatCommandMessage*>(iCommandMessage);
			protoMessage = new IMessageProtoBuf();
			protoMessage->set_sessionkey(iCommandMessage->GetSessionKey());
			protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandMessage);

			ICommandMessageProtoBuf* pbCommandMessage = new ICommandMessageProtoBuf();
			pbCommandMessage->set_commandtype(ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_ChatCommand);

			ChatCommandMessageProtoBuf * pbChatCommandMessage = new ChatCommandMessageProtoBuf();
			pbChatCommandMessage->set_chatwithuser(chatCommandMessage->GetChatWithUser());

			pbCommandMessage->set_allocated_chatcommandmessagepb(pbChatCommandMessage);
			protoMessage->set_allocated_icommandmessagepb(pbCommandMessage);
			break;
	}
	return protoMessage;
}

IMessageProtoBuf* MessageConverter::ConvertToCommandResponseMessage(IMessage* message)
{
	IMessageProtoBuf* protoMessage = NULL;
	ICommandResponseMessage* iCommandResponseMessage = dynamic_cast<ICommandResponseMessage*>(message);

	switch (iCommandResponseMessage->GetCommandResponseType())
	{
	case LoginCommandResponse:
		LoginCommandResponseMessage* loginCommandMessage = dynamic_cast<LoginCommandResponseMessage*>(iCommandResponseMessage);
		protoMessage = new IMessageProtoBuf();
		protoMessage->set_sessionkey(iCommandResponseMessage->GetSessionKey());
		protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandResponseMessage);

		ICommandResponseMessageProtoBuf* pbCommandResponseMessage = new ICommandResponseMessageProtoBuf();
		pbCommandResponseMessage->set_commandresponsetype(ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_LoginCommandResponse);

		LoginCommandResponseMessageProtoBuf* pbLoginCommandResponseMessage = new LoginCommandResponseMessageProtoBuf();

		pbCommandResponseMessage->set_allocated_logincommandresponsemessagepb(pbLoginCommandResponseMessage);
		protoMessage->set_allocated_icommandresponsemessagepb(pbCommandResponseMessage);
		break;
	case LogoutCommandResponse:
		LogoutCommandResponseMessage* logoutCommandMessage = dynamic_cast<LogoutCommandResponseMessage*>(iCommandResponseMessage);
		protoMessage = new IMessageProtoBuf();
		protoMessage->set_sessionkey(iCommandResponseMessage->GetSessionKey());
		protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandResponseMessage);

		ICommandResponseMessageProtoBuf* pbCommandResponseMessage = new ICommandResponseMessageProtoBuf();
		pbCommandResponseMessage->set_commandresponsetype(ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_LogoutCommandResponse);

		LogoutCommandResponseMessageProtoBuf* pbLogoutCommandResponseMessage = new LogoutCommandResponseMessageProtoBuf();

		pbCommandResponseMessage->set_allocated_logoutcommandresponsemessagepb(pbLogoutCommandResponseMessage);
		protoMessage->set_allocated_icommandresponsemessagepb(pbCommandResponseMessage);
		break;
	case ListUsersCommandResponse:
		ListUsersCommandResponseMessage* listUsersCommandMessage = dynamic_cast<ListUsersCommandResponseMessage*>(iCommandResponseMessage);
		protoMessage = new IMessageProtoBuf();
		protoMessage->set_sessionkey(iCommandResponseMessage->GetSessionKey());
		protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandResponseMessage);

		ICommandResponseMessageProtoBuf* pbCommandResponseMessage = new ICommandResponseMessageProtoBuf();
		pbCommandResponseMessage->set_commandresponsetype(ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_ListUsersCommandResponse);

		ListUsersCommandResponseMessageProtoBuf* pbListUsersCommandResponseMessage = new ListUsersCommandResponseMessageProtoBuf();
		int index = 0;
		for (auto user : listUsersCommandMessage->GetActiveUsers())
		{
			pbListUsersCommandResponseMessage->set_activeusers(index++, user);
		}

		pbCommandResponseMessage->set_allocated_listuserscommandresponsemessagepb(pbListUsersCommandResponseMessage);
		protoMessage->set_allocated_icommandresponsemessagepb(pbCommandResponseMessage);
		break;
	case RegisterCommandResponse:
		RegisterCommandResponseMessage* registerCommandMessage = dynamic_cast<RegisterCommandResponseMessage*>(iCommandResponseMessage);
		protoMessage = new IMessageProtoBuf();
		protoMessage->set_sessionkey(iCommandResponseMessage->GetSessionKey());
		protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandResponseMessage);

		ICommandResponseMessageProtoBuf* pbCommandResponseMessage = new ICommandResponseMessageProtoBuf();
		pbCommandResponseMessage->set_commandresponsetype(ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_RegisterCommandResponse);

		RegisterCommandResponseMessageProtoBuf* pbRegisterCommandResponseMessage = new RegisterCommandResponseMessageProtoBuf();
		pbRegisterCommandResponseMessage->set_recoverykey(registerCommandMessage->GetRecoveryKey());

		pbCommandResponseMessage->set_allocated_registercommandresponsemessagepb(pbRegisterCommandResponseMessage);
		protoMessage->set_allocated_icommandresponsemessagepb(pbCommandResponseMessage);
		break;
	case ChatCommandResponse:
		ChatCommandResponseMessage* chatCommandMessage = dynamic_cast<ChatCommandResponseMessage*>(iCommandResponseMessage);
		protoMessage = new IMessageProtoBuf();
		protoMessage->set_sessionkey(iCommandResponseMessage->GetSessionKey());
		protoMessage->set_messagetype(IMessageProtoBuf_MessageTypeProtoBuf::IMessageProtoBuf_MessageTypeProtoBuf_CommandResponseMessage);

		ICommandResponseMessageProtoBuf* pbCommandResponseMessage = new ICommandResponseMessageProtoBuf();
		pbCommandResponseMessage->set_commandresponsetype(ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_ChatCommandResponse);

		ChatCommandResponseMessageProtoBuf* pbChatCommandResponseMessage = new ChatCommandResponseMessageProtoBuf();

		pbCommandResponseMessage->set_allocated_chatcommandresponsemessagepb(pbChatCommandResponseMessage);
		protoMessage->set_allocated_icommandresponsemessagepb(pbCommandResponseMessage);
		break;
	}
	return protoMessage;
}

IMessage* MessageConverter::ConvertToChatterMessage(IMessageProtoBuf* protoMessage)
{
	if (!protoMessage->has_ichattermessagepb())
		return NULL;

	IChatterMessage* message = NULL;
	IChatterMessageProtoBuf pbIChatterMessage = protoMessage->ichattermessagepb();

	if (!pbIChatterMessage.has_textchattermessagepb())
		return NULL;

	switch (pbIChatterMessage.chattertype())
	{
		case IChatterMessageProtoBuf_ChatterTypeProtoBuf::IChatterMessageProtoBuf_ChatterTypeProtoBuf_TextChatter:
			if (pbIChatterMessage.ChatterData_case() == IChatterMessageProtoBuf::ChatterDataCase::kTextChatterMessagePB)
				message = new TextChatterMessage(pbIChatterMessage.textchattermessagepb().textmessage(), protoMessage->sessionkey());
			break;
		case IChatterMessageProtoBuf_ChatterTypeProtoBuf::IChatterMessageProtoBuf_ChatterTypeProtoBuf_AudioChatter:
			break;
		default:
			break;
	}
	return message;
}

IMessage* MessageConverter::ConvertToCommandMessage(IMessageProtoBuf* protoMessage)
{
	if (!protoMessage->has_icommandmessagepb())
		return NULL;

	ICommandMessage* message = NULL;
	ICommandMessageProtoBuf pbICommandMessage = protoMessage->icommandmessagepb();

	switch (pbICommandMessage.commandtype())
	{
	case ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_ChatCommand:
		if ((pbICommandMessage.CommandData_case() == ICommandMessageProtoBuf::CommandDataCase::kChatCommandMessagePB) && pbICommandMessage.has_chatcommandmessagepb())
			message = new ChatCommandMessage(protoMessage->sessionkey(), pbICommandMessage.chatcommandmessagepb().chatwithuser());
		break;
	case ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_RegisterCommand:
		if ((pbICommandMessage.CommandData_case() == ICommandMessageProtoBuf::CommandDataCase::kRegisterCommandMessagePB) && pbICommandMessage.has_registercommandmessagepb())
			message = new RegisterCommandMessage(pbICommandMessage.registercommandmessagepb().username(), pbICommandMessage.registercommandmessagepb().password());
		break;
	case ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_ListUsersCommand:
		if ((pbICommandMessage.CommandData_case() == ICommandMessageProtoBuf::CommandDataCase::kListUsersCommandMessagePB) && pbICommandMessage.has_listuserscommandmessagepb())
			message = new ListUsersCommandMessage(protoMessage->sessionkey());
		break;
	case ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_LogoutCommand:
		if ((pbICommandMessage.CommandData_case() == ICommandMessageProtoBuf::CommandDataCase::kLogoutCommandMessagePB) && pbICommandMessage.has_logoutcommandmessagepb())
			message = new LogoutCommandMessage(protoMessage->sessionkey());
		break;
	case ICommandMessageProtoBuf_CommandTypeProtoBuf::ICommandMessageProtoBuf_CommandTypeProtoBuf_LoginCommand:
		if ((pbICommandMessage.CommandData_case() == ICommandMessageProtoBuf::CommandDataCase::kLoginCommandMessagePB) && pbICommandMessage.has_logincommandmessagepb())
			message = new LoginCommandMessage(pbICommandMessage.logincommandmessagepb().username(), pbICommandMessage.logincommandmessagepb().password());
		break;
	default:
		break;
	}
	return message;
}

IMessage* MessageConverter::ConvertToCommandResponseMessage(IMessageProtoBuf* protoMessage)
{
	if (!protoMessage->has_icommandmessagepb())
		return NULL;

	ICommandResponseMessage* message = NULL;
	ICommandResponseMessageProtoBuf pbICommandResponseMessage = protoMessage->icommandresponsemessagepb();

	switch (pbICommandResponseMessage.commandresponsetype())
	{
	case ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_ChatCommandResponse:
		if ((pbICommandResponseMessage.ResponseData_case() == ICommandResponseMessageProtoBuf::ResponseDataCase::kChatCommandResponseMessagePB) && pbICommandResponseMessage.has_chatcommandresponsemessagepb())
			message = new ChatCommandResponseMessage(pbICommandResponseMessage.status(), pbICommandResponseMessage.responsemessage());
		break;
	case ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_RegisterCommandResponse:
		if ((pbICommandResponseMessage.ResponseData_case() == ICommandResponseMessageProtoBuf::ResponseDataCase::kRegisterCommandResponseMessagePB) && pbICommandResponseMessage.has_registercommandresponsemessagepb())
			message = new RegisterCommandResponseMessage(pbICommandResponseMessage.registercommandresponsemessagepb().recoverykey(), pbICommandResponseMessage.status(), pbICommandResponseMessage.responsemessage());
		break;
	case ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_ListUsersCommandResponse:
		if ((pbICommandResponseMessage.ResponseData_case() == ICommandResponseMessageProtoBuf::ResponseDataCase::kListUsersCommandResponseMessagePB) && pbICommandResponseMessage.has_listuserscommandresponsemessagepb())
		{
			std::vector<std::string> onlineUsers = std::vector<std::string>(pbICommandResponseMessage.listuserscommandresponsemessagepb().activeusers().begin(), pbICommandResponseMessage.listuserscommandresponsemessagepb().activeusers().end());
			message = new ListUsersCommandResponseMessage(protoMessage->sessionkey(), onlineUsers, pbICommandResponseMessage.status(), pbICommandResponseMessage.responsemessage());
		}
		break;
	case ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_LogoutCommandResponse:
		if ((pbICommandResponseMessage.ResponseData_case() == ICommandResponseMessageProtoBuf::ResponseDataCase::kLogoutCommandResponseMessagePB) && pbICommandResponseMessage.has_logoutcommandresponsemessagepb())
			message = new LogoutCommandResponseMessage(protoMessage->sessionkey(), pbICommandResponseMessage.status(), pbICommandResponseMessage.responsemessage());
		break;
	case ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf::ICommandResponseMessageProtoBuf_CommandResponseTypeProtoBuf_LoginCommandResponse:
		if ((pbICommandResponseMessage.ResponseData_case() == ICommandResponseMessageProtoBuf::ResponseDataCase::kLoginCommandResponseMessagePB) && pbICommandResponseMessage.has_logincommandresponsemessagepb())
			message = new LoginCommandResponseMessage(protoMessage->sessionkey(), pbICommandResponseMessage.status(), pbICommandResponseMessage.responsemessage());
		break;
	default:
		break;
	}
	return message;
}