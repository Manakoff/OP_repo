#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");


    double number;

    cout << "������� ��������������� �����: ";
    cin >> number;

    cout << number * (-1) << " - ��������������� ����� " << number << endl;
    cout << sqrt(number)  << " - �������� ����� 2-� �������" << endl;
    cout << pow(number, 1 / 5) << " - �������� ����� 5-� �������" << endl;

    return 0;
}