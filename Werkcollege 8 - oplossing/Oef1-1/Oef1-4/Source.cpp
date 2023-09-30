#include <iostream>
using namespace std;

int main()
{
	const int MAX = 5;
	int get[MAX], i, min = INT_MAX;
	cout << "Geef " << MAX << " getallen:" << endl;
	cout << "********************" << endl;
	for (i = 0; i<MAX; i++)
	{
		cout << "Getal " << i + 1 << ": ";
		cin >> get[i];
		if (get[i] < min) min = get[i];
	}
	cout << endl << "Gewijzigde getallen:" << endl;
	cout << "********************" << endl;
	for (i = 0; i<MAX; i++)
	{
		cout << "Getal " << i + 1 << ": " << get[i] - min << endl;
	}
	cout << endl << "Kleinste getal = " << min << endl;
}
