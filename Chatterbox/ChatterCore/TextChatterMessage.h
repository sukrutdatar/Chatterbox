#pragma once
#include "IMessage.h"

namespace ChatterBoxCore
{
	class TextChatterMessage :
		public IChatterMessage
	{
	private:
		std::string m_textMessage;
		std::string m_toUser;
	public:
		TextChatterMessage();
		TextChatterMessage(std::string, std::string);
		virtual ~TextChatterMessage();

		void SetTextMessage(std::string);
		std::string GetTextMessage();

		void SetToUser(std::string);
		std::string GetToUser();

		virtual std::string ToString();
		virtual std::string ToJson();
	};
}

