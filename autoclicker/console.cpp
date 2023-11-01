#include "console.h"
#include "auto.h"

std::string type;

void Console::getInput()
{
	if (type == "version")
	{
		std::cout << "v1.0\n";
		Console::listen();
	} else if (type == "start")
	{
		std::cout << "To make it stop and exit press ctrl + c multiple times\nor press the x button in the corner\n";
		AutoClicker::setActive(true);
		AutoClicker::start();
		Console::listen();
	}
	else if (type == "exit")
	{
		AutoClicker::setActive(false);
		std::cout << "Bye!";
	}
	else {
		std::cout << "Unknown command, commands are version, start, and exit\n";
		Console::listen();
	}
}

void Console::listen()
{
	std::cin >> type;
	Console::getInput();
}