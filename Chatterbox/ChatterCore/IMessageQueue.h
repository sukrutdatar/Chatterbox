#pragma once
#include <condition_variable>
#include <queue>
#include <memory>
#include <mutex>

#include "IMessage.h"

namespace ChatterBoxCore
{
	class IMessageQueue
	{
	protected:
		std::queue<std::shared_ptr<IMessage>> m_messageQueue;
		bool m_notified;
		std::condition_variable m_cv;
		std::mutex m_mutex;
	public:
		IMessageQueue();
		virtual ~IMessageQueue();
		void Enqueue(std::shared_ptr<IMessage>);
		std::shared_ptr<IMessage> Dequeue();
		void Notify();
		size_t Size();
		void Clear();
	private:
		bool HasNextMessage();
		std::shared_ptr<IMessage> GetNextMessage();
	};
}

