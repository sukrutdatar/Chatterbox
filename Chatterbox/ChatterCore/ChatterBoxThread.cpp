#include "stdafx.h"
#include "ChatterBoxThread.h"
using namespace ChatterBoxCore;

ChatterBoxThread::ChatterBoxThread(IRunnable* runnable) : m_runnable(std::shared_ptr<IRunnable>(runnable))
{
	LOG_TRACE_METHOD
}


ChatterBoxThread::~ChatterBoxThread()
{
	LOG_TRACE_METHOD
}

void ChatterBoxThread::Run()
{
	LOG_TRACE_METHOD

	m_runnable->Run();
}

void ChatterBoxThread::Start()
{
	LOG_TRACE_METHOD

	std::thread thread = std::thread(&ChatterBoxThread::Run, *this);
	thread.detach();
}
