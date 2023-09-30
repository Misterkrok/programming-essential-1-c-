#include <iostream>
using namespace std;

void leesIn(int* value, char* variableName);
//void leesIn(int& value, char* variableName);
int bereken(int lengte, int hoogte, int diepte);

//void leesIn(int& value, char* variableName, int min, int max);
//void leesIn(int* value, char* variableName, int min, int max);

int main()
{
	int lengte, hoogte, diepte;
	leesIn(&lengte, "de lengte");
	leesIn(&hoogte, "de hoogte");
	leesIn(&diepte, "de diepte");
	cout << "Het resultaat is " << bereken(lengte, hoogte, diepte) << " m" << endl;
	return 0;
}

void leesIn(int* value, char* variableName)
{
	cout << "Geef " << variableName << ": ";
	while (!(cin >> (*value))) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Geef " << variableName << ": ";
	}
}

/*
void leesIn(int& value, char* variableName)
{
cout << "Geef " << variableName << ": ";
while (!(cin >> value)) {
cin.clear();
cin.ignore(INT_MAX, '\n');
cout << "Geef " << variableName << ": ";
}
}
*/

int bereken(int lengte, int hoogte, int diepte)
{
	return lengte * hoogte*diepte;
}

/*
void leesIn(int* value, char* variableName, int min, int max)
{
cout << "Geef " << variableName << ": ";
while (!(cin >> (*value)) || *value<min || *value>max) {
cin.clear();
cin.ignore(INT_MAX, '\n');
cout << "Geef " << variableName << ": ";
}
}

void leesIn(int& value, char* variableName, int min, int max)
{
cout << "Geef " << variableName << ": ";
while (!(cin >> value) || value<min || value>max) {
cin.clear();
cin.ignore(INT_MAX, '\n');
cout << "Geef " << variableName << ": ";
}
}
*/