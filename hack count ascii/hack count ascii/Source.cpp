#include <iostream>

using namespace std;

int main()
{
	int antw = 0;
	char letter;
	for (int i = 0; i < 5; i++)
	{
		cin >> letter;
		int getal = letter;
		antw += getal;
	}
	cout << antw;
	return 0;
}