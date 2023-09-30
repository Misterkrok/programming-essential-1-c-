#include <iostream>
using namespace std;

int main() {
	int a[4] = { 20, 30, 40, 50 };
	int b[4] = { 2, 3, 4, 5 };
	int c[4];
	for (int i = 0; i < 4; i++) {
		c[i] = a[i] + b[i];
	}
	for (int i = 0; i < 4; i++) {
		cout << c[i] << " = " << a[i] << " + " << b[i] << endl;
	}
	return 0;
}
