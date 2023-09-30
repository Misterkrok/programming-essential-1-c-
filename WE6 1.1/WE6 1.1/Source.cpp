#include <iostream>

using namespace std;

void schuifdoor(int* a, int* b, int* c);
int main()
{
	int a = 1, b = 2, c = 3;
	schuifdoor(&a, &b, &c);
	cout << "a" << a << endl << "b" << b << endl << "c" << c;

	return 0;
}
void schuifdoor(int* a, int* b, int* c)
{
	
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;

}