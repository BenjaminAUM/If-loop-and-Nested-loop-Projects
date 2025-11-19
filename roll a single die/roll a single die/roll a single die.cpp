// roll a single die
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	int dice_roll = rand() % 6 +1;

	if (dice_roll == 6)
	{
		int dice_roll2 = rand() % 6 + 1;
		cout << "You rolled a " << dice_roll << " Please re-roll" << endl;
		cout << "You re-rolled and got: " << dice_roll2 << endl;
		return 0;
	}
	else
	{
		cout << "You rolled a: " << dice_roll << endl;
	}
	return 0;
}