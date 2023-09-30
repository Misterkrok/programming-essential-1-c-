#include <iostream>

using namespace std;
struct gb
{
	string naam;
	int wachtwoord;
};

int main()
{
	gb array[5] = {"kil",123,"jarno",800,"axel",789,"lucas",546,"patrik",142};
	string naam;
	int wachtwoord;
	int loop = 1;
	while (loop==1)
	{
		cout << "gebruikersnaam";
		cin >> naam;
		cout << "wachtwoord";
		cin >> wachtwoord;
		for (int i = 0; i < 5; i++)
		{

			if (array[i].naam == naam && array[i].wachtwoord == wachtwoord)
			{
				cout << "ingelogd";
				loop = 0;
			}
		
		}
		if (loop==1)
		{
			cout << "ongeldig"<<endl;
		}
	}
	
	return 0;
}

