// References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num = 0;
	int& ref = num;
	
	std::cout << "Enter a number: ";
	std::cin >> ref;
	std::cout << "The value of num is: " << num << std::endl;
	ref += 25;
	std::cout << "The value of num is: " << num << std::endl;
	
	std::cout << "Enter a number: ";
	std::cin >> ref;
	std::cout << "The value of num is: " << num << std::endl;
	ref -= 25;
	std::cout << "The value of num is: " << num << std::endl;
}


