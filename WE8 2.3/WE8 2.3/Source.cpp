#include <iostream>

using namespace std;

int main()
{
	int lengte=0;
	cout << "Geef een rijlengte in: ";
	cin >> lengte;
	int* array = new int[lengte];
	cout << endl << "geef voor elke waarde : B (bom), W(water) of een rijpositie in."<<endl;
	for (int i = 0; i < lengte; i++)
	{
		int po;
		cout << "geef de waarde voor cel" << i<<":"<<endl;
		cin >> po;
		
	}
	return 0;
}