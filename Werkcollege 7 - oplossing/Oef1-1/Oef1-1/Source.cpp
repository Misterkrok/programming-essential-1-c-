#include <iostream>
using namespace std;

void functie_a();
int functie_b();
int functie_c(int);
int functie_d(int&);
int functie_e(int*);

int main()
{
	int returnwaarde;
	functie_a();
	returnwaarde = functie_b();
	returnwaarde = functie_c(returnwaarde);
	cout << returnwaarde << endl;
	returnwaarde = functie_d(returnwaarde);
	cout << "de nieuwe waarde is: " << returnwaarde << endl;
	cout << "de nieuwe waarde is: " << functie_e(&returnwaarde) << endl;
}

void functie_a()
{
	cout << "welkom in functie_a" << endl;
}

int functie_b()
{
	cout << "deze functie returnt een waarde" << endl;
	return 10;
}

int functie_c(int value)
{
	cout << "de returnwaarde van functie_b was ";
	return value;
}

int functie_d(int& value)
{
	return value * 2;
}

int functie_e(int* value)
{
	return *value + 10;
}
