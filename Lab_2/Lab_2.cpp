#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	short number, i;

	cout << "Введите число(-128 - 127) и номер бита(0 - 7): " << endl;
	cin >> number >> i;

	if ((-128 <= number && number <= 127) && (0 <= i && i <= 7))
	{
		
		bitset<8> res(number);

		cout << res << endl;

		if (((number >> i) & 1) != 0)
		{

			bitset<8> sym(5);

			cout << sym << endl;

			bitset<8> out(res & sym);
			cout << (number & 5) << " - " << out << endl;

		}

		else
		{

			bitset<8> res_1(~number);
			cout << res_1 << " - " << (~number) << endl;

		}
	}

	else
	{

		cout << "Error" << endl;

	}
	
	int n;
	
	cout << "Введите число(чит-код для игры): ";
	cin >> n;

	
	switch (n)
	{

	case 787898:
		cout << "Код бесмертия включен";
		break;
	case 787891:
		cout << "Код на следующий уровень включен";
		break;
	case 787899:
		cout << "Код что бы летать вкдючен";
		break;
	case 787895:
		cout << "Код что бы стать невидимым вкдючен";
		break;
	case 787893:
		cout << "Код что бы получиь X2 монеты вкдючен";
		break;
	default:
		cout << "Код не найден" << endl;
		break;
	}

	
	return 0;
}
