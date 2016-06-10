// 2.24.cpp: Compare and print even number/odd number 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num;

	cout << "Enter an integer:";
	cin >> num;

	if (num % 2 == 0)
		cout << "Even number: " << num << endl;

	if (num % 2 != 0)
		cout << "Odd number: " << num << endl;


	system("pause");
	return 0;

}

