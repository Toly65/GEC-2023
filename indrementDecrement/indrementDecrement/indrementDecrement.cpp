// indrementDecrement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    // initialise num to 1
	int num = 1;
	
	// increment demo 1
	cout << "num = " << num << std::endl;
	cout << "Increment operator before num = " << ++num << std::endl;
	cout << "num = " << num << std::endl;

	//increment demo 2
	num = 1;
	cout << "num = " << num << std::endl;
	cout << "Increment operator after num = " << num++ << std::endl;
	cout << "num = " << num << std::endl;
	
	//decrement demo 1
	num = 1;
	cout << "num = " << num << std::endl;
	cout << "Decrement operator before num = " << --num << std::endl;
	cout << "num = " << num << std::endl;
	
	//Decrement demo 2
	num = 1;
	cout << "num = " << num << std::endl;
	cout << "Decrement operator after num = " << num-- << std::endl;
	cout << "num = " << num << std::endl;
	
	return 0;
}

