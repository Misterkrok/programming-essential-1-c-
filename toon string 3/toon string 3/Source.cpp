#include <iostream>
#include <string>

using namespace std;
int main() {
	string naam2;
	cout << " geef een naam:";
	getline(cin, naam2);
	while (naam2.find_first_not_of(' ') == -1)
	{
		cout << "foutieve invoer , probeer opnieuw";
		getline(cin, naam2);
	}
	cout << naam2.length() << endl << naam2[naam2.length() - 1];// aantal charcter van de naam.
}