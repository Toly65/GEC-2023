// ToTenScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void AddScore(int score)
{
	//check if a file exists
	ifstream file("scores.txt");
	
	if (!file)
	{
		//if not, create it
		ofstream file("scores.txt");
		file << score << endl;
		file.close();
	}
	else
	{
		//open it and count how many scores are in there, each score is stored in a new line
		int count = 0;
		string line;
		while (getline(file, line))
		{
			count++;
		}
		//if there are more than 10 scores, put them all into an array for comparison and sorting
		if (count >= 10)
		{
			int scores[10];
			file.close();
			file.open("scores.txt");
			for (int i = 0; i < 10; i++)
			{
				file >> scores[i];
			}
			file.close();
			//find the lowest score, and replace it with the new score if it is higher
			int lowest = scores[0];
			int lowestIndex = 0;
			for (int i = 0; i < 10; i++)
			{
				if (scores[i] < lowest)
				{
					lowest = scores[i];
					lowestIndex = i;
				}
			}
			if (score > lowest)
			{
				scores[lowestIndex] = score;
			}
			//sort the array from highest to lowest
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (scores[i] < scores[j])
					{
						int temp = scores[i];
						scores[i] = scores[j];
						scores[j] = temp;
					}
				}
			}
			//write the array back to the file
			ofstream oFile;
			oFile.open("scores.txt");
			for (int i = 0; i < 10; i++)
			{
				//add the score in
				oFile << scores[i] << endl;
			}
			file.close();
		}
		else
		{
			//add the score and sort the scores
			file.close();
			ofstream oFile;
			oFile.open("scores.txt", ios::app);
			oFile << score << endl;
			oFile.close();
			file.open("scores.txt");
			int scores[10];
			for (int i = 0; i < count + 1; i++)
			{
				file >> scores[i];
			}
			file.close();
			for (int i = 0; i < count + 1; i++)
			{
				for (int j = i + 1; j < count + 1; j++)
				{
					if (scores[i] < scores[j])
					{
						int temp = scores[i];
						scores[i] = scores[j];
						scores[j] = temp;
					}
				}
			}
			oFile.open("scores.txt");
			for (int i = 0; i < count + 1; i++)
			{
				oFile << scores[i] << endl;
			}
		}
	}
}
void DisplayScores()
{
	//check if the file exists
	ifstream file("scores.txt");
	if (!file)
	{
		cout << "no scores yet" << endl;
		return;
	}
	//check if there are any scores
	int count = 0;
	string line;
	while (getline(file, line))
	{
		count++;
	}
	if (count == 0)
	{
		cout << "no scores yet " << endl;
		return;
	}
	//if there are scores, display them
	file.close();
	file.open("scores.txt");
	int scores[10];
	for (int i = 0; i < count; i++)
	{
		file >> scores[i];
	}
	file.close();
	cout << "Top scores: " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << scores[i] << endl;
	}
}

int main()
{
	int playerChoice = 0;
	int playerScore;
	while (playerChoice != 3)
	{
		while (true)
		{
			cout << "choose an option from the menu below" << endl;
			cout << "1. Enter a score" << endl;
			cout << "2. Display the scores" << endl;
			cout << "3. Exit" << endl;
			cin >> playerChoice;
			//if the player choice is invalid inform the user
			if (playerChoice <= 0 || playerChoice > 3)
			{
				cout << "Invalid choice, please try again" << endl;
			}
			else
			{
				break;
			}
		}
		//if the player choice is valid, do the corresponding action
		
		if (playerChoice == 1)
		{
			cout << "Enter your score: " << endl;
			cin >> playerScore;
			AddScore(playerScore);
		}
		else if (playerChoice == 2)
		{
			DisplayScores();
		}
		else if (playerChoice == 3)
		{
			cout << "Goodbye" << endl;
			return 0;
		}
	}
}


