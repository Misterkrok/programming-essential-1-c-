#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int* b = &a;
	int* c = &a;
	int** d = &c;

	cout << a << endl; //5
	cout << &a << endl; 
	cout << b << endl; // &a
	cout << &b << endl;
	cout << *b << endl; // 5
	cout << c << endl; // &a
	cout << &c << endl; 
	cout << *c << endl; // 5*/
	cout << d << endl; // &c
	cout << &d << endl;
	cout << *d << endl; // &a
	cout << **d << endl; // 5
	return 0;
}