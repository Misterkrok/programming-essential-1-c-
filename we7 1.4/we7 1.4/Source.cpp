#include <iostream>

using namespace std;

void leesin(int&);
void leesin2(int*);
int berekeninhoud(int, int, int);
int main()
{
	int l, h, d;
	cout << "geef de lengte:";
	leesin(l);
	cout << "geef de hoogte:";
	leesin2(&h);
	cout << "geef de diepte:";
	leesin(d);
	cout << "de inhoud van de " << berekeninhoud(l, h, d) << "c^m^3";
	return 0;
}
void leesin(int& var)
{
	cin >> var;
	while (var <=0)
	{
		cout << "foutieve invoer ";
		cin >> var;
	}
}
void leesin2(int* var)
{
	cin >> *var;
	while (var <= 0)
	{
		cout << "foutieve invoer ";
		cin >> *var;
	}
}
int berekeninhoud(int l, int h, int d)
{
	return l * h * d;
}