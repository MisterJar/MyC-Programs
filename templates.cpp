#include <iostream>
using namespace std;

template<typename T>
inline T const& Max (T const& a, T const& b) {
	return a < b ? b:a;
}



int main()
{
	int i = 20;
	int j = 30;

	cout << "Max(i,j): " << Max(i,j) << endl;

	double f1 = 10.3;
	double f2 = 30.4;
	cout << "Max(s1,s2): " << Max(f1,f2) << endl;

	string s1 = "Hello";
	string s2 = "World";
	cout << "Max(s1,s2): " << Max(s1,s2) << endl;

	return 0;
}
