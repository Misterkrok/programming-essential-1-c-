#include <iostream>

using namespace std;

int main()
{
	double grade;
	cin >> grade;
	if (grade <= 0)
	{
		cout << "Ijskoud";
	}
	else
		if (grade > 0 && grade <= 15)
		{
			cout << "Koud";
		}
		else if (grade >15 && grade <=25)
		{
			cout << "Lauw";
		}
		else if (grade >25)
		{
			cout << "Warm";
		}
	return 0;
}