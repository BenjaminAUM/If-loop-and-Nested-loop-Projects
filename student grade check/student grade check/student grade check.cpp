// student grade check
#include <iostream>
using namespace std;

int main()
{
	int marks;

	cout << "Student's current marks? ";
	cin >> marks;

	if (marks >= 60)
	{
		if (marks >= 70)
		{
			if (marks >= 80)
			{
				if (marks >= 90)
				{
					cout << "Grade A" << endl;
				}
				else
				{
					cout << "Grade B" << endl;
				}
			}
			else
			{
				cout << "Grade C" << endl;
			}
		}
		else
		{
			cout << "Grade D" << endl;
		}
	}
	else
	{
		cout << "Grade F " << endl;
	}
}