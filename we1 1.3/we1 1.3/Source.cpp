#include <iostream>

using namespace std;

int main()
{
	int sec,uur=0,min=0,dag=0;
	cout << "geef aantal seconden aan ";
	cin >> sec;
	while (sec > 86400)
	{
		sec -= 86400;
		 dag++;
	}
	while (sec > 3600)
	{
		sec -= 3600;
		uur++;
	}
	while (sec > 60)
	{
		sec -= 60;
		min++;
	}
	cout << "dag" << dag << endl << "uur" << uur << endl << "min " << min << endl << "sec" << sec;
	return 0;
}