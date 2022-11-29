// 10Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//intially ask the user for 2 numbers
	int num1, num2;
	std::cout << "Enter 2 numbers: ";
	std::cin >> num1 >> num2;
	int inputNum;
	int sum = 0;
	int mean = 0;
	int iterator = 2;
	//calulate the mean
	mean = (num1 + num2) / 2;
	//add the 2 numbers to the sum
	sum = num1 + num2;
	//print out the sum and mean
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Mean: " << mean << std::endl;

	do
	{
		//ask the user for a number
		std::cout << "Enter a number: ";
		std::cin >> inputNum;
		iterator++;
		if (inputNum != 0)
		{
			//add the number to the sum
			sum += inputNum;

			//calculate the mean
			mean = sum / iterator;

			//print the sum and mean
			std::cout << "Sum: " << sum << std::endl;
			std::cout << "Mean: " << mean << std::endl;
		}
	} while (inputNum != 0);
}


