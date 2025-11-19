#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    // Задание № 1

    void *matrix_1 = malloc(sizeof(int) * 4);

    for (int i = 0; i < 4; ++i)
    {
        int n;
        cin >> n;
        matrix_1[i] = n;
    }

    // Задание № 2
    cout << "Введите целое число a и b: ";
    int a, b;
    cin >> a >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    int* ptr_obmen = new int;

    *ptr_obmen = *ptr_b;

    *ptr_b = *ptr_a * 2;
    *ptr_a = *ptr_obmen;
    delete ptr_obmen;
    ptr_obmen = 0;

    cout << a  << " " << b;
    

    return 0;
}

