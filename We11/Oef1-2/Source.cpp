#include <iostream>
#include <string>
using namespace std;

struct Gebruiker
{
	string gebruikersnaam;
	string wachtwoord;
};

int main()
{
	Gebruiker lijst[5];
	lijst[0] = Gebruiker{ "Ruben", "123" };
	lijst[1] = Gebruiker{ "Kristien", "789" };
	lijst[2] = Gebruiker{ "Jef", "123" };
	lijst[3] = Gebruiker{ "Jos", "123" };
	lijst[4] = Gebruiker{ "Jan", "123" };

	string gebruikersnaam, wachtwoord;
	bool check = false;
	do {
		cout << "Gebruikersnaam: ";
		cin >> gebruikersnaam;
		cout << "Wachtwoord: ";
		cin >> wachtwoord;
		for (int i = 0; i < sizeof(lijst) / sizeof(lijst[0]); i++) {
			if (lijst[i].gebruikersnaam == gebruikersnaam && lijst[i].wachtwoord == wachtwoord) {
				check = true;
			}
		}
		// of alternatief
		//for (Gebruiker &gebruiker : lijst) {
		//	if (gebruiker.gebruikersnaam == gebruikersnaam && gebruiker.wachtwoord == wachtwoord) {
		//		check = true;
		//	}
		//}
		if (!check) {
			cout << "Ongeldig!" << endl << endl;
		}
	} while (check == false);
	cout << "Geldig! Je bent ingelogd.";
	return 0;
}
