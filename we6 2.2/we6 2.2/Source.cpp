#include <iostream>

using namespace std;

void omtrekopper(double& lengte, double& breedte, double& omtrek, double& opp);

int main()
{
	double lengte, breedte, omtrek , opp;
	cout << "geef de lengte:";
	cin >> lengte;
	cout << "geef de breedte:";
	cin >> breedte;

	for (int i = 1; i <= 5; i++)
	{
		opp = lengte * breedte;
		omtrek = 2 * (lengte + breedte);
		cout << "in stap" << i << "lengte" << lengte << " breedte" << breedte << "omtrek"<< omtrek<< "ooprevlakte"<<opp << endl;
		omtrekopper(lengte, breedte, omtrek, opp);
	}
	return 0;
}
void omtrekopper(double& lengte, double& breedte, double& omtrek , double& opp)
{
	double temp = lengte;
	lengte += breedte *0.05;
	breedte += temp / 10;
}