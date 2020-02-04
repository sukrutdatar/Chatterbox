#include "stdafx.h"
#include "BackgroundWorker.h"
using namespace ChatterBoxCore;

BackgroundWorker::BackgroundWorker(IRunnable* runnable) : m_thread(std::make_shared<ChatterBoxThread>(runnable))
{
	LOG_TRACE_METHOD
}


BackgroundWorker::~BackgroundWorker()
{
	LOG_TRACE_METHOD
}

void BackgroundWorker::Start()
{
	LOG_TRACE_METHOD

	if (m_thread != nullptr)
		m_thread->Start();
}