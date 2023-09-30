#include <iostream>
using namespace std;

int* min(int* inputArray, int length);
int* max(int* inputArray, int length);
double avg(int* inputArray, int length);
void reverse(int* inputArray, int length);

int main()
{
	int a[10] = { 4, 8, 2, 3, 5, 17, 7, 99, 3, 12 };
	cout << *min(a, 10) << endl;	//2
	cout << *max(a, 10) << endl;	//99
	cout << avg(a, 10) << endl;		//16
	for (int i = 0; i < 10; i++) {	//{ 4, 8, 2, 3, 5, 17, 7, 99, 3, 12 }
		cout << a[i] << " ";
	}
	cout << endl;
	reverse(a, 10);
	for (int i = 0; i < 10; i++) {	//{ 12, 3, 99, 7, 17, 5, 3, 2, 8, 4 }
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}

int* min(int* inputArray, int length) {
	int *min = &inputArray[0];
	for (int i = 0; i<length; i++) {
		if (inputArray[i]<*min) {
			min = &inputArray[i];
		}
	}
	return min;
}

int* max(int* inputArray, int length) {
	int *max = &inputArray[0];
	for (int i = 0; i<length; i++) {
		if (inputArray[i]>*max) {
			max = &inputArray[i];
		}
	}
	return max;
}

double avg(int* inputArray, int length) {
	double sum = 0.0;
	for (int i = 0; i<length; i++) {
		sum += inputArray[i];
	}
	return sum / length;
}

void reverse(int* inputArray, int length) {
	for (int i = 0; i<length / 2; i++) {
		int hulp = inputArray[i];
		inputArray[i] = inputArray[length - i - 1];
		inputArray[length - i - 1] = hulp;
	}
}