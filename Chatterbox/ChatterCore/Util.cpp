#include "stdafx.h"
#include "Util.h"
using namespace ChatterBoxCore;

std::string Util::Int2String(int num)
{
	std::stringstream ss;
	ss << num;
	return ss.str();
}

int Util::String2Int(std::string numStr)
{
	int num = 0;
	std::stringstream ss(numStr);
	ss >> num;
	return num;
}

std::string Util::ThreadId2String(std::thread::id threadId)
{
	std::stringstream ss;
	ss << threadId;
	return ss.str();
}

std::string Util::Bool2String(bool value)
{
	return (value) ? "true" : "false";
}

std::string Util::Vector2String(std::vector<std::string> values)
{
	std::stringstream ss;
	ss << "[";
	for (auto it = values.begin(); it != values.end(); ++it)
	{
		ss << std::endl << *it;
	}
	ss << std::endl << "]";
	return ss.str();
}