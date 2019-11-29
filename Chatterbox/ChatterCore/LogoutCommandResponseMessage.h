#pragma once
#include "IMessage.h"
#include "Util.h"

namespace ChatterBoxCore
{
	class LogoutCommandResponseMessage :
		public ICommandResponseMessage
	{
	private:
		bool m_status;
		std::string m_responseMessage;
	public:
		LogoutCommandResponseMessage();
		LogoutCommandResponseMessage(std::string, bool, std::string);
		virtual ~LogoutCommandResponseMessage();

		void SetStatus(bool);
		bool GetStatus();

		std::string GetResponseMessage();
		void SetResponseMessage(std::string);

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}
