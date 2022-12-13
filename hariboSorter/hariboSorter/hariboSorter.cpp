
#include <iostream>

int startingHariboAmount = 40;
int students = 14;

int main()
{
   
    int hariboPerStudent = startingHariboAmount / students;
    int hariboLeftOver = startingHariboAmount % students;
	std::cout << "Each student gets " << hariboPerStudent << " Haribo and there are " << hariboLeftOver << " Haribo left over." << std::endl;
}


