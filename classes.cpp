#include <iostream>
#include <cstdlib>
// make classes to make something. like for a game or anything you can
// think about.
using namespace std;
class player {
	public:
		double health;
		double height;
		double power;
};
int main()
{
	double states;
	player player1;

	player1.height = 6;
	player1.health = 100;
	player1.power = 20;
	
	states = player1.power * player1.health * player1.height;
	
	cout << states << endl;
	return 0;
}
