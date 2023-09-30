#include <iostream>

using namespace std;

int menu();
void toonprijzen(int, int, int);
void ingevenprijzen(int&, int&, int& );
double veiligint(double = 0);

int main()
{
	int keuze = menu();
	double b1, b2, b3;
	
	while (keuze != 3)
	{
		switch (keuze)
		{
		case 1: ingevenprijzen(b1, b2, b3);
			break;

		case 2: toonprijzen(b1, b2, b3);
			break;
		}
		keuze = menu();
	}
	return 0;
}
int menu()
{
	int keuze;
	cout << "maak uw keuze :" << endl
		<< "1 ingeven prijs" << endl
		<< "2 raadplegen prijs " << endl
		<< "3 stoppen " << endl;
	cin >> keuze;
	while (keuze < 1 || keuze >3)
	{
		cout << "ongeldige keuzen :";
		cin >> keuze;
	}
	return keuze;
}
void toonprijzen(int b1, int b2, int b3)
{
	cout << "broodje bonanza," << b1 << endl
		<< "broodje  tonijn  pikant" << endl
		<< "prijs brrodje kabsla " << endl;
}
void ingevenprijzen(int& b1, int& b2 , int& b3 )
{
	cout << "geef de prijs in va een broodje bonanza";
	b1 = veiligint();
	cout << " geef de prijs in van een broodje tonijn pikant ";
	b2 = veiligint();
	cout << " geef de prijs in van een broodje krabsla :";
	b3 = veiligint();
}
double  veiligint(double  min )
{
	double getal;
	cin >> getal;
	while (getal < min )
	{
		cout << " foutieve invoer , probeer opnieuw :";
		cin >> getal;
	}
	return getal;
}