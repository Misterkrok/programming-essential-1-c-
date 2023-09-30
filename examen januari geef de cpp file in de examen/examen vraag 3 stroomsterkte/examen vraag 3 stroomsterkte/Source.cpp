#include <iostream>
#include <string>

using namespace std;
void menu();
double berkenstroom(double spanning, double weerstand);

int main()
{
	char keuze;
	double spanning, weerstand, stroom;
	cout << "maak uw keuze";
	cin >> keuze;

	while (keuze != 's')
	{
		switch (keuze)
		{
		case 'a':
			cout << " geef de spanning uitgedrukt in Volt:";
			cin >> spanning;
			cout << "geef de weerstand uitgedrukt in Ohm:";
			cin >> weerstand;
			stroom =berkenstroom(spanning, weerstand);
			cout << " de stroom is:" << stroom << "Ampere" << endl;
			break;
		case 'b':

			break;
		case 's':
			break;
		}
	}
	 menu();
	return 0;
}
void menu()
{
	char keuze;
	cout << "maak uw keuze";
	cin >> keuze;
	if (keuze !='a'+'A' || keuze != 'b'+'B' || keuze != 's'+'S')
	{
		cout << "ongeldige keuze, probeer opnieuw: ";
		cin >> keuze;
	}
	return keuze;
}
double berkenstroom(double spanning, double weerstand)
{
	double stroom;
	stroom = spanning / weerstand;
	return stroom;
}