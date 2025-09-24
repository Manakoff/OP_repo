#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    setlocale(LC_ALL, "RU");


    int number; // т.к int целочисленный тип данных, не взял unsigned, потопму что в условии не сказано
    cout << "int - целочисленный тип данных, размер - " << sizeof(number) << " байт" << endl;
    cout << "Минимальное значение: - 2 147 483 648, максимальное: 2 147 483 647" << endl;
    cout << "double - тип данных числа с точкой, размер - " << sizeof(double) << " байт" << endl;
    cout << "Минимальное значение: - 1.7*10^-308, максимальное: 1.7*10^308" << endl;
    int k{ 1 };
    /*
     Взял цикл для того, чтобы пользователь мог ввести положительное число
    */
    while (k != 0)
    {
        cout << "Введите целое число: ";
        cin >> number;
        int protNumber = number * (-1) ;

        cout << protNumber << " - противоположное числу, type - int " << number << endl;
        if (number >= 0)
        {
            double sq_2 = sqrt(number); // т.к может быть и не целое
            double sq_5 = pow(number, 0.2);

            cout << sq_2 << " - значение корня 2-й степени, type - double" << endl;
            cout << sq_5 << " - значение корня 5-й степени, type - double" << endl;
            k = 0;
        }
        else
        {
            cout << "Число отрицательное" << endl;
        }

    }
    return 0;
}
