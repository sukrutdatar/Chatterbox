#pragma once
#include "IMessage.h"

namespace ChatterBoxCore
{
	class ChatCommandResponseMessage :
		public ICommandResponseMessage
	{
	public:
		ChatCommandResponseMessage();
		virtual ~ChatCommandResponseMessage();

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}

