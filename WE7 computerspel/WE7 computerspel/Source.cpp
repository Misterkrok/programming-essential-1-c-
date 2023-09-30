#include <iostream>

using namespace std;

void leesSpelerGegevens(int& hp, int& kracht, int& snelheid, int& geluk);
void leesSpelerGegevens(int& hp, int& kracht, int& snelheid);

int main()
{
	srand(time(0));
	int hp, kracht, snelheid, geluk, geld = 0,keuze,geldr,hpres;
	leesSpelerGegevens(hp, kracht, snelheid, geluk);
	cout << geld;
	leesSpelerGegevens(hp, kracht, snelheid);
	cout << " maak uw keuze " << endl << "1 op pad gaan " << endl << "2 rusten";
	cin >> keuze;
	if (keuze == 1)
	{
		int pnt;
		int pad =rand() % 4;
		if (pad == 0)
		{
			cout << "je hebt geluk je mag 1 van je gegevens verhogen "
				<< " welke gegeven wil je verhogen ?"<<endl;
			cout << "1 hp" << endl << "2 kracht" << endl << "3 snelheid" << endl << "4 geluk ";
			cin >> pnt;
			switch (pnt)
			{
			case 1:
				cout << hp<<endl;
				hp += 1;
				cout << hp;
				break;
			case 2:
				cout << kracht << endl;
				kracht += 1;
				cout << kracht;
				break;
			case 3:
				cout << snelheid << endl;
				snelheid += 1;
				cout << snelheid;
				break;
			case 4:
				cout << geluk << endl;
				geluk += 1;
				cout << geluk;
				break;
			}
			
		}
		if (pad == 1)
		{
			geldr = rand() % 6;
			geld += geldr;
		}
		if (pad == 2)
		{
			hpres = hp;
			
			hpres -= 
		}
	}
	
	return 0;
}
void leesSpelerGegevens(int& hp,int&kracht,int&snelheid,int&geluk)
{
	int punten = 20;
	cout << "zet je punten op jouw gegevens :" << endl;
	cout << "hp";
	cin >> hp;
	punten -= hp;
	cout << "punten " << punten << endl;
	cout << "kracht";
	cin >> kracht ;
	punten -= kracht;
	cout <<"punten "<< punten << endl;
	cout << "snelheid";
	cin >> snelheid;
	punten -= snelheid;
	cout << "punten " << punten << endl;
	cout << "geluk";
	cin >> geluk;
	punten -= geluk;
	cout << "punten " << punten << endl;
}
void leesSpelerGegevens(int& hp, int& kracht, int& snelheid)
{
	
	for (int monster = 1; monster <= 2; monster++)
	{
		int punten = 20;
		cout << "zet de punten voor monster "<<monster << endl;
		cout << "hp";
		cin >> hp;
		punten -= hp;
		cout << "punten " << punten << endl;
		cout << "kracht";
		cin >> kracht;
		punten -= kracht;
		cout << "punten " << punten << endl;
		cout << "snelheid";
		cin >> snelheid;
		punten -= snelheid;
		cout << "punten " << punten << endl;
	}
}