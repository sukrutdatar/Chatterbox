#pragma once

#include <memory>

#include "ChatterBoxThread.h"
#include "IRunnable.h"
#include "CBLogger.h"

namespace ChatterBoxCore
{
	class BackgroundWorker
	{
		private:
			std::shared_ptr<ChatterBoxThread> m_thread;
		public:
			BackgroundWorker(IRunnable*);
			virtual ~BackgroundWorker();
			void Start();
	};

}

