#include <iostream>

using namespace std;

int main()
{
	const int aanatalele = 7;
	int tedeleten = 3;
	int array[aanatalele] = { 4,8,2,3,5,4,7 };
	for (int i = 0; i < aanatalele; i++)
	{
		cout << array[i] ;
	}
	for (int c = 0; c < aanatalele; c++)
	{
		cout << endl << "geef de nummer die je moet deleten ";
		cin >> tedeleten;
		for (int i = 0; i < aanatalele; i++) // loop over elk element
		{
			if (array[i] == tedeleten) // als i'e element gelijk is aan tedeleten
			{
				for (int j = i; j < aanatalele; j++) // dan verschuiven we alles vanaf element i
				{
					array[i] = array[i + 1]; // met het getal erna

				}

				// en zet laatste element^op 0
				array[aanatalele - 1] = 0;
			}
			cout << array[i];
		}
	}
	return 0;
}