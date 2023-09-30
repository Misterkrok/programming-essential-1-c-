#include <iostream>

using namespace std;

int main()
{
	const int aanatalel = 4;
	int a[aanatalel] = {20,30,40,50};
	int b[aanatalel] = {2,3,4,5};
	int c[aanatalel];
	for (int i = 0; i < aanatalel; i++)
	{
		c[i] = a[i] + b[i];

		cout << c[i] << "="<< a[i] << "+"<< b[i] << endl;
	}
	
	return 0;
}