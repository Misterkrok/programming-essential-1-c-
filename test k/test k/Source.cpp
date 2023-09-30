#include <iostream>

using namespace std;

int main()
{
	int hoogte;
	cin >> hoogte;
	for (int i = 0; i < hoogte; i++)
	{
		for (int j = 0; j < hoogte; j++)
		{
			if (j == 0 || j == hoogte / 2 - i || j == i - (hoogte / 2))
			{
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
}