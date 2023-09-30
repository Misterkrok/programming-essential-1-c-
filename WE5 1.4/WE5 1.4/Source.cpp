#include <iostream>

using namespace std;

int main()
{
	
	char geletter;
	char woord[6]{ 'b', 'a' ,'n','a','n','a' } , teken[6]={'*','*','*','*','*','*'};
	cout << " geef letter";
	cin >> geletter;
	
	for (int i = 0; i < 6; i++)
	{
		cout << woord[i];
	}
	return 0;
}