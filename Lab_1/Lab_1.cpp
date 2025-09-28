#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    setlocale(LC_ALL, "RU");

    int number; // т.к int целочисленный тип данных, не взял unsigned, потопму что в условии не сказано
    cout << "Ввдите целое число: ";
    cin >> number;

    cout << "int - целочисленный тип данных, размер - " << sizeof(number) << " байт" << endl;
    cout << "Минимальное значение: - 2 147 483 648, максимальное: 2 147 483 647" << endl;
    cout << "double - тип данных числа с точкой, размер - " << sizeof(double) << " байт" << endl;
    cout << "Минимальное значение: - 1.7*10^-308, максимальное: 1.7*10^308" << endl;

    int newNumber{ (-1) * number };
    cout << newNumber << " type is int" << endl;

    double sq5Number{ (-1) * pow(abs(number), (0.2)) };
    cout << sq5Number << " type is double" << endl;

    double sq2Number{ sqrt(number) };
    cout << sq2Number << " type is double" << endl;

    /*
    Использовал double потому что чило может получится как целое так и не целое
    */

    return 0;
}
