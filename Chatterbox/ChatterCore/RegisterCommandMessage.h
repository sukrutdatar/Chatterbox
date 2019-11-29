#pragma once
#include "IMessage.h"

namespace ChatterBoxCore
{
	class RegisterCommandMessage : 
		public ICommandMessage
	{
	private:
		std::string m_username;
		std::string m_password;
	public:
		RegisterCommandMessage();
		RegisterCommandMessage(std::string, std::string);
		virtual ~RegisterCommandMessage();

		std::string GetUserName();
		std::string GetPassword();
		
		void SetUserName(std::string);
		void SetPassword(std::string);

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}
