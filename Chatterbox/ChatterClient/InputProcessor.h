#pragma once
#include <queue>
#include <string>
#include <mutex>
#include <condition_variable>
#include <memory>

#include "../ChatterCore/BackgroundWorker.h"
#include "../ChatterCore//CBLogger.h"
#include "../ChatterCore/IRunnable.h"
using namespace ChatterBoxCore;

namespace ChatterBoxClient
{
	class InputProcessor : IRunnable
	{
		private:
			std::queue<std::string> m_inputQueue;
			std::mutex m_mutex;
			std::condition_variable m_cv;
			bool m_shouldStop;
			std::shared_ptr<BackgroundWorker> m_worker;

			static std::shared_ptr<InputProcessor> m_instance;

		public:
			void Enqueue(std::string);
			size_t Size();
			void Clear();
			void Stop();
			void Start();

			static InputProcessor& Instance();
			virtual ~InputProcessor();
			virtual void Run();
			
		private:
			InputProcessor();
			std::string Fetch();
			void Process(std::string);
	};
}
