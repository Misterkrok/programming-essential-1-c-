#include <iostream>

using namespace std;

int main()
{
	const int aantalel = 3;
	int lijst[aantalel];
	double totaal =0;

	for (int i = 0; i < aantalel; i++)
	{
		cout << "geef een geheel getal";
		cin >> lijst[i];
		totaal += lijst[i];

	}
	int gemiddeld = totaal / aantalel;
	cout << endl << "het gemiddelde is" << gemiddeld / aantalel;
	for (int i = 0; i < aantalel; i++)
	{
		if (lijst[i] > gemiddeld)
		{
			cout << lijst[i] << " is groter ";
		}
		else if (lijst[i] == gemiddeld)
		{
			cout << lijst[i] << " is gelijk ";
		}
		else
		{
			cout << lijst[i] << " is kleiner ";
		}
		cout << endl;
		
		
		

	}
	
	return 0;
}