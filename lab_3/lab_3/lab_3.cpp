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

    int maximum = pow(-2, 31), sum = 0, k = 0;

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

    short pruv = 1, b = x;
    if (x < 0)
    {
        pruv = (-1);
    }
    
    short res = 0;
    while (x != 0)
    {
        res = res * 10 + abs(x % 10);
        x /= 10;
    }
    
    cout << (pruv*res) << " зеркальное числу " << b << endl;
    

}
