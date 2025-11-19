// Days of the week cycle
#include <iostream>
using namespace std;

int main()
{
	int start_index;
	int offset;

	cout << "Enter start day index (1=Mon ... 7=Sun): ";     //user input what day it currently is
	cin >> start_index;

	cout << "Enter how many days to move forward (>=0): ";   //user input how many days to skip
	cin >> offset;

	if ((start_index < 1 || start_index > 7) || (offset <= 0))   //validate user input
	{
		cout << "Invalid input" << endl;
		return 0;
	}

	int new_index = (start_index + offset) % 7 + 1;    //calculate what day it is

	if (new_index == 1)
	{
		cout << "Today is Monday" << endl;
	}
	else if (new_index == 2)
	{
		cout << "Today is Tuesday" << endl;
	}
	else if (new_index == 3)
	{
		cout << "Today is Wednesday" << endl;
	}
	else if (new_index == 4)
	{
		cout << "Today is Thursday" << endl;
	}
	else if (new_index == 5)
	{
		cout << "Today is Friday" << endl;
	}
	else if (new_index == 6)
	{
		cout << "Today is Saturday" << endl;
	}
	else
	{
		cout << "Today is Sunday" << endl;
	}
	return 0;
}