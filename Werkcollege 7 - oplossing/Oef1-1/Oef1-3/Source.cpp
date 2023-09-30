#include <iostream>
using namespace std;

void toonPrijs(double, double, double);
void setPrijs(double&, double&, double&);

int main()
{
	int keuze;
	double broodjeBonanza = 0, broodjeTonijnPikant = 0, broodjeKrabsla = 0;
	cout << "Maak uw keuze:" << endl;
	cout << "1. ingeven prijs" << endl;
	cout << "2. raadplegen prijs" << endl;
	cout << "3. stoppen" << endl;
	cin >> keuze;
	while (keuze != 3) {
		if (keuze == 1) {
			setPrijs(broodjeBonanza, broodjeTonijnPikant, broodjeKrabsla);
		}
		else if (keuze == 2) {
			toonPrijs(broodjeBonanza, broodjeTonijnPikant, broodjeKrabsla);
		}
		cout << endl;
		cout << "Maak uw keuze:" << endl;
		cout << "1. ingeven prijs" << endl;
		cout << "2. raadplegen prijs" << endl;
		cout << "3. stoppen" << endl;
		cin >> keuze;
	}
}

//functie met pass by value
void toonPrijs(double bonanza, double tonijnPikant, double krabsla)
{
	cout << "broodje bonanza: " << bonanza << endl;
	cout << "broodje tonijn pikant: " << tonijnPikant << endl;
	cout << "kiwiprijs: " << krabsla << endl;
}

//functie met pass by reference
void setPrijs(double &bonanza, double &tonijnPikant, double &krabsla)
{
	cout << "geef de prijs in van het broodje bonanza: ";
	cin >> bonanza;
	cout << "geef de prijs in van het broodje tonijn pikant: ";
	cin >> tonijnPikant;
	cout << "geef de prijs in van het broodje krabsla: ";
	cin >> krabsla;
}
