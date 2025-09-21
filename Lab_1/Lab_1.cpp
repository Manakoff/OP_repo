#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");


    double number;

    cout << "Введите неотрицательное число:: ";
    cin >> number;

    cout << number * (-1) << " - противоположное числу " << number << endl;
    cout << sqrt(number)  << " - значение корня 2-й степени " << endl;
    cout << pow(number, 1 / 5) << " - значение корня 5-й степени " << endl;

    return 0;
}