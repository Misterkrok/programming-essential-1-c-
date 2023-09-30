#include <iostream>
using namespace std;
void functie_a();
int functie_b();
void functie_c(int);
void functie_d(int&);
void functie_e(int*);

int main()
{
	functie_a();
	int returnwaarde = functie_b();
	functie_c(returnwaarde);
	functie_d(returnwaarde);
	functie_e(&returnwaarde);
	return 0;
}
void functie_a()
{
	cout << "welkom in functie_a";
}
int functie_b()
{
	cout << "deze functie return een waarde ";
	return 10;
}
void functie_c(int getal)
{
	cout << "het getal:" << getal;
}
void functie_d(int& getal)
{
	return getal * 2;
}