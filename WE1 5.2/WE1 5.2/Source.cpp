#include <iostream>

using namespace std;

int main()
{
	double opp, inhoud,straal;
	cout << "geef de straal van de bol";
	cin >> straal;
	opp = 4 * 3.14 * (straal * straal);
	inhoud = 1.33333 * 3.14 * straal * straal * straal;
	cout << "De oppervlakte van de bol is " << opp << "cm^2."<<endl;
	cout << "Het volume van de  bol is " << inhoud << "cm^3";
		return 0;
}