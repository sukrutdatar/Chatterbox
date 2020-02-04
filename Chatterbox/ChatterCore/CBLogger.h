#pragma once

#include <iostream>
#include <string>
#include <thread>
#include <memory>

#include "Util.h"

#include "Poco/Logger.h"
#include "Poco/SplitterChannel.h"
#include "Poco/FileChannel.h"
#include "Poco/AutoPtr.h"
#include "Poco/PatternFormatter.h"
#include "Poco/FormattingChannel.h"
#include "Poco/Message.h"

using Poco::Logger;
using Poco::SplitterChannel;
using Poco::FileChannel;
using Poco::AutoPtr;
using Poco::PatternFormatter;
using Poco::FormattingChannel;


#define LOGGER ChatterBoxCore::CBLogger::GetInstance()
#define LOG_FATAL(LogMessage) LOGGER->Fatal(LogMessage, __FUNCTION__, __LINE__);
#define LOG_CRITICAL(LogMessage) LOGGER->Critical(LogMessage, __FUNCTION__, __LINE__);
#define LOG_ERROR(LogMessage) LOGGER->Error(LogMessage, __FUNCTION__, __LINE__);
#define LOG_WARNING(LogMessage) LOGGER->Warning(LogMessage, __FUNCTION__, __LINE__);
#define LOG_INFO(LogMessage) LOGGER->Info(LogMessage, __FUNCTION__, __LINE__);
#define LOG_DEBUG(LogMessage) LOGGER->Debug(LogMessage, __FUNCTION__, __LINE__);
#define LOG_TRACE(LogMessage) LOGGER->Trace(LogMessage, __FUNCTION__, __LINE__);
#define LOG_TRACE_METHOD LOGGER->TraceMethod(__FUNCTION__, __LINE__);

namespace ChatterBoxCore
{
	enum CBLogLevel
	{
		Fatal = 1,
		Critical,
		Error,
		Warning,
		Notice,
		Information,
		Debug,
		Trace
	};

	class CBLogger
	{
	private:
		AutoPtr<FileChannel> m_pFileChannel;
		AutoPtr<SplitterChannel> m_pSplitterChannel;
		AutoPtr<FormattingChannel> m_pFormattingChannel;

		static std::shared_ptr<CBLogger> s_pInstance;
		std::string m_loggerName;

	private:
		CBLogger();
		void CreateLogger();

	public:
		static std::shared_ptr<CBLogger> GetInstance();
		void SetLevel(CBLogLevel);

		void Fatal(std::string, std::string, int);
		void Critical(std::string, std::string, int);
		void Error(std::string, std::string, int);
		void Warning(std::string, std::string, int);
		void Info(std::string, std::string, int);
		void Debug(std::string, std::string, int);
		void Trace(std::string, std::string, int);
		void TraceMethod(std::string, int);

		~CBLogger();
	};
}

