#include <iostream>
#include "StringInput.h"
#include "Integer.h"
#include "Testing.h"


template <typename T> T Max(T x, T y)
{
	return (x > y) ? x : y;
}



int main() {
	

	std::cout << "x: " << Max(6.4, 10.5) << std::endl;
	return 0;
}

