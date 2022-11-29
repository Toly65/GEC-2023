// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX_ITEMS = 4;
int numItems = 0;
string inventory[MAX_ITEMS];

void displayItems()
{
	//display the items in the inventory with their indexes on the same line
	for (int i = 0; i < numItems; i++)
	{
		cout << i << ": " << inventory[i] << endl;
	}

}

int main()
{
	
	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "healing potion";
	inventory[numItems++] = "dagger";

	cout << "You have picked up the wizards staff, however there is not enough room in your inventory" << endl;
	cout << "you currently have " << numItems << " items in your inventory" << endl;
	displayItems();
	
	//ask if the player wants to replace an item with the staff
	
	char answer;
	do 
	{
		cout << "Would you like to replace an item with the staff? (y/n)" << endl;
		cin >> answer;
	} while (answer != 'y' && answer != 'n');
	
	if (answer == 'y')
	{
		int index;
		cout << "Enter the index of the item you would like to replace" << endl;
		cin >> index;
		//check if the index is valid
		while (index < 0 || index >= numItems)
		{
			cout << "Enter a valid index" << endl;
			cin >> index;
		}
		
		//replace the item at the index with the staff
		inventory[index] = "staff";
	}
	else
	{
		cout << "You have chosen not to replace an item with the staff" << endl;
	}
	cout << "You currently have " << numItems << " items in your inventory" << endl;
	displayItems();
}