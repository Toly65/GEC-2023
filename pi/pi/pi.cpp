// pi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const float pi = 3.13159;
int main()
{
	float radius = 25.0f;
	float area = pi * radius * radius;
	std::cout << "The area of a circle with radius " << radius << " is " << area << std::endl;
}
