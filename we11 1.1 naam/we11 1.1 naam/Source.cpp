#include <iostream>

using namespace std;

struct Persoon
{
	string naam;
	int leeftijd;
	string eten;
	string sport;
	string plaats;
	int getal;
};
Persoon getinfo();
void invoer(Persoon p);

int main()
{
	Persoon p = getinfo();
	invoer(p);
	return 0;
}

Persoon getinfo()
{
	Persoon p;
	cout << "geef de naam";
	cin >> p.naam;
	cin.ignore(INT_MAX, '\n');
	cout << "geef je leeftijd";
	cin >> p.leeftijd;
	while (p.leeftijd < 0)
	{
		cout << "leeftijd mag niet onder 0. probeer opnieuw ";
		cin >> p.leeftijd;
	}
	cout << "Favoriet eten";
	cin >> p.eten;
	cout << "Favoriet sport";
	cin >> p.sport;
	cout << "Plaats die eindigt met 'ee'";
	cin >> p.plaats;
	cout << "Favoriet getal";
	cin >> p.getal;
	return p;
}
void invoer(Persoon p)
{
	cout << p.naam << " is " << p.leeftijd << " jaar oud,"<< endl;
	cout << p.sport << " is waar hij van houd,"<<endl;
	cout << "Op een dag kwam hij met het idee,"<<endl;
	cout << "Om te gaan naar " << p.plaats<<endl;
	cout << "Want daar was de " << p.sport << " wedstrijd," <<endl;
}
