#include <iostream>
#include <string>

using namespace std;

int main()
{
	string naam;
	getline(cin, naam);
	/*cin >> naam;*/
	cout << "hallo" << naam << endl;
	double voorbeeld;
	cout << " geef een kommagetal ";
	cin >> voorbeeld;
	cin.ignore(INT_MAX, '\n'); //negeer een gegeven aantal character bv 10 = 10 character negeeren .
	cout << "geef een naam :";
	getline(cin, naam);
	cout << "hallo2:" << naam;
	return 0;
}