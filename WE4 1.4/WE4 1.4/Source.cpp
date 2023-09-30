#include <iostream>

using namespace std;

int main()
//kop=1,munt=0
{
	srand(time(0));
	int aantal_kop=0,aantal_munt=0,tellerkop=0,tellermunt=0;
	
	for (int hoogte = 0; hoogte < 10; hoogte++)
	{
		for (int breedte = 0; breedte < 10; breedte++)
		{
			bool kopofmunt = rand()%2;
			cout << kopofmunt ;
			if (kopofmunt == 1)
			{
				aantal_munt = 0;
				aantal_kop++;
				if (aantal_kop > tellerkop)
				{
					tellerkop++;
				}
			}
			else
			{
				aantal_kop = 0;
				aantal_munt++;
				if (aantal_munt > tellermunt)
				{
					tellermunt++;
				}
			}
		}
		cout << endl;
	}
	/*cout << aantal_kop << endl << aantal_munt << endl;*/
	cout << "aantal kop" <<  tellerkop << endl << "aantal munt" <<  tellermunt;
	return 0;
}