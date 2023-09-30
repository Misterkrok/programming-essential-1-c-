#include <iostream>

using namespace std;

int main()
{
	int gehoogte, gebreefte, gediepte;
	cout << " hoogte van de balk ";
	cin >> gehoogte;
	cout << " breedte van de balk";
	cin >> gebreefte;
	cout << "diepte van de balk";
	cin >> gediepte;

	for (int diepte = gediepte-1; diepte > 0; diepte--)
	{
		for (int i = gediepte; i > 0; i--)
		{
			cout << "-";
		}
		for (int j = 0; j < gebreefte; j++)
		{
			cout << "o";
		}
		for (int i = gediepte; i < gediepte-1; i++)
		{
			cout << "E";
		}
		cout << endl;
	}

	for (int hoogte = 0; hoogte < gehoogte; hoogte++)
	{
		for (int breedte = 0; breedte < gebreefte; breedte++)
		{
			cout << "*";
		}
		cout << " " << endl;

	}
	return 0;
}