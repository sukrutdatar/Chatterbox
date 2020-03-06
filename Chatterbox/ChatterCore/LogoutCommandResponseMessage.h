#pragma once
#include "IMessage.h"
#include "Util.h"

namespace ChatterBoxCore
{
	class LogoutCommandResponseMessage :
		public ICommandResponseMessage
	{
	public:
		LogoutCommandResponseMessage();
		LogoutCommandResponseMessage(std::string, bool, std::string);
		virtual ~LogoutCommandResponseMessage();

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}
