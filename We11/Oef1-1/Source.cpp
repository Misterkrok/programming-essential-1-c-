#include <iostream>
#include <string>
using namespace std;

struct Persoon
{
	string naam;
	int leeftijd;
	string favEten;
	string favSport;
	string plaats;
	int getal;
};

Persoon leesPersoon();
void rijmpje(Persoon);

int main()
{
	Persoon p = leesPersoon();
	rijmpje(p);
	return 0;
}

Persoon leesPersoon()
{
	Persoon p;
	cout << "Naam: ";
	cin >> p.naam;
	cout << "Leeftijd: ";
	while (!(cin >> p.leeftijd) || p.leeftijd<0) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Leeftijd mag niet onder 0. Probeer opnieuw: ";
	}
	cin.ignore(INT_MAX, '\n');
	cout << "Favoriet eten: ";
	getline(cin, p.favEten);
	cout << "Favoriete sport: ";
	cin >> p.favSport;
	cout << "Plaats die eindigt met 'ee': ";
	cin >> p.plaats;
	cout << "Favoriet getal: ";
	cin >> p.getal;
	return p;
}

void rijmpje(Persoon p)
{
	string favSportH = p.favSport;
	favSportH[0] = toupper(favSportH[0]);

	cout << p.naam << " is " << p.leeftijd << " jaar oud," << endl;
	cout << favSportH << " is waar hij van houd," << endl;
	cout << "Op een dag kwam hij met het idee," << endl;
	cout << "Om te gaan naar " << p.plaats << "," << endl;
	cout << "Want daar was de " << p.favSport << " wedstrijd," << endl;
	cout << "En daarvoor had hij zijn eten bereid." << endl;
	cout << "Het was " << p.favEten << " om van te smullen." << endl;
	cout << "Hij had genoeg mee om " << p.getal << " magen te vullen." << endl;
}
