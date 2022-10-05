// converting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
	//seems kind of stupid not to take an input from the user
	float faranheit = 95.0f;
	float celsius = (faranheit - 32) * 5 / 9;
	std::cout << faranheit << "F is equal to " << celsius << "C." << std::endl;
}


