//файл calc.cpp 
#include "stdafx.h" 
#include "func.h" 
#include <iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int c;
	double x, y;

	cout << "Введите X" << endl;
	cin >> x;
	cout << "Введите Y" << endl;
	cin >> y;
	cout << "1:Сумма 2:Вычитание 3:Умножение 4:Деление" << endl;
	cin >> c;
	system("pause");
	return 0;
}