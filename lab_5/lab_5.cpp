#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int fun(int number);
int fun(int number_1, int number_2, int number_3);
void lab_1(int number);

int main()
{
	cout << "Введите пункт который хотите опробовать: " << endl;
	short pr;
	cin >> pr;

	if (pr == 1)
	{
		cout << "Введите число: " << endl;
		int number;
		cin >> number;

		int res = fun(number);

		cout << res << endl;

	}
	else if (pr == 2)
	{
		cout << "Введите три числа: " << endl;
		int num_1, num_2, num_3;
		cin >> num_1 >> num_2 >> num_3;

		int res = fun(num_1, num_2, num_3);

		cout << res << endl;

	}
	else
	{
		int number;
		cout << "Ввдите целое число: ";
		cin >> number;

		lab_1(number);
	}

}

int fun(int number)
{
	cout << "Функция для поиска ближайшого числа кратного 5" << endl;
	return round(number / 5) * 5;

}
int fun(int number_1, int number_2, int number_3)
{
	cout << "Функция для нахождения суммы максимального и минимального числа  " << endl;
	int masiv[] = { number_1, number_2, number_3 };
	std::sort(masiv, masiv + 3);

	if (masiv[0] != 0)
	{
		return (masiv[0] + masiv[2]);
	}
	else if (masiv[1] != 0)
	{
		return (masiv[1] + masiv[2]);
	}
	else
		return (masiv[2] * 2);

}

void lab_1(int number)
{
	cout << "int - целочисленный тип данных, размер - " << sizeof(number) * 8 << " бит" << endl;
	cout << "double - тип данных числа с точкой, размер - " << sizeof(double) * 8 << " бит" << endl;


	int newNumber{ (-1) * number };
	cout << newNumber << " type is int" << endl;

	double sq5Number{ (number / abs(number)) * pow(abs(number), (0.2)) };
	cout << sq5Number << " type is double" << endl;

	double sq2Number{ sqrt(number) };
	cout << sq2Number << " type is double" << endl;
}