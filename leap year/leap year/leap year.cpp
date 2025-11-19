// leap year
#include <iostream>
using namespace std;

int main()
{
	int year;

	cout << "Enter a year: "; //asks for user input
	cin >> year;

	if (year <= 0) //check if year is valid
	{
		cout << "Error" << endl;
		return 0;
	}
	else if (year % 400 == 0 || year % 4 && !100 == 0) //apply leap year rule
	{
		cout << "Leap year" << endl;
	}
	else
	{
		cout << "Not a Leap year" << endl;
	}
	return 0;

}