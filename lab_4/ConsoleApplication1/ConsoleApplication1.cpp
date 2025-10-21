#include <iostream>
#include <algorithm>

using namespace std;

// ЗАДАНИЕ №1
/*
int main()
{
	setlocale(LC_ALL, "RU");

	int masiv[11];
	
	for (int i = 0; i < 11; ++i)
	{
		int x;
		cin >> x;
		masiv[i] = x;
	}
	
	if ((masiv[0] + masiv[1] + masiv[2]) > 100) 
	{
		for (int i = 0; i < 10; ++i)
		{
			int small_i = i;
			for (int j = i + 1; j < 11; ++j)
			{
				if (masiv[j] < masiv[i])
					small_i = j;

			}
			std::swap(masiv[i], masiv[small_i]);
		}
	}
	for (int i : masiv)
	{
		cout << i << " ";
	}
}
*/

//зАДАНИЕ №2
int main()
{
	setlocale(LC_ALL, "RU");

	int matrix[3][4];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			int num;
			cin >> num;
			matrix[i][j] = num;

		}
	}

	int max_sum = 0;
	int stolb = 0;
	
	for (int j = 0; j < 4; ++j)
	{
		int sum = 0;

		for (int i = 0; i < 3; ++i)
		{
			if (matrix[i][j] < 0)
			{
				sum += abs(matrix[i][j]);
			}
		}
		if (sum > max_sum)
		{
			max_sum = sum;
			stolb = j;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		matrix[i][stolb] = 0;
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

