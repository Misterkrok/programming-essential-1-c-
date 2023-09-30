#include <iostream>
#include <string>

using namespace std;

bool operator>(Persoon p1, Persoon p2)// kunnen zeggen om 2 dingens te vergelijken (operator 
{

	return p1.leeftijd > p2.leeftijd;
}
int main()
{
	Persoon p1 = { "jos",30,70 }, p2 = { "jan",40,80 };
	if (p1.leeftijd> p2.leeftijd)
	{
		cout << p1.leeftijd << "winaar";
	}
	else
	{
		cout << p2.leeftijd << "winaar";
	}
	return 0;
}