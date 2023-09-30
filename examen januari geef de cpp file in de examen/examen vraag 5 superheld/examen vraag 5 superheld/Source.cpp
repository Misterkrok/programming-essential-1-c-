#include <iostream>
#include <string>

using namespace std;

struct Superheld
{
	string naam;
	int kracht;
};
Superheld leesSuperheldln();
void printSuperheld(Superheld h);

int main()
{
	Superheld h1 = leesSuperheldln();
	Superheld h2 = leesSuperheldln();
	printSuperheld(h1);
	printSuperheld(h2);
	return 0;
}
Superheld leesSuperheldln()
{
	Superheld h;
	cout << "naam:";
	getline(cin, h.naam);
	cin.clear();
	cout << endl << "Kracht:";
	cin >> h.kracht;
	cin.ignore();
	return h;
}
void printSuperheld(Superheld h)
{
	cout <<"naam:" << h.naam <<endl;
	cout << "kracht:" << h.kracht << endl;
}