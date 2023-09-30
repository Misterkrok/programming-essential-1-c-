#include <iostream>

using namespace std;

int main()
{
	int matrix[3][3] = { 0 };

	for (int rij = 0; rij < 3; rij++)
	{
		for (int kol = 0; kol < 3; kol++)
		{
			cout << "geef een getal [" << rij << "][" << kol << "]";
			cin >> matrix[rij][kol];
		}
	}
	for (int rij = 0; rij < 3; rij++)
	{
		for (int kol = 0; kol < 3; kol++)
		{
			cout << matrix[rij][kol] << "\t";
		}
		cout << endl;
	}
	
	for (int rij = 0; rij < 3; rij++)
	{
		for (int kol = 0; kol < 3; kol++) 
		{
			int resultaat;
			
				 resultaat = matrix[rij][kol];
				cout << resultaat;
			
			
		}
	}
	
	return 0;
}