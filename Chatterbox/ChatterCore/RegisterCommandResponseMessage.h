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
		bool m_status;
	public:
		RegisterCommandResponseMessage();
		RegisterCommandResponseMessage(std::string, bool);
		virtual ~RegisterCommandResponseMessage();

		bool GetStatus();
		void SetStatus(bool);

		std::string GetRecoveryKey();
		void SetRecoveryKey(std::string);

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}

