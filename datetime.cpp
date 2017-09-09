#include <iostream>
#include <ctime>
using namespace std;
/*
 * This is a program which it will show the time of UTC and current time or
 * EST this program also does some pointers if you dont understand please
 * look at the pointers cpp file. thank you
 */
int main()
{
	time_t now = time(0);

	char* dt = ctime(&now);
	cout << "The local time is: " << dt << endl;
	tm *gmtm = gmtime(&now);
	dt= asctime(gmtm);
	cout << "The time is: " << dt << endl;
	return 0;
}
