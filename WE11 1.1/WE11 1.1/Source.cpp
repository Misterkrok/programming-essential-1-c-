#include <iostream>
#include<string>

using namespace std;





struct Persoon
{
	string naam;
	int leeftijd;
	int  getal;
	string eten;
	string sport;
	string plaats;
};

void getinfo(Persoon& p);

int main()
{
	Persoon p1 ;
	getinfo(p1);

	return 0;
}

void getinfo(Persoon& p)
{
	cout << "naam";
	cin >> p.naam;
	cout << "leeftijd:";
	while (!(cin >> p.leeftijd)|| p.leeftijd<0)
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Leeftijd mag niet onder 0. probeer opnieuw: ";
	}
	cin.ignore(INT_MAX, '\n');
	cout << "favoriete eten: ";
	getline(cin, p.eten);
	cout << "Favoriete sport: ";
	cin >> p.sport;
	cout << "Plaats die eindigt met 'ee': ";
	cin >> p.plaats;
	cout << "Favoriet getal: ";
	cin >> p.getal;
	
}