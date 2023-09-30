#include <iostream>

using namespace std;

/*keuze == toupper(keuze)maak de kleine letter naar grote letter */
void tekenN(int hoogte)
{
	for (int i = 0; i < hoogte; i++)
	{
		for (int j = 0; j < hoogte; j++)
		{
			if (i == hoogte - 1 - j)
			{
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
}
void tekenK(int hoogte)
{
	if (hoogte % 2 == 0)
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
void tekenC(int hoogte)
{
	for (int i = 0; i < hoogte; i++)
	{
		for (int j = 0; j < hoogte; j++)
		{
			if (i == 0 || i == hoogte - 1 || j == 0 || j == hoogte - 1)
			{
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
}
void tekenD(int hoogte)
{
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
void menu()
{
	cout << "A Nfiguuur " << endl
		<< " B K-figuur " << endl
		<< "C  leeg vierkant " << endl
		<< "D driehoek" << endl
		<< "S. Stoppen";
}
int main()
{
	int hoogte=5;
	char keuze;

	cout << "A Nfiguuur " << endl
		<< " B K-figuur " << endl
		<< "C  leeg vierkant " << endl
		<< "D driehoek" << endl
		<< "S. Stoppen";
	cout << endl;
	cin >> keuze ;

	
	while (keuze != 'S' && keuze)
	{
		int hoogte;
		cout << "hoe hoog";
		cin >> hoogte;
		while (hoogte >= 0)
		{

		}

		switch (keuze)
		{

		case 'A':
			tekenN(hoogte);
			break;
		case'B':
			tekenK(hoogte);
			break;
		case'C':
			tekenC(hoogte);
			break;
		case'D':
			tekenD(hoogte);
			break;

			
		}
		
	}
		
	cout << endl;
	tekenN(7);

	return 0;
}