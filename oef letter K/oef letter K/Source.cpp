#include <iostream>

using namespace std;

int main()
{
	int aantal;
	cout << "geef de grootte van de letter ";
	cin >> aantal;
	while (aantal < 4)
	{
		cout << " het moet hoger dan 3 zijn . probeer opnieuw ";
		cin >> aantal;
	}
	if (aantal %2 == 0)
	{
		for (int breedte = 0; breedte < aantal+1; breedte++)
		{
			for (int hoogte = 0; hoogte < aantal+1; hoogte++)
			{
				if (hoogte == 0 || hoogte == aantal  - breedte || hoogte == breedte + 1 - (aantal / 2)) // eerste de lijn , aantal /2 is om in het midden te beginnen -breedte is voor diagonaal naar boven/ diagonaal naar beneden 
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else
	{
		for (int breedte = 0; breedte < aantal; breedte++)
		{
			for (int hoogte = 0; hoogte < aantal; hoogte++)
			{
				if (hoogte == 0 || hoogte == aantal  - breedte || hoogte == breedte  - (aantal / 2))
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	
	return 0;
}