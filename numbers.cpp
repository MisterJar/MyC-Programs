#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int y, x;

	srand((unsigned)time(NULL));

	for (x = 0; x< 200000; x++)
	{
		y = rand();
		cout <<"numbers : " << y << endl;
	}

	return 0;
}
