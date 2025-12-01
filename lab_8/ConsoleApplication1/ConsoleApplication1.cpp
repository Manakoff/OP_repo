#include <iostream>
#include <string>

using namespace std;

struct Month 
{
    std::string name;
};

struct Year 
{
    Month winter[3]; 
    Month spring[3]; 
    Month summer[3]; 
    Month autumn[3]; 
};

void swap_months(Month& monthA, Month& monthB);

void print_year(const Year& year);

int main() 
{
    setlocale(LC_ALL, "ru");

    Year year;

    year.winter[0].name = "Дек.";
    year.winter[1].name = "Янв.";
    year.winter[2].name = "Февр.";

    year.spring[0].name = "Март";
    year.spring[1].name = "Апрель";
    year.spring[2].name = "Май";


    year.summer[0].name = "Июнь";
    year.summer[1].name = "Июль";
    year.summer[2].name = "Август";


    year.autumn[0].name = "Сентябрь";
    year.autumn[1].name = "Октябрь";
    year.autumn[2].name = "Ноябрь";

    bool pruv = true;

    while (pruv)
    {
        cout << "0. Выход" << endl << 
            "1. Просмотр элемента" << endl <<
            "2. Создание нового элемента" << endl;

        int punct;
        cout << "Выберете пункт: ";
        cin >> punct;

        switch (punct)
        {
        case 0:
            cout << "До встречи!" << endl;
            pruv = 0;
            break;
        case 1:
            print_year(year);
            break;
        case 2:
            break;

        default:
            cout << "Попробуйте ещё раз!" << endl;
        }

    }
    return 0;
}

void swap_months(Month& monthA, Month& monthB) 
{
    Month swp = monthA;
    monthA = monthB;
    monthB = swp;
}
void find_months(Year& year)
{
    string monthA, monthB;
    cout << "Введите название первого месяца: ";
    cin >> monthA;
    cout << "Введите название второго месяца: ";
    cin >> monthB;


    for (int i = 0; i < 3; ++i)
    {
        if (year.winter[i].name == monthA) 

        if (year.spring[i].name == monthA)

        if (year.summer[i].name == monthA) 

        if (year.autumn[i].name == monthA) 

        if (year.winter[i].name == monthB)

        if (year.spring[i].name == monthB)

        if (year.summer[i].name == monthB)

        if (year.autumn[i].name == monthB)
    }
}

void print_year(const Year& year) 


{
    cout << "Зима: [" << year.winter[0].name << ", " << year.winter[1].name << ", " << year.winter[2].name << "] " << endl << 
    "Весна: [" << year.spring[0].name << ", " << year.spring[1].name << ", " << year.spring[2].name << "] " << endl << 
    "Лето: [" << year.summer[0].name << ", " << year.summer[1].name << ", " << year.summer[2].name << "] " << endl << 
    "Осень: [" << year.autumn[0].name << ", " << year.autumn[1].name << ", " << year.autumn[2].name << "]" << endl;
}