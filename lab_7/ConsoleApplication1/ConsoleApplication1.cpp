#include <iostream>
#include <iterator>
#include <array>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;


void bubble_sort_s(std::array<int, 10>& massive);
void bubble_sort_u(std::array<int, 10>* massive);
void bubble_sort(std::array<int, 10> massive);
void look_m(const std::vector<int>& massive);
void look_m(const std::array<int, 10>& massive);
void elem_search(const std::vector<int>& massive, int &num);
void punkt6_m(std::vector<int>& massive, int& minimum, int& maximum);


int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Добро пожаловать в лабу №7!" << endl <<
		"Выбирете пункт 1 или 2: " << endl;

	int punct;
	cin >> punct;

	if (punct == 1)
	{
		bool pruv = true;

		std::vector<int> massive = { 1, 2, 3, 2 };
		std::vector<int> massive_nach = massive;
		int minimum = 100'000'000;
		int maximum = -100'000'000;

		while (pruv)
		{
			std::cout << "Выберите пункт: " << endl <<
				"0. Выход." << endl <<
				"1. Просмотр массива." << endl <<
				"2. Добавить элемент в начало." << endl <<
				"3. Добавить элемент в конец." << endl <<
				"4. Очистка всего массива." << endl <<
				"5. Поиск элемента в массиве." << endl <<
				"6. Задание варианта №8" << endl << endl;

			short punct;
			std::cin >> punct;
			std::cout << "-------------------------" << endl;

			switch (punct)
			{

			case 0:
				pruv = false;
				std::cout << "До скорой встречи!" << endl;
				break;

			case 1:
				look_m(massive);
				break;

			case 2:
				std::cout << "Введите элемент, который хотите добавить: ";
				int num_1;
				cin >> num_1;
				massive.insert(massive.begin(), num_1);
				break;

			case 3:
				std::cout << "Введите элемент, который хотите добавить: " << endl;
				int num_2;
				cin >> num_2;
				massive.reserve(((massive.size()) + 1));
				massive.push_back(num_2);
				break;

			case 4:
				massive.clear();
				break;

			case 5:
				std::cout << "Введите элемент, который хотите найти: " << endl;
				int num_3;
				cin >> num_3;
				elem_search(massive, num_3);
				break;

			case 6:
				punkt6_m(massive, minimum, maximum);
				if (abs(maximum - minimum) <= 2)
				{
					massive.reserve(((massive.size()) + 2));
					massive.push_back(0);
					massive.insert(massive.begin(), 0);
				}
				else
				{
					massive.reserve(((massive.size()) + 1));
					massive.push_back(0);
				}
				break;

			default:
				std::cout << "Неверно попробуйте ещё раз!" << endl;
				std::cout << "-------------------------" << endl;
				break;

			}


		}

		std::cout << "Массив до: " << endl;
		look_m(massive_nach);
		std::cout << endl;

		std::cout << "Массив после: " << endl;
		look_m(massive);
		std::cout << endl;

		std::cout << "-------------------------" << endl;
	}
	else
	{
		std::array<int, 10> massive = {};
		
		for (int i = 0; i < 10; ++i)
		{
			massive[i] = (rand() % 20 + 1) - 10;
		}

		std::cout << "Выберите пункт: " << endl <<
			"0.функцию по значению" << endl <<
			"1.функцию по ссылке" << endl <<
			"2.функцию по указателю" << endl << 
			"-----------------------" << endl;
		int punct;
		cin >> punct;
		switch(punct)
		{
		case 0:
			bubble_sort(massive);
			break;
		case 1:
			bubble_sort_s(massive);
			break;
		case 2:
			bubble_sort_u(&massive);
			break;
		default:
			break;
		}

		look_m(massive);

	}
	return 0;
}

//--------------------------------------------------------------
void bubble_sort_s(std::array<int, 10>& massive)
{
	bool sw;
	for (int i = 0; i < 10; ++i)
	{
		sw = false;
		for (int j = 0; j < 9 - i; ++j)
		{
			if (massive[j] > massive[j + 1])
			{
				std::swap(massive[j], massive[j + 1]);
				sw = true;
			}
		}
		if (!sw)
		{
			break;
		}
	}
}
void bubble_sort_u(std::array<int, 10>* massive)
{
	bool sw;
	for (int i = 0; i < 10; ++i)
	{
		sw = false;
		for (int j = 0; j < 9 - i; ++j)
		{
			if (massive[j] > massive[j + 1])
			{
				std::swap(massive[j], massive[j + 1]);
				sw = true;
			}
		}
		if (!sw)
		{
			break;
		}
	}
}
void bubble_sort(std::array<int, 10> massive)
{
	bool sw;
	for (int i = 0; i < 10; ++i)
	{
		sw = false;
		for (int j = 0; j < 9 - i; ++j)
		{
			if (massive[j] > massive[j + 1])
			{
				std::swap(massive[j], massive[j + 1]);
				sw = true;
			}
		}
		if (!sw)
		{
			break;
		}
	}
}
void look_m(const std::vector<int>& massive)
{
	std::cout << "[ ";
	for (const auto& element : massive)
		std::cout << element << ' ';
	std::cout << "]" << endl;
}
void look_m(const std::array<int, 10>& massive)
{
	std::cout << "[ ";
	for (const auto& element : massive)
		std::cout << element << ' ';
	std::cout << "]" << endl;
}

void elem_search(const std::vector<int>& massive, int &num)
{
	std::cout << "[";
	int length = massive.size();
	short k = 0;
	for (int i = 0; i < length; ++i) 
	{
		if (massive[i] == num)
		{
			if (k == 0)
			{
		        std::cout << i;
			}
			else
			{
				std::cout << ',' << i;
			}
			k += 1;
		}
	}
	std::cout << "]" << endl;
}


void punkt6_m(std::vector<int>& massive, int& minimum, int& maximum)
{
	for (const auto& element : massive)
	{
		if (element < minimum)
		{
			minimum = element;
		}
		else if (element > maximum)
		{
			maximum = element;
		}
	}
}
