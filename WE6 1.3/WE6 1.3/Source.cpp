#include <iostream>

using namespace std;
void berekenkleingroot(int gegetal, int* min, int* max);

int main()
{ 
	int gegetal;
	cout << " geef een getal";
	cin >> gegetal;
	 while ( gegetal >= 0)
	 {
		 int min, max;
		berekenkleingroot(gegetal, &min, &max);
		 cout << " min van het getal:" << min << endl;
		 cout << "max van het getal:" << max << endl;
		 cout << " geef een getal";
		 cin >> gegetal;
	 }
	return 0;
}
void berekenkleingroot(int gegetal,int *min,int *max)
{
	int temp = gegetal % 10;
	*min = temp;
	*max = temp;
	gegetal /= 10;
	while (gegetal  != 0 )
	{
		temp = gegetal % 10;
		if (temp > *max)
			*max = temp;
		if (temp <*min)
			*min = temp;
		gegetal /= 10;
	}
}