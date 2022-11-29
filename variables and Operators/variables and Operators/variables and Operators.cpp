// variables and Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const float pi = 3.14159;
float radius = 25.0f;
float areaOfCircle;
int main()
{
    //calculate area of circle and output it
    areaOfCircle = pi * radius * radius;
    std::cout << "the area of a cricle with the radius " << radius << " is " << areaOfCircle;
}
