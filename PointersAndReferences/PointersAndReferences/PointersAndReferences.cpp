

#include <iostream>

using namespace std;

void InputDetails(int* n1, int* n2)
{
	cout << "Enter two numbers: ";
	cin >> *n1 >> *n2;
}
void OutputDetails(int& int1, int& int2, int* pn)
{
	// output the numbers addresses and values
	cout << "n1 = " << int1 << " at " << &int1 << endl;
	cout << "n2 = " << int2 << " at " << &int2 << endl;
	//output pn's value and dereferenced value and address
	cout << "pn = " << *pn << " at " << pn << endl;
	
}
int main()
{
	int* num1 = new int;
	int* num2 = new int;
	InputDetails(num1, num2);
	int* pnum = num1;
	OutputDetails(*num1, *num2, pnum);
}



