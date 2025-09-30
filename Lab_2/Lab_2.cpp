#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int number, i;

	cout << "Введите число(-128 - 127) и номер бита(0 - 7): " << endl;
	cin >> number >> i;
	if (((-128) <= number <= 127) && (0 <= i <= 7))
	{
		
		//for(int x = 0; )

	}
	else
		cout << "Error" << endl;


	return 0;
}