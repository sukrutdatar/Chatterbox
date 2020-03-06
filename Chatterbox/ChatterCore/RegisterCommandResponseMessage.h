#pragma once
#include "IMessage.h"
#include "Util.h"

namespace ChatterBoxCore
{
	class RegisterCommandResponseMessage :
		public ICommandResponseMessage
	{
	private:
		std::string m_recoveryKey;
	public:
		RegisterCommandResponseMessage();
		RegisterCommandResponseMessage(std::string, bool, std::string);
		virtual ~RegisterCommandResponseMessage();


		std::string GetRecoveryKey();
		void SetRecoveryKey(std::string);

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}

