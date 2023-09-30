#include <iostream>
using namespace std;

int main()
{
	int a = 5;

	cout << a << endl;		//de waarde van a: 5
	cout << &a << endl;		//het adres van a: 0081FAD4

	int* b = &a;			// steek het adres van a in pointer b

	cout << b << endl;		//waarde in b == het adres van a: 0081FAD4
	cout << &b << endl;		//het adres van pointer b: 0081FAC8
	cout << *b << endl;		//de waarde van de variabele waar b naar verwijst == de waarde van a: 5

	int* c = &a;			// steek het adres van a in pointer c

	cout << c << endl;		//waarde in c == het adres van a: 0081FAD4
	cout << &c << endl;		//het adres van pointer c: 0081FABC
	cout << *c << endl;		//de waarde van de variabele waar c naar verwijst == de waarde van a: 5

	int** d = &c;			// steek het adres van c in pointer pointer d

	cout << d << endl;		//waarde in d == het adres van c: 0081FABC
	cout << &d << endl;		//het adres van pointer d: 0081FAB0
	cout << *d << endl;		//het adres van a: 0081FAD4
	cout << **d << endl;	//de waarde van a: 5

	return 0;
}