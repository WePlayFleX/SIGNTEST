#include <iostream>

using namespace std;

int main()
{
	int signedVar = 1500000000;
	unsigned int unsignVar = 1500000000;
	signedVar = (signedVar * 2) / 3;
	unsignVar = (unsignVar * 2) / 3;

	cout << "The signed variable is " << signedVar << endl;
	cout << "The unsigned variable is " << unsignVar << endl;

	system("pause");
	return 0;
}