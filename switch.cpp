#include <iostream>
using namespace std;
// this program is going to be a switch case program. so yea.
int main()
{
	char grades;
	cin >> grades;

	switch (grades) {
		case 'A':
			cout << "上手になった！" << endl;
			break;
		case 'B':
		case 'C':
			cout << "バーか！死んでいる！" << endl;
			break;
		case 'D':
			cout << "君は見えただろう！" << endl;
			break;
		case 'F':
			cout << "死ぬ。死ぬだけだろう！" << endl;
		break;
	}
	cout << "your grade is " << grades << endl;
	return 0;

}
