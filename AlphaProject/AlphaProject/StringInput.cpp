#include <iostream>
#include <string>

std::string GetGreeting()
{
	std::string greeting;
	std::getline(std::cin, greeting);
	return greeting;
}