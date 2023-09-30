#include <iostream>

using namespace std;

int main()
{
	int gehoogte;
	char teken;
	cout << " geef de hoogte 0 om te stoppen  ";
	cin >> gehoogte;
	if (gehoogte !=0)
	{
     cout << " geef de teken ";
	 cin >> teken;
		for (int hoogte = 0; hoogte < gehoogte; hoogte++)
		{
			for (int breedte = 0; breedte < gehoogte; breedte++)
			{
				if (hoogte == 0 || breedte == 0 || hoogte == gehoogte - 1 || breedte == gehoogte - 1)
				{
					cout << teken;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else
	{
		cout << " dit programma stopt ";
	}
	return 0;
}