#include <iostream>
using namespace std;

int veiligeInt();

int main()
{
	const int AANTAL = 10;
	int a[AANTAL] = { 4, 8, 2, 0, 3, 3, 7, 99, 3, 12 };
	//int b[10] = { 0 };
	cout << "Geef het te zoeken getal: ";
	int teZoeken = veiligeInt();
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	int aantal = 0;
	for (int i = 0; i < AANTAL - aantal; i++)
	{
		if (a[i] == teZoeken)
		{
			for (int j = i; j < AANTAL - 1; j++)
			{
				a[j] = a[j + 1];
			}

			aantal++;
			a[AANTAL - 1] = 0;
			i--;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

int veiligeInt()
{
	int a;
	while (!(cin >> a))
	{
		cout << "Foute invoer, probeer opnieuw !";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
	return a;
}
