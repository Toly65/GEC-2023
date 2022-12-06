
#include <iostream>

int main()
{
	int chosenOption;
	std::cout << "Choose your difficulty: \n 1. I'm too young to die \n 2. Hey, not too rough \n 3. Hurt me plenty \n 4. Ultra-Violence \n 5. NIGHTMARE! \n";
	std::cin >> chosenOption;
	switch (chosenOption)
	{
	case 1:
		std::cout << "candy for all";
		break;
	case 2:
		std::cout << "they might be a little tougher";
		break;

	case 3:
		std::cout << "they're gonna be a little tougher";
		break;
	case 4:
		std::cout << "they will shoot back";
		break;
	case 5:
		std::cout << "you like pain, don't you?";
		break;
	default:
		std::cout << "inavlid input";
		break;
	}
	//I would put this switch statement in a loop but the task doesn't ask for it
}

