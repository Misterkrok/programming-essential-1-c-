#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int leesGok();
bool hogerLager(int, int);

int main()
{
	srand(time(0));
	int teller, gok, getal = rand() % 1000;
	gok = leesGok();

	for (teller = 1; !hogerLager(getal, gok); teller++) {
		gok = leesGok();
	}
	cout << "U hebt " << teller << "keer gegokt" << endl << endl;
	return 0;
}

int leesGok()
{
	int gok;
	do {
		cout << "Geef uw gok in (0-999):";
		cin >> gok;
	} while (gok<0 || gok>999);
	return gok;
}

bool hogerLager(int getal, int gok)
{
	if (getal == gok) {
		return 1;
	}
	else {
		if (getal < gok) {
			cout << "u moet lager gaan" << endl;
		}
		else {
			cout << "u moet hoger gaan" << endl;
		}
		return 0;
	}
}
