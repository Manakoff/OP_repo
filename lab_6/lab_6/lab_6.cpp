#include <iostream>
#include <stdlib.h>
using namespace std;

void print_m(int** matrix, int& row, int& colume)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < colume; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_m(int* matrix, int& row)
{
    for (int i = 0; i < row; ++i)
    {
            cout << matrix[i] << " ";
    }
    cout << endl;

}

void fun_zupolnenie(int* odn_m, int** matrix, int& row, int& column)
{
    
    int k = 0;
    
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            if (matrix[i][j] == 0) {
                odn_m[k] = i;
                k += 1;
                free(matrix[i]);
                break;
            }
        }
        
        
    }
    
}

int main()
{
    setlocale(LC_ALL, "ru");
    // Задание № 1
    int row = 2;
    int column = 2;

    //Выделение памяти дляя матрицы 2х2
    int** matrix = (int**)calloc(row, sizeof(int*));

    for (int i = 0; i < row; ++i)
    {
        matrix[i] = (int*)calloc(column, sizeof(int));
    }

    print_m(matrix, row, column);

    //Заполнение матрицы
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j)
        {
            int num;
            cin >> num;
            matrix[i][j] = num;
        }
    }

    int A = matrix[0][0]; int B = matrix[0][1]; int C = matrix[1][0]; int D = matrix[1][1];
    if (A < 0 or B < 0)
    {
        cout << "Ошибка попробуйте ещё раз!" << endl;
    }
    else
    {




        row += A;
        column += B;

        matrix = (int**)calloc(row, sizeof(int*));

        for (int i = 0; i < row; ++i)
        {
            matrix[i] = (int*)calloc(column, sizeof(int));

        }

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {

                matrix[i][j] = C * i + D * j;
            }
        }
        print_m(matrix, row, column);
        int k = 0;
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {

                if (matrix[i][j] == 0)
                {
                    k += 1;
                    break;
                }
            }
        }
        int* odn_m = (int*)calloc(k, sizeof(int));
        fun_zupolnenie(odn_m, matrix, row, column);

        print_m(matrix, row, column);
        print_m(odn_m, k);
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

