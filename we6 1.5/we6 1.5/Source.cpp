#include <iostream>

using namespace std;

void wissel(int& getal1, int& getal2);

int main()
{
	
	int a, b, c;
	cout << " geef getal A:";
	cin >> a;
	cout << " geef getal B:";
	cin >> b;
	cout << " geef getal c:";
	cin >> c;
	wissel(a, b);
	wissel(a, c);
	wissel(b, c);
	cout << "na het oproepen van de sorteer functie :" << "a=" << a << "b=" << b << "c=" << c;
	return 0;
}
void wissel(int& getal1, int& getal2)
{
	if (getal1 > getal2)
	{
		int temp = getal1;
		getal1 = getal2;
		getal2 = temp;
	}
}