// NameInserter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string victimString = "Do you know who hates C++? XX does!";
	//take input from the user for the name
	string name;
	cout << "Enter your name: ";
	cin >> name;
	//find the position of XX
	int position = victimString.find("XX");
	//insert the name into the string
	victimString.insert(position, name);
	//remove the XX
	victimString.erase(position + name.length(), 2);
	//print the result
	cout << victimString << endl;
	//ask for a new longer name and store it in a new variable
	string longerName;
	cout << "Enter a longer name: ";
	cin >> longerName;
	//find the original name
	position = victimString.find(name);
	//insert the longer name into the string
	victimString.insert(position, longerName);
	//remove the original name
	victimString.erase(position + longerName.length(), name.length());
	//print the result
	cout << victimString << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
