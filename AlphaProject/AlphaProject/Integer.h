#pragma once
#include <iostream>

class Integer {
	int* m_pInt;

public:

	Integer();

	Integer(int value);

	//Copy Constructor
	Integer(const Integer& obj);

	//Move Constructor
	Integer(Integer&& obj);

	//Copy assignment
	Integer& operator=(const Integer& obj);

	//Move Assignment
	Integer& operator=(Integer&& obj);

	int GetValue()const;
	void SetValue(int value);
	~Integer();
};