#include <iostream>

using namespace std;

void korting(double& getal1, double& getal2);

int main()
{
	double getal1, getal2;

	cout << "geef 2 getallen :";
	cin >> getal1;
	cin >> getal2;

	korting(getal1,getal2);
	cout << " na verandering :prijs huis getal1 =" << getal1 << " en prijs string getal 2 =" << getal2;
	return 0;
}
void korting(double& getal1, double& getal2)
{
	if (getal1 < getal2)
		getal1 *= 0.9;
	else
	getal2 *= 0.9;
}