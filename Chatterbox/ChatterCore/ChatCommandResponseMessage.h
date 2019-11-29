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
	};
}

