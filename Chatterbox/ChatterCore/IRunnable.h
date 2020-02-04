#pragma once

namespace ChatterBoxCore
{
	class IRunnable
	{
		public:
			IRunnable();
			virtual ~IRunnable();
			virtual void Run() = 0;
	};
}

