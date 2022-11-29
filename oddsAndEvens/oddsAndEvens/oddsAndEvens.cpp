// oddsAndEvens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool IsOdd(int num)
{
	if (num % 2 == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void OutputResults(int numOfOdd, int numOfEven, int oddTotal, int evenTotal)
{
	std::cout << "Number of odd numbers: " << numOfOdd << std::endl;
	std::cout << "Number of even numbers: " << numOfEven << std::endl;
	std::cout << "Sum of odd numbers: " << oddTotal << std::endl;
	std::cout << "Sum of even numbers: " << evenTotal << std::endl;
}

int main()
{
	int numOfOdd = 0;
	int numOfEven = 0;
	int oddTotal = 0;
	int evenTotal = 0;
	//ask the player for a number 10 times, iterating the even and odd counters
	for (int i = 0; i < 10; i++)
	{
		 int num;
		std::cout << "Enter a number: ";
		std::cin >> num;
		if (!IsOdd(num))
		{
			numOfEven++;
			evenTotal += num;
		}
		else
		{
			numOfOdd++;
			oddTotal += num;
		}
	}
	OutputResults(numOfOdd, numOfEven, oddTotal, evenTotal);
	std::cin;
	return 0;
}


