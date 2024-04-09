#include <iostream>
#include <string>
using namespace std;

int main()
{
	string N_players;
	int x = 0, a;
	
    cout << "enter the players' current\n";
	getline(cin, N_players);
	/* A zero corresponds to players of one team;
	a one corresponds to players of another team.*/


	a = N_players.length();

	for (int i = 0; i < a; i++)
	{
		if (N_players[i] == N_players[i + 1])
		{
			++x;
	    }
	}
	/*If there are at least 7 players of some team standing one after another,
	then the situation is considered dangerous*/
	if (x >= 7)
	{
		// its dangerous so
		cout << "Yes";
	}
	else
	{
		// its not dangerous so
		cout << "No";
	}
	/*or example, the situation 00100110111111101 is dangerous
	and 11110111011101 is not. */
}