// StarryOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    do {
		//ask the user for a number between 1 and 10
		std::cout << "Enter a number between 1 and 10: ";
		int number;
		std::cin >> number;
		//if the number is not between 1 and 10, ask again
		if (number < 1 || number > 10) {
			std::cout << "That number is not between 1 and 10. Try again." << std::endl;
			continue;
		}
		//make a half pyramid of stars using nested for loops
		for (int i = 1; i <= number; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				std::cout << "*";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
		//ask the user if they want to continue
		char answer;
		while (true)
		{
			std::cout << "Do you want to continue? (y/n): ";
			
			std::cin >> answer;
			//if the user does not want to continue, exit the program
			if (answer == 'n')
				break;
			//if the user does want to continue, break out of the inner loop
			if (answer == 'y')
				break;
		}
		if (answer == 'n')
			break;
		
	} while (true);
	std::cout << "Goodbye!" << std::endl;
	
	return 0;
}


