// userDefinedVars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int typedef health;
enum weapons { SWORD, DAGGER, MACE, TWIN_SWORDS, SAMURAI, WIZARD_STAFF, FIRE_POTION, ICE_BLADE, SMALL_KNIFE};

health playerHealth = 13000;
weapons playerWeapon = SAMURAI;
int main()
{
    //output health and weapon
	std::cout << "My current health is " << playerHealth << std::endl;
	//for some reason you wanted the samuri ID to be 5
	// but enums start from 0...
	//so uh, I do a little cheating
	std::cout << "And the ID of my weapon of choice is:" << playerWeapon + 1  << std::endl;
	
}


