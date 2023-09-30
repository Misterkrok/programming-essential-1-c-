#include <iostream>

using namespace std;
void printlijst(int getal);

const int aantal = 75;
int getal[aantal];

int main()
{
	srand(time(0));
	
	
	for (int i = 0; i < aantal; i++)
	{
		getal[i] = rand() % 76 + 25;
		if (getal[i] == 77)
		{
			cout << getal[i];
			break;
		}
		printlijst(getal[i]);

	}
	
	return 0;
}
void printlijst(int getal)
{
	int i;
	cout << getal <<", ";
	
}	
	