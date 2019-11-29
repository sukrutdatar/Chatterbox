#include "CBLogger.h"
using namespace ChatterBoxCore;

std::shared_ptr<CBLogger> CBLogger::s_pInstance = NULL;

CBLogger::CBLogger() : m_loggerName("CBLogger")
{
	CreateLogger();
}


CBLogger::~CBLogger()
{
}

std::shared_ptr<CBLogger> CBLogger::GetInstance()
{
	if (s_pInstance.get() == NULL)
	{
		s_pInstance = std::make_shared<CBLogger>();
	}
	return s_pInstance;
}

void CBLogger::CreateLogger()
{
	AutoPtr<PatternFormatter> patternFormatter(new PatternFormatter());
	patternFormatter->setProperty("pattern", "[%p(%[thread]) - %[function]:%[line] - %d/%m/%y %H:%M:%S] %t");

	//m_pConsoleChannel = new ConsoleChannel();
	m_pFileChannel = new FileChannel();

	m_pFileChannel->setProperty("path", "cbox.log");
	m_pFileChannel->setProperty("rotation", "daily");
	m_pFileChannel->setProperty("archive", "timestamp");
	m_pFileChannel->setProperty("compress", "true");

	m_pFormattingChannel = new FormattingChannel(patternFormatter, m_pFileChannel);

	m_pSplitterChannel = new SplitterChannel();
	//m_pSplitterChannel->addChannel(m_pConsoleChannel);
	m_pSplitterChannel->addChannel(m_pFormattingChannel);

	Logger::get(m_loggerName).setChannel(m_pSplitterChannel);
	SetLevel(CBLogLevel::Trace);
}

void CBLogger::SetLevel(CBLogLevel level)
{
	Logger::get(m_loggerName).setLevel(level);
}

void CBLogger::Info(std::string message, std::string functionName, int lineNumber)
{
	Logger& logger = Logger::get(m_loggerName);
	Poco::Message logMessage;
	logMessage.setPriority(Poco::Message::Priority::PRIO_INFORMATION);
	logMessage.setText(message);
	logMessage["function"] = functionName;
	logMessage["line"] = Util::Int2String(lineNumber);
	logMessage["thread"] = Util::ThreadId2String(std::this_thread::get_id());
	logger.log(logMessage);
}

void CBLogger::Trace(std::string message, std::string functionName, int lineNumber)
{
	Logger& logger = Logger::get(m_loggerName);

	Poco::Message logMessage;
	logMessage.setPriority(Poco::Message::Priority::PRIO_TRACE);
	logMessage.setText(message);
	logMessage["function"] = functionName;
	logMessage["line"] = Util::Int2String(lineNumber);
	logMessage["thread"] = Util::ThreadId2String(std::this_thread::get_id());
	logger.log(logMessage);
}

void CBLogger::Warning(std::string message, std::string functionName, int lineNumber)
{
	Logger& logger = Logger::get(m_loggerName);
	Poco::Message logMessage;
	logMessage.setPriority(Poco::Message::Priority::PRIO_WARNING);
	logMessage.setText(message);
	std::stringstream ss;
	ss << lineNumber;
	logMessage["function"] = functionName;
	logMessage["line"] = Util::Int2String(lineNumber);
	logMessage["thread"] = Util::ThreadId2String(std::this_thread::get_id());
	logger.log(logMessage);
}

void CBLogger::Error(std::string message, std::string functionName, int lineNumber)
{
	Logger& logger = Logger::get(m_loggerName);
	Poco::Message logMessage;
	logMessage.setPriority(Poco::Message::Priority::PRIO_ERROR);
	logMessage.setText(message);
	std::stringstream ss;
	ss << lineNumber;
	logMessage["function"] = functionName;
	logMessage["line"] = Util::Int2String(lineNumber);
	logMessage["thread"] = Util::ThreadId2String(std::this_thread::get_id());
	logger.log(logMessage);
}

void CBLogger::Debug(std::string message, std::string functionName, int lineNumber)
{
	Logger& logger = Logger::get(m_loggerName);
	Poco::Message logMessage;
	logMessage.setPriority(Poco::Message::Priority::PRIO_DEBUG);
	logMessage.setText(message);
	std::stringstream ss;
	ss << lineNumber;
	logMessage["function"] = functionName;
	logMessage["line"] = Util::Int2String(lineNumber);
	logMessage["thread"] = Util::ThreadId2String(std::this_thread::get_id());
	logger.log(logMessage);
}

void CBLogger::Critical(std::string message, std::string functionName, int lineNumber)
{
	Logger& logger = Logger::get(m_loggerName);
	Poco::Message logMessage;
	logMessage.setPriority(Poco::Message::Priority::PRIO_CRITICAL);
	logMessage.setText(message);
	std::stringstream ss;
	ss << lineNumber;
	logMessage["function"] = functionName;
	logMessage["line"] = Util::Int2String(lineNumber);
	logMessage["thread"] = Util::ThreadId2String(std::this_thread::get_id());
	logger.log(logMessage);
}

void CBLogger::Fatal(std::string message, std::string functionName, int lineNumber)
{
	Logger& logger = Logger::get(m_loggerName);
}