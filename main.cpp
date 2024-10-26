#include<iostream>

using namespace std;


int main()
{
	setlocale(0, "RU");
	int a, b, c;
	cout << "Введите первое число" << endl;
	cout << "Ввод: ";
	cin >> a;
	cout << "Введите второе число" << endl;
	cout << "Ввод: ";
	cin >> b;
	cout << "Выберите число под которым находится знак" << endl
		<< "1. +" << endl
		<< "2. -" << endl
		<< "3. *" << endl
		<< "4. /" << endl;
	cout << "Ввод: ";
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "Результат: " << a + b << endl;
		break;
	case 2:
		cout << "Результат: " << a - b << endl;
		break;
	case 3:
		cout << "Результат: " << a * b << endl;
		break;
	case 4:
		cout << "Результат: " << a / b << endl;
		break;
	default:
		cout << "Что-то пошло не так";
		return 0;
	}
	system("pause");
}




