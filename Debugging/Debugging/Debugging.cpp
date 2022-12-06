#include <iostream>
using namespace std;

int main()
{
    int count = 3;
    //wrong middle statement in for loop
    for (int i = 1; i <= count; i++)
    {
        cout << i;
		//wrong kind of quotation marks
		//wrong kind of equals
		//checking Count instead of I in the IF statement
        if (i == 2)
            cout << " is an even number" << endl;
        else
            cout << " is an odd number" << endl;
    }

    // Pause the output
    cin.get();

    return 0;
}
