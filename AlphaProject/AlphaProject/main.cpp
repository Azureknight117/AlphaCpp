#include <iostream>
#include "StringInput.h"
#include "Integer.h"
#include "Testing.h"


class Number {
	Integer m_Value{};
public:
	Number(int value) :m_Value{ value } {

	}
	Number(const Number& n) :m_Value{ n.m_Value } {

	}
};


int main() {
	
	Number n1{ 1 };
	auto n2{ n1 };
	n2 = n1;
	return 0;
}

