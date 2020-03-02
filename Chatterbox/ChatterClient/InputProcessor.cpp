#include "pch.h"
#include "InputProcessor.h"
using namespace ChatterBoxClient;

std::shared_ptr<InputProcessor> InputProcessor::m_instance = nullptr;

InputProcessor::InputProcessor() : m_shouldStop(false)
{
	LOG_TRACE_METHOD
}

InputProcessor::~InputProcessor()
{
	LOG_TRACE_METHOD
}

void InputProcessor::Enqueue(std::string input)
{
	LOG_TRACE_METHOD
	std::unique_lock<std::mutex> lock(m_mutex);
	m_inputQueue.push(input);
	m_cv.notify_all();
}

size_t InputProcessor::Size()
{
	LOG_TRACE_METHOD
	std::unique_lock<std::mutex> lock(m_mutex);
	return m_inputQueue.size();
}

void InputProcessor::Clear()
{
	LOG_TRACE_METHOD
	std::unique_lock<std::mutex> lock(m_mutex);
	while (!m_inputQueue.empty())
		m_inputQueue.pop();
}

void InputProcessor::Stop()
{
	LOG_TRACE_METHOD
	m_shouldStop = true;
	Clear();
}

void InputProcessor::Start()
{
	LOG_TRACE_METHOD
	
	m_shouldStop = false;
	if (!m_worker)
	{
		m_worker = std::shared_ptr<BackgroundWorker>(new BackgroundWorker(this));
		m_worker->Start();
	}
}

void InputProcessor::Run()
{
	LOG_TRACE_METHOD

	while (!m_shouldStop)
	{
		std::string input = Fetch();
		Process(input);
	}
}

void InputProcessor::Process(std::string input)
{
	std::string commandName = std::string();
	std::getline(std::stringstream(input), commandName, ' ');
	IMessage* message;

	if (commandName.compare("//chat") == 0)
	{
		std::cout << std::endl << "chat command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::ChatCommand);
	}
	else if (commandName.compare("/login") == 0)
	{
		std::cout << std::endl << "login command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::LoginCommand);
	}
	else if (commandName.compare("/join") == 0)
	{
		std::cout << std::endl << "join command";
		//message = IMessage::Create(MessageType::CommandMessage, CommandType::);

	}
	else if (commandName.compare("/create") == 0)
	{
		std::cout << std::endl << "create command";
		//message = IMessage::Create(MessageType::CommandMessage, CommandType::);
	}
	else if (commandName.compare("/list") == 0)
	{
		std::cout << std::endl << "list command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::ListUsersCommand);
	}
	else if (commandName.compare("/logout") == 0)
	{
		std::cout << std::endl << "logout command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::LogoutCommand);
	}
	else if (commandName.compare("/register") == 0)
	{
		std::cout << std::endl << "register command";
		message = IMessage::Create(MessageType::CommandMessage, CommandType::RegisterCommand);
	}
	else if (commandName.compare("/status") == 0)
	{
		std::cout << std::endl << "status command";
		//message = IMessage::Create(MessageType::CommandMessage, CommandType::);
	}
}

std::string InputProcessor::Fetch()
{
	LOG_TRACE_METHOD
	
	std::string input;
	std::unique_lock<std::mutex> lock(m_mutex);
	while (m_inputQueue.empty())
	{
		m_cv.wait(lock);
	}
	input = m_inputQueue.front();
	m_inputQueue.pop();
	return input;
}

InputProcessor& InputProcessor::Instance()
{
	LOG_TRACE_METHOD
	if (!m_instance)
	{
		m_instance = std::shared_ptr<InputProcessor>(new InputProcessor());
	}
	return *m_instance;
}