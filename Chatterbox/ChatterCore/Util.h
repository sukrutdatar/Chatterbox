#pragma once

#include <string>
#include <sstream>
#include <thread>
#include <vector>

namespace ChatterBoxCore
{
	class Util
	{
	public:
		static std::string Int2String(int);
		static int String2Int(std::string);
		static std::string ThreadId2String(std::thread::id);
		static std::string Bool2String(bool);
		static std::string Vector2String(std::vector<std::string>);
	};
}
