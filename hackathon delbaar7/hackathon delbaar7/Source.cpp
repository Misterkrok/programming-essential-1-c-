#include <iostream>

using namespace std;

int main()
{
	int getal, exgetal=0;
	for (int i = 0; i < 100; i++)
	{
		cin >> getal;
		if (getal % 7 == 0)
		{
			exgetal += getal;
		}
	}
	cout << exgetal;
	return 0;
}