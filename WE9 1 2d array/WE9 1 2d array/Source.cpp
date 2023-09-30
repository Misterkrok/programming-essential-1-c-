#include <iostream>

using namespace std;

int main()
{
	char text, array[26]={' '};
	int a = 0;
	cout << "Geef een zin in / maximaal 70 posities / Afgesloten met een punt :";
	while (array[a-1] != '.')
	{
		cin >> text;
		array[a] = text;
		a++;
	}
	
	cout << text;
	return 0;
}