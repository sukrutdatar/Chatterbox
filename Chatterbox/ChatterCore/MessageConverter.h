#pragma once
#include "CBLogger.h"
#include "IMessage.h"
#include "TextChatterMessage.h"
#include "ChatCommandMessage.h"
#include "RegisterCommandMessage.h"
#include "ListUsersCommandMessage.h"
#include "LogoutCommandMessage.h"
#include "LoginCommandMessage.h"
#include "ChatCommandResponseMessage.h"
#include "RegisterCommandResponseMessage.h"
#include "ListUsersCommandResponseMessage.h"
#include "LogoutCommandResponseMessage.h"
#include "LoginCommandResponseMessage.h"
#include "IMessageProtoBuf.pb.h"
using namespace ChatterBoxCore::Protocols;

namespace ChatterBoxCore
{
	class MessageConverter
	{
		public:
			static MessageConverter& Instance();
			IMessageProtoBuf* ConvertTo(IMessage*);
			IMessage* ConvertTo(IMessageProtoBuf*);

		private:
			IMessage* ConvertToChatterMessage(IMessageProtoBuf*);
			IMessage* ConvertToCommandMessage(IMessageProtoBuf*);
			IMessage* ConvertToCommandResponseMessage(IMessageProtoBuf*);

			IMessageProtoBuf* ConvertToChatterMessage(IMessage*);
			IMessageProtoBuf* ConvertToCommandMessage(IMessage*);
			IMessageProtoBuf* ConvertToCommandResponseMessage(IMessage*);
	};
}

