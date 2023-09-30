#include <iostream>

using namespace std;

void wissel(int* a ,int* b);
int main()
{
	int a = 1, b = 2;
	wissel(&a, &b);
	cout << a << endl << b;
}
void wissel(int* a, int* b)
{
	int ab = *a;
	int bc = *b;

	*a = bc;
	*b = ab;
}