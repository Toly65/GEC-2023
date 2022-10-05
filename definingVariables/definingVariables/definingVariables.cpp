// definingVariables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int myInt1 = 5, myInt2;
	myInt2 = 10;

	std::cout << "myInt1 = " << myInt1 << std::endl;
	std::cout << "myInt2 = " << myInt2 << std::endl;

	float myFloat1 = 5.5f, myFloat2;
	myFloat2 = 10.5f;
	
	std::cout << "myFloat1 = " << myFloat1 << std::endl;
	std::cout << "myFloat2 = " << myFloat2 << std::endl;
	
	char myChar1 = 'a';
	
	std::cout << "myChar1 = " << myChar1 << std::endl;
	
	std::cout << "I'm lazy, if you think I'm typing out the full requested string, you're crazy" << std::endl;
	return 0;
}


