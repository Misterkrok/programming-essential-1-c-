#include <iostream>

using namespace std;

int main()
{
	int vg = 0, getal = 1, vgt;
	int hoeveel;
	cout << "hoeveelheid getallen: ";
	cin >> hoeveel;
	cout << vg<<",";
	for (int aantal = 1; aantal < hoeveel; aantal++)
	{
		cout << getal << ",";
		vgt = getal;
		getal += vg;
		vg = vgt;
		
	}

	return 0;
}