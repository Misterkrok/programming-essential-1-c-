#include <iostream>

using namespace std;

int main()
{
	bool b = true;
	int cijfer, g = 0, ng = 0;
	cout << "cijfer:";
	cin >> cijfer;
	if (cijfer >= 0)
	{
		if (cijfer >= 0 && cijfer <=20)
		{
			if (cijfer >=10)
			{
				g++;

			}
			else
			{
				ng++;
			}
			
		}
		
		while (cijfer >= 0)
		{
			if (cijfer > 20)
			{
				cout << "ongeldige invoer" << endl;

			}
			cout << "cijfer:";
			cin >> cijfer;
			if (cijfer >= 0 && cijfer <= 20)
			{
				if (cijfer >= 10)
				{
					g++;
				}
				else
				{
					ng++;
				}
			}

		}
	}
	cout << "einde invoer" << endl;
	cout << "aanatl geslaagde studenten " << g << endl;
	cout << "aantal niet geslaagde studenten:" << ng;
	return 0;
}