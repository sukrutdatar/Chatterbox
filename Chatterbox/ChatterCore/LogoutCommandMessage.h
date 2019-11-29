#pragma once
#include "IMessage.h"
#include <string>

namespace ChatterBoxCore
{
	class LogoutCommandMessage :
		public ICommandMessage
	{
	public:
		LogoutCommandMessage();
		LogoutCommandMessage(std::string);
		virtual ~LogoutCommandMessage();

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}

