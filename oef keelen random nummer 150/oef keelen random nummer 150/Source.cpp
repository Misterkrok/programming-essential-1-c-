#include <iostream>
#include <string>

using namespace std;

int main()
{
	srand(time(0));
	int aantal[150];
	for (int i = 0; i < 150; i++)
	{
		aantal[i] = rand() % 41 + 10;
		if (aantal[i] != 45)
		{
			cout << aantal[i] << " ";
		}
		if (aantal[i] == 45)
		{
			cout << aantal[i];
			i = 150;

		}
	}
	
	return 0;
}