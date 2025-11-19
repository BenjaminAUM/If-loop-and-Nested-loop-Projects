// Cycling turns in games
#include <iostream>
using namespace std;

int main()
{
	int players;             // total number of players (n)
	int turn;                //which turn number (1, 2, 3, ...)

	cout << "Enter number of players (>=1): ";
	cin >> players;

	cout << "Enter current turn number (>=1): ";
	cin >> turn;

	if (players < 1 || turn < 1)
	{
		cout << "Invalid input" << endl;
		return 0;
	}

	int current_player = ((turn - 1) % players) + 1;

	cout << "Player " << current_player << "'s turn" << endl;
	return 0;
}