#include <iostream>

using namespace std;

int main()
{
	int gehoogte;
	cout << "geef de hoogte:";
	cin >> gehoogte;
	while (gehoogte <= 3)
	{
		cout << "ongeldig invoer, probeer opnieuw :";
		cin >> gehoogte;
	}
	if (gehoogte > 3 && gehoogte %2 != 0)
	{
		for (int breedte = 0; breedte < gehoogte; breedte++)
		{
			for (int hoogte = 0; hoogte < gehoogte; hoogte++)
			{
				if (hoogte == gehoogte - 1 - breedte || hoogte == breedte)
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
		gehoogte += 1;
		for (int breedte = 0; breedte < gehoogte; breedte++)
		{
			for (int hoogte = 0; hoogte < gehoogte; hoogte++)
			{
				if (hoogte == gehoogte - 1 - breedte || hoogte == breedte)
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