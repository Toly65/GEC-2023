// Initials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//make a char array to store the input
	char input[100];
	std::cin.getline(input, 100);
	
	//we can use strtok_s to split the input, screw using a loop
	char* token;
	char* next_token = NULL;
	//print the first name initial
	token = strtok_s(input, " ", &next_token);
	std::cout << token[0] << std::endl;
	//print the middle name initial
	token = strtok_s(NULL, " ", &next_token);
	std::cout << token[0] << std::endl;
	//print the surname
	token = strtok_s(NULL, " ", &next_token);
	std::cout << token << std::endl;
}

