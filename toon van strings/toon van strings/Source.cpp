#include <iostream>
#include <string>

using namespace std;

struct Persoon
{
	string naam;
	int leeftijd;
	double gewicht;
	// als void hier staat hefft u zijn eigen gegevens en om die te roepen moet je lijst[i].printPersoon()
};

void printPersoon(Persoon p);
Persoon leesPersoon();

int main()
{
	
	Persoon p1 = { "jos",30,70.5 };
	cout << p1.naam;
	
	cout << p1.naam.length();
	return 0;
}
void printPersoon(Persoon p)
{
	cout << "naam" << p.naam << endl;
	cout << " leeftijd" << p.leeftijd << endl;
	cout << "gewicht" << p.gewicht << endl;
}
Persoon leesPersoon()
{
	Persoon p;
	cout << "geef mij een naam:";
	getline(cin, p.naam);
	cout << "geef mij een leeftijd:";
	cin >> p.leeftijd;
	cout << "geef mij een gewicht :";
	cin >> p.gewicht;
	cin.ignore(INT_MAX, '\n');
	return p;
}