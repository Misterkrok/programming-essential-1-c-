#include <iostream>

using namespace std;

int main()
{
	int pinch=0, tsp=0, tbsp=0, oz=0, lb=0;
	double gram;
	cout << "geef een aantal gram in:";
	cin >> gram;

	while (gram >= 450)
	{
		gram -= 450;
		lb++;
	}
	while (gram >= 28)
	{
		gram -= 28;
		oz++;
	}
	while (gram >= 15)
	{
		gram -= 15;
		tbsp++;
	}
	while (gram >= 5)
	{
		gram -= 5;
		tsp++;
	}
	while (gram >= 0.5)
	{
		gram -= 0.5;
		pinch++;
	}
	if (lb != 0)
	{
		cout << lb << "pound" << endl;
	}
	if (oz != 0)
	{
		cout << oz << "ounce" << endl;
	}
	if (tbsp != 0)
	{
		cout << tbsp << "tablespoon" << endl;
	}
	if (tsp != 0)
	{
		cout << tsp << "teaspoon" << endl;
	}
	if (pinch != 0)
	{
		cout << pinch << "pinch" << endl;
	}
	return 0;
}