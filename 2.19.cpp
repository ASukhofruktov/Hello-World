// 2.19.cpp: 

#include <iostream>

using std::cout; // ���������� cout
using std::cin; // ���������� cin
using std::endl; // ���������� endl

int main()
{
	setlocale(LC_ALL, "Russian");
	
	// ���� ����������
	int x;
	int y;
	int z;
	int sum;
	int middle;
	int product;
	int Min;
	int Max;

	// ���������� ����������
	cout << " ������� ����� ������ ��� ������ ����� �����: ";
	cin >> x >> y >> z;
	
	sum = x + y + z;
	cout << " ����� �����:\t" << sum << endl;

	middle = (x + y + z) / 3;
	cout << " ��������������������:\t" << middle << endl;
	
	product = x * y * z;
	cout << " ������������ �����:\t" << product << endl;

	// ��������� ����������
	if (x < y)
		Min = x;
	else
		Min = y;
	if (Min > z)
		Min = z;
	cout << " ���������� �����:\t" << Min << endl;

	if (x > y) 
		Max = x;
	else 
		Max = y;
	if (Max < z)
		Max = z;
	cout << " ���������� �����:\t" << Max << endl;
    
	system ("pause"); // �������� ������ �������
	return 0;
}

