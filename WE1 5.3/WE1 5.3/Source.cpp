#include <iostream>

using namespace std;

int main()
{
	int keuze;
	cout << "maak een keuze"<<endl;
	cout << "1 - Coca Cola" << endl << "2 - Fanta" << endl << "3 - Sprite" << endl << "4 - Vittel"<<endl;
	cin >> keuze;
	cout << "uw keuze " << keuze<<endl;
	if (keuze == 1)
	{
		cout << "u koos voor Coca Cola. de prijs is 1,50 euro";
	}
	else
		if (keuze == 2)
		{
			cout << "u koos voorFanta. de prijs is 2 euro";
		}
		else
			if (keuze == 3)
			{
				cout << "u koos voorSprite. de prijs is 1 euro";
			}
			else
				if (keuze == 4)
				{
					cout << "u koos voor Vittel. de prijs is 2,50 euro";
				}
	if (keuze > 4 || keuze <= 0)
	{
		cout << "foute invoer ";
	}
	return 0;
}