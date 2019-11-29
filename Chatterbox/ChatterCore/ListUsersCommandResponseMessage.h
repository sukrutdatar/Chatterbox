#pragma once
#include "IMessage.h"
#include "Util.h"
#include <vector>


namespace ChatterBoxCore
{
	class ListUsersCommandResponseMessage :
		public ICommandResponseMessage
	{
	private:
		std::vector<std::string> m_activeUsers;
	public:
		ListUsersCommandResponseMessage();
		ListUsersCommandResponseMessage(std::string, std::vector<std::string>);
		virtual ~ListUsersCommandResponseMessage();

		void SetActiveUsers(std::vector<std::string>);
		std::vector<std::string> GetActiveUsers();

		virtual std::string ToString();
		virtual std::string ToJson();

	private:
		Poco::JSON::Array UsersToJsonArray();
	};
}

