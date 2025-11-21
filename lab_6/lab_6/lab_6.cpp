#include <iostream>
#include <stdlib.h>
using namespace std;

void print_m(int** &matrix, int& row, int& colume)
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

void print_m(int* &matrix, int& row)
{
    cout << "Одномерный массив с индексами столбцов." << endl;
    for (int i = 0; i < row; ++i)
    {
            cout << matrix[i] << " ";
    }
    cout << endl;

}

void fun_zupolnenie(int* &odn_m, int** &matrix, int& row, int& column)
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
    int count_1 = 0;
    int count_2 = 0;
    for (int i = 0; i < (row); ++i)
    {
        if (i == odn_m[count_1])
        {
            count_1 += 1;
        }
        else
        {
            matrix[count_2] = matrix[i];
            count_2 += 1;
        }
    }
    matrix = (int**)realloc(matrix, sizeof(int*) * (row - k));
    row -= k;
    
}

int main()
{
    setlocale(LC_ALL, "ru");
    // Задание № 1
    int row = 2;
    int column = 2;

    //Выделение памяти для матрицы 2х2
    int** matrix = (int**)malloc(row*sizeof(int*));

    for (int i = 0; i < row; ++i)
    {
        matrix[i] = (int*)calloc(column, sizeof(int));
    }


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

        matrix = (int**)realloc(matrix, sizeof(int*)*row);

        for (int i = 0; i < row; ++i)
        {
            matrix[i] = (int*)malloc(column*sizeof(int));

        }

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {

                matrix[i][j] = C * i + D * j;
            }
        }
        matrix[row - 2][column - 2] = A; matrix[row - 2][column - 1] = B; matrix[row - 1][column - 2] = C; matrix[row - 1][column - 1] = D;

        cout << "Начальная матрица" << endl;
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

        cout << "Изменённая матрица" << endl;
        print_m(matrix, row, column);
        print_m(odn_m, k);

        for (int i = 0; i < row-k; ++i)
        {
            free(matrix[i]);
            matrix[i] = nullptr;
        }
        free(matrix);
        matrix = nullptr;
        free(odn_m);
        matrix = nullptr;
        cout << "Очистка памяти" << endl;
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

