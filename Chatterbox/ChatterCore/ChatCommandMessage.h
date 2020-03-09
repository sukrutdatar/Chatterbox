#pragma once
#include "IMessage.h"

namespace ChatterBoxCore
{
	class ChatCommandMessage :
		public ICommandMessage
	{
	private:
		std::string m_chatWithUser;
	public:
		ChatCommandMessage();
		ChatCommandMessage(std::string, std::string);
		virtual ~ChatCommandMessage();

		std::string GetChatWithUser();
		void SetToUser(std::string);

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}
