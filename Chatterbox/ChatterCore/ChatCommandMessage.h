#pragma once
#include "IMessage.h"

namespace ChatterBoxCore
{
	class ChatCommandMessage :
		public ICommandMessage
	{
	private:
		std::string m_toUser;
	public:
		ChatCommandMessage();
		ChatCommandMessage(std::string, std::string);
		virtual ~ChatCommandMessage();

		std::string GetToUser();
		void SetToUser(std::string);

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}
