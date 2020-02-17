#include "pch.h"
#include <iostream>
#include <string>

#include "InputProcessor.h"
using namespace ChatterBoxClient;

#define PROMPT(USER, TO) ((std::string(USER).empty()) ? "chatterbox #> " : ("chatterbox/"+std::string(USER) +" - "+ std::string(TO) + " #> "))
#define NL std::endl

int main()
{
	std::string line;
	std::string username;
	std::string current;
	InputProcessor::Instance().Start();
	while (true)
	{
		std::cout << std::endl << PROMPT(username, current);
		std::getline(std::cin, line);
		InputProcessor::Instance().Enqueue(line);
		if (line.compare("exit") == 0)
			break;
		//int pos = line.find(' ');
		//username = line.substr(0, pos);
		//current = line.substr(pos + 1, line.length());

	}

	InputProcessor::Instance().Stop();
    
	std::cout << NL << NL;
	return 0;
}