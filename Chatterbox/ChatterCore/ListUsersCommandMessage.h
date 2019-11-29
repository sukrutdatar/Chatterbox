#pragma once
#include "IMessage.h"

namespace ChatterBoxCore
{
	class ListUsersCommandMessage :
		public ICommandMessage
	{
	public:
		ListUsersCommandMessage();
		ListUsersCommandMessage(std::string);
		virtual ~ListUsersCommandMessage();

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}
