#include<iostream>

using namespace std;


int main()
{
	setlocale(0, "RU");
	int a, b, c;
	cout << "������� ������ �����" << endl;
	cout << "����: ";
	cin >> a;
	cout << "������� ������ �����" << endl;
	cout << "����: ";
	cin >> b;
	cout << "�������� ����� ��� ������� ��������� ����" << endl
		<< "1. +" << endl
		<< "2. -" << endl
		<< "3. *" << endl
		<< "4. /" << endl;
	cout << "����: ";
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "���������: " << a + b << endl;
		break;
	case 2:
		cout << "���������: " << a - b << endl;
		break;
	case 3:
		cout << "���������: " << a * b << endl;
		break;
	case 4:
		cout << "���������: " << a / b << endl;
		break;
	default:
		cout << "���-�� ����� �� ���";
		return 0;
	}
	system("pause");
}




