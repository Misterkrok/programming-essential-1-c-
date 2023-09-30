#include <iostream>

using namespace std;

void sorteer(int* a ,int* b, int* c);
int main()
{
	int a, b, c;
	cout << " geef getal A:";
	cin >> a;
	cout << " geef getal B:";
	cin >> b;
	cout << " geef getal c:";
	cin >> c;
	sorteer(&a, &b, &c);
	cout << "na het oproepen van de sorteer functie :" << "a=" << a << "b=" << b << "c=" << c;
	return 0;
}
void sorteer(int* a, int* b , int* c)
{
	int temp;
	
	if (*a > *b)
	{
		temp = *b;
		*b = *a;
		*a = temp;
	}
	if (*b > *c)
	{
		temp = *b;
		 *b = *c;
		 *c = temp;
	}
	if (*a > *b)
	{
		temp = *b;
		*b = *a;
		*a = temp;
	}
}