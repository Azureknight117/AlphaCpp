#pragma once
#include <iostream>

void TestingBasics() {
	std::cout << "Hello World!!\n";

	std::cout << "\nPointer stuff\n";
	int x{};
	int* ptr = &x;
	int* nPtr = nullptr;
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";
	std::cout << nPtr << "\n";
	nPtr = ptr;
	std::cout << nPtr << "\n";

	std::cout << "\nReference stuff\n";

	int o = 15;
	int& oR = o;

	std::cout << o << " and its ref: " << oR << "\n";
	std::cout << "Adding 7 to them" << "\n";
	oR += 7;
	std::cout << o << " and its ref: " << oR << "\n";

	//std::cout << Add(4000, 58433) << "\n";

	std::cout << "\Malloc stuff\n";

	//int *p = (int*)malloc(sizeof(int));
	int* p = (int*)calloc(1, sizeof(int));
	if (p == NULL)
	{
		printf("failed to allocate memory \n");
		//return -1;
	}
	*p = 5;
	std::cout << *p << "\n";
	free(p);
	p = NULL; //Do this pls

	std::cout << "\New stuff (the operator) \n"; //Just use New not Malloc
	int* k = new int;
	*k = 99;
	std::cout << *k << "\n";
	delete(k);
	k = NULL;
}