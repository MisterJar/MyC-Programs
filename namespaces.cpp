#include <iostream>
using namespace std;

namespace func{
	void nFunc(){
		cout << "inside first namespace\n";
	}
}
namespace func2{
	void nFunc2(){
		cout << "Inside second namespace\n";
	}
}

int main()
{
	func::nFunc();
	func2::nFunc2();

	return 0;
}
