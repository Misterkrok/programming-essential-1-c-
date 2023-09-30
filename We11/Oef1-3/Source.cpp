#include <iostream>
#include <string>
#include <climits>
using namespace std;

struct Product
{
	string naam;
	double prijs;
	string beschrijving;
};

char menu();
Product leesProductIn();
Product kiesProduct(Product[]);
double berekenTotaal(Product[]);
bool verwijderProduct(Product[]);

int main()
{
	int teller = 0, teller2 = 0;
	Product plijst[5];
	Product mand[10];
	char keuze;
	keuze = menu();
	while (keuze != 'Q')
	{
		cout << endl;
		switch (keuze)
		{
		case 'A':
			plijst[teller] = leesProductIn(); teller++;
			break;
		case 'B':
			if (teller2<10)
			{
				mand[teller2] = kiesProduct(plijst);
				teller2++;
			}
			else {
				cout << "Je kan maar max. 10 producten toevoegen aan je winkelmand." << endl;
			}
			break;
		case 'C':
			if (teller2>0) {
				if (verwijderProduct(mand)) {
					teller2--;
				}
			}
			else {
				cout << "Je winkelmand is leeg!" << endl << endl;
			}
			break;
		case 'D':
			cout << "Totaal prijs: " << berekenTotaal(mand) << endl << endl;
			break;
		}
		keuze = menu();
	}
	return 0;
}

char menu()
{
	char keuze;
	cout << "A: Product toevoegen aan DB" << endl;
	cout << "B: Product toevoegen aan winkelmand" << endl;
	cout << "C: Product verwijderen uit winkelmand" << endl;
	cout << "D: Totaalprijs berekenen" << endl;
	cout << "Q: Quit" << endl;
	cin >> keuze;
	keuze = toupper(keuze);
	while (keuze<'A' || (keuze > 'D' && keuze != 'Q')) {
		cout << endl << "Foutieve invoer. Probeer opnieuw";
		cin >> keuze;
	}
	return keuze;
}

Product leesProductIn()
{
	Product p;
	cout << "Naam product: ";
	cin.ignore(INT_MAX, '\n');
	getline(cin, p.naam);
	cout << "Prijs product: ";
	cin >> p.prijs;
	while (p.prijs<0) {
		cout << "We kunnen een product niet lager verkopen dan gratis! Probeer opnieuw: ";
		cin >> p.prijs;
	}
	cin.ignore(INT_MAX, '\n');
	cout << "Beschrijving product: ";
	getline(cin, p.beschrijving);
	cout << endl;
	return p;
}

Product kiesProduct(Product lijst[])
{
	int keuze = 0;
	int teller = 0;
	for (int i = 0; i<5; i++) {
		if (lijst[i].naam != "") {
			teller++;
			cout << "Product " << teller << ": " << lijst[i].naam << endl;
			cout << "Prijs: " << lijst[i].prijs << endl;
			cout << "Beschrijving: " << lijst[i].beschrijving << endl << endl;
		}
	}
	cout << "Welk product wilt u toevoegen?" << endl;
	cin >> keuze;
	while (keuze<1 || keuze > teller) {
		cout << "Ongeldige keuze, probeer opnieuw: ";
		cin >> keuze;
	}
	cout << endl;
	return lijst[keuze - 1];
}

bool verwijderProduct(Product mand[])
{
	int keuze = 0;
	int teller = 0;
	for (int i = 0; i<10; i++) {
		if (mand[i].naam != "") {
			teller++;
			cout << "Product " << teller << ": " << mand[i].naam << endl;
			cout << "Prijs: " << mand[i].prijs << endl;
			cout << "Beschrijving: " << mand[i].beschrijving << endl << endl;
		}
	}
	cout << "Welk product wilt u verwijderen (0 om te annuleren)?" << endl;
	cin >> keuze;
	while (keuze<0 || keuze > teller) {
		cout << "Ongeldige keuze, probeer opnieuw: ";
		cin >> keuze;
	}
	cout << endl;
	if (keuze == 0) {
		return false;
	}
	for (int i = keuze - 1; i<8; i++) {
		mand[i] = mand[i + 1];
		mand[9] = Product{};
	}
	return true;
}

double berekenTotaal(Product lijst[])
{
	double prijs = 0;;
	for (int i = 0; i<10; i++) {
		if (lijst[i].naam != "") {
			prijs += lijst[i].prijs;
		}
	}
	return prijs;
}
