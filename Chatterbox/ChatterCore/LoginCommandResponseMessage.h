#pragma once
#include "IMessage.h"
#include "Util.h"

namespace ChatterBoxCore
{
	class LoginCommandResponseMessage :
		public ICommandResponseMessage
	{
	private:
		bool m_status;
		std::string m_responseMessage;

	public:
		LoginCommandResponseMessage();
		LoginCommandResponseMessage(std::string, bool, std::string);
		virtual ~LoginCommandResponseMessage();

		bool GetStatus();
		void SetStatus(bool);

		std::string GetResponseMessage();
		void SetResponseMessage(std::string);

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}

