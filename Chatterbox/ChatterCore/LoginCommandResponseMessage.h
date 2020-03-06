#pragma once
#include "IMessage.h"
#include "Util.h"

namespace ChatterBoxCore
{
	class LoginCommandResponseMessage :
		public ICommandResponseMessage
	{
		public:
			LoginCommandResponseMessage();
			LoginCommandResponseMessage(std::string, bool, std::string);
			virtual ~LoginCommandResponseMessage();

			virtual std::string ToString();
			virtual std::string ToJson();
	};
}

