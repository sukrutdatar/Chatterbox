#pragma once

#include <thread>
#include <memory>

#include "CBLogger.h"
#include "IRunnable.h"

namespace ChatterBoxCore
{
	class ChatterBoxThread
	{
		private:
			std::shared_ptr<IRunnable> m_runnable;
		public:
			ChatterBoxThread(IRunnable*);
			virtual ~ChatterBoxThread();
			void Start();
		
		private:
			void Run();
	};

}

