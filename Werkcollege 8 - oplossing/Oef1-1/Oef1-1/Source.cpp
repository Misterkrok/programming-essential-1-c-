#include <iostream>
#include <array>
using namespace std;

int veiligeInt();

int main()
{
	const int MAX = 10;
	int rij[MAX];
	//gegevens inlezen
	for (int i = 0; i<MAX; i++) {
		cout << "Geef getal " << i + 1 << ": ";
		rij[i] = veiligeInt();
	}
	//som berekenen
	int som = 0;
	for (int i = 0; i<MAX; i++) {
		som += rij[i];
	}
	//gemiddelde berekenen
	float gem = som * 1.0 / MAX;
	//uitvoer	
	for (int i = 0; i<MAX; i++) {
		if (rij[i] < gem) {
			cout << rij[i] << " < " << gem << endl;
		}
		else if (rij[i] > gem) {
			cout << rij[i] << " > " << gem << endl;
		}
		else {
			cout << rij[i] << " == " << gem << endl;
		}
	}
	return 0;
}

int veiligeInt()
{
	int a;
	while (!(cin >> a)) {
		cout << "Foute invoer, probeer opnieuw !";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
	return a;
}