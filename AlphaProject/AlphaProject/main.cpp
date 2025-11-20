#include <iostream>
#include "StringInput.h"


int main() {
	std::cout << "Hello World!!\n";

	int l = 77;
	int i { 66 };
	std::cout << i << " " << l << "\n";

	std::string greet = GetGreeting();

	std::cout << "You said: " << greet;
	return 0;
}

