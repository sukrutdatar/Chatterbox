#pragma once
#include "IMessage.h"
#include <string>

namespace ChatterBoxCore
{
	class LoginCommandMessage :
		public ICommandMessage
	{
	private:
		std::string m_username;
		std::string m_password;
	public:
		LoginCommandMessage();
		LoginCommandMessage(std::string, std::string);
		virtual ~LoginCommandMessage();
		
		std::string GetUserName();
		std::string GetPassword();
		void SetUserName(std::string);
		void SetPassword(std::string);

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}