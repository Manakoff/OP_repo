#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RU");
    // ЗАДАНИЕ № 1
    short n;
    cout << "Введите кол-во элементов: ";
    cin >> n;

    int maximum = -1000000, sum = 0, k = 0;

    for (short i = 1; i <= n; i++)
    {
        int number;
        cout << "Введите число: ";
        cin >> number;

        if (abs(number) % 10 == 2)
        {
            sum += number;
            if (number > maximum)
            {
                maximum = number;
                k = i;
            }
        }
    }
    if (k > 0)
        cout << "Сумма: " << sum << " Позиция максимального числа: " << k << " Максимальное число: " << maximum << endl;
    else
        cout << "В вашей последовательности нет чисел подходящие под условие!" << endl;



    // ЗАДАНИЕ № 2 

    cout << "Введите число |x| < 1000: ";
    short x;
    cin >> x;
    bool pr = true;

    if (x < 0)
        pr = false;

    if (x > -10 && x < 10)
    {
        cout << x << " зеркальное числу " << x;
    }
    else
    {
        short b = x;
        short res = 0;
        while (x != 0)
        {
            res = res * 10 + x % 10;
            x /= 10;
        }

        if (pr)
        {
            cout << res << " зеркальное числу " << b << endl;
        }

        else
        {
            cout << (res * (-1)) << " зеркальное числу " << b << endl;
        }
    }

}




