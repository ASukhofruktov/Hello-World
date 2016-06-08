// 2.19.cpp: 

#include <iostream>

using std::cout; // Использует cout
using std::cin; // Использует cin
using std::endl; // Использует endl

int main()
{
	setlocale(LC_ALL, "Russian");
	
	// Ввод операторов
	int x;
	int y;
	int z;
	int sum;
	int middle;
	int product;
	int Min;
	int Max;

	// Вычисление переменных
	cout << " Введите через пробел три разных целых числа: ";
	cin >> x >> y >> z;
	
	sum = x + y + z;
	cout << " Сумма чисел:\t" << sum << endl;

	middle = (x + y + z) / 3;
	cout << " Среднеарифметическое:\t" << middle << endl;
	
	product = x * y * z;
	cout << " Произведение чисел:\t" << product << endl;

	// Сравнение переменных
	if (x < y)
		Min = x;
	else
		Min = y;
	if (Min > z)
		Min = z;
	cout << " Наименьшее число:\t" << Min << endl;

	if (x > y) 
		Max = x;
	else 
		Max = y;
	if (Max < z)
		Max = z;
	cout << " Наибольшее число:\t" << Max << endl;
    
	system ("pause"); // Задержка экрана кончоли
	return 0;
}

