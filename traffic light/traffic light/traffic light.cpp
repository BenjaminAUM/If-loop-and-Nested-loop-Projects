// traffic light
#include <iostream>
using namespace std;

int main()
{
	int speed;
	bool color1, color2, color3, emergency;
	
	cout << "Is it a green light? ";
	cin >> color1;

	cout << "If not Green is it yellow? ";
	cin >> color2;

	cout << "Is it red? ";
	cin >> color3;

	if (color1 == true)
	{
		cout << "Go" << endl;
	}
	else if (color2 == true)
	{
		cout << "How fast is it going? ";
		cin >> speed;
		if (speed > 40)
		{
			cout << "proceed with caution!" << endl;
		}
		else
		{
			cout << "Stop Immediately!" << endl;
		}
	}
	else if (color3 == true)
	{
		cout << "Emergency Vehicle? ";
		cin >> emergency;
		if (emergency == true)
		{
			cout << "Allow Emergency Vehicle" << endl;
		}
		else
		{
			cout << "Stop!" << endl;
		}
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	return 0;
}