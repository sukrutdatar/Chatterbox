#include "stdafx.h"
#include "IMessageQueue.h"
using namespace ChatterBoxCore;

IMessageQueue::IMessageQueue() :
	m_notified(false)
{
}

IMessageQueue::~IMessageQueue()
{
}

void IMessageQueue::Enqueue(std::shared_ptr<IMessage> message)
{
	std::unique_lock<std::mutex> lk(m_mutex);
	m_messageQueue.push(message);
	m_cv.notify_one();
}

std::shared_ptr<IMessage> IMessageQueue::Dequeue()
{
	std::unique_lock<std::mutex> lk(m_mutex);
	while ((!m_notified) && (!HasNextMessage()))
	{
		m_cv.wait(lk);
	}
	m_notified = false;
	return GetNextMessage();
}

void IMessageQueue::Notify()
{
	std::unique_lock<std::mutex> lk(m_mutex);
	m_notified = true;
	m_cv.notify_one();
}

size_t IMessageQueue::Size()
{
	std::unique_lock<std::mutex> lk(m_mutex);
	return m_messageQueue.size();
}

void IMessageQueue::Clear()
{
	std::unique_lock<std::mutex> lk(m_mutex);
	while (!m_messageQueue.empty())
		m_messageQueue.pop();
}

bool IMessageQueue::HasNextMessage()
{
	return !m_messageQueue.empty();
}

std::shared_ptr<IMessage> IMessageQueue::GetNextMessage()
{
	if (m_messageQueue.size() > 0)
	{
		std::shared_ptr<IMessage> retMessage = m_messageQueue.front();
		m_messageQueue.pop();
		return retMessage;
	}
	return nullptr;
}