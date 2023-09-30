#include <iostream>
#include <string>

using namespace std;

struct Hardschijf
{
	string naam;
	double prijs;
	int opslag;

};
Hardschijf LeesHardeschifln();
void printHardeschijf(Hardschijf h);

int main()
{
	Hardschijf h = LeesHardeschifln();
	Hardschijf h2 = LeesHardeschifln();
	printHardeschijf(h);
	printHardeschijf(h2);
	return 0;
}

Hardschijf LeesHardeschifln()
{
	Hardschijf h;
	
	cout << "geef de naam";
	getline(cin, h.naam);
	cin.clear();
	cout << "geef de prijs";
	cin >> h.prijs;
	cout << "geef de opslagplaats";
	cin >> h.opslag;
	cin.ignore();
	return h;
}

void printHardeschijf(Hardschijf h)
{
	cout << "naam" << h.naam << endl;
	cout << "prijs" << h.prijs << endl;
	cout << "opslagcapaciteit" << h.opslag << endl;
}