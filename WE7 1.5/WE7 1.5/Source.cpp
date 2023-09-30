#include <iostream>

using namespace std;

int hogerLager();
void fruitmachine(int& geld);

int main()
{
	int geld = 20;
	int keuze;
	cout << "geef aan welke spel je wilt spelen ";
	cin >> keuze;

	switch (keuze)
	{
	case 1:
		geld += hogerLager();
		
		break;
	case 2:
		fruitmachine(geld);
		break;
	case 3:
		break;
	}
	return 0;
}
int hogerLager()
{
	int geld;
	int spel;
	int num;
	srand(time(0));
	int getal = rand() % 11;
	cout << "geef een nummer:";
	cin >> num;
	if (num == getal)
	{
		cout << "proficiat u hebt het juiste nummer gevonden :";
		geld = 15;
	}
	else
		if (num > getal)
		{
			cout << "foute nummer het was lager ";
			geld = -10;
		}
		else
			if (num < getal)
			{
				cout << "foute nummer het was hoger "<<endl;
				geld = -10;
			}
	return geld;
}
void fruitmachine(int& geld)
{
	
	srand(time(0));
	cout << "handel getrokken ";
	for (int i = 0; i < 3; i++)
	{	
		char letter = rand() % 6 + 'a';
		cout << letter;
	}
	
}
