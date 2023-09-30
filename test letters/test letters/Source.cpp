#include <iostream>

using namespace std;
int h;

int main()
{
	cout << "geef de hoogte van uw letter ";
	cin >> h;
	
		for ( int j = 0; j < h; j++)
		{
			cout << "*";
				for (int i = 0; i < h/2; i++)
				{
					if (i == j/2 && j/3)
					{
						cout << "*";
					}
					else
						cout << " ";
				}
				for ( int i= 0; i < h/2; i++)
				{
					if (j==h && i == i/2 && i/3)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
			cout << endl;
		}

	return 0;
}