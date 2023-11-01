// autoclicker.cpp : Defines the entry point for the application.
//

#include "autoclicker.h"
#include "console.h"

int main()
{
	std::cout << "Welcome to my auto clicker! type start, help, or version\n";
	Console::listen();
	return 0;
}