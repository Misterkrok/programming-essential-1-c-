#include <iostream>

using namespace std;

int main()
{
	
	int array[100];
	int getal;
	for (int i = 0; i < 100; i++)
	{
		cin >> array[i];
		for (int y  = 0; y < i-1;y ++)
		{
			if (array[i]==array[y])
			{
				getal = array[i];
				
			}
		}
	}
	cout << getal;
	return 0;
}