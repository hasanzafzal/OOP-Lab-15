#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b, T c) {
	return a + b + c;
}

int main() {
	int a, b, c;
	cout << "INTEGER VALUES\n";
	cout << "Enter three integer values: ";
	cin >> a >> b >> c;
	int sum_int = sum(a, b, c);
	cout << "Sum of integer values = " << sum_int << endl;
	float x, y, z;
	cout << "\nFLOAT VALUES\n";
	cout << "Enter three float values: ";
	cin >> x >> y >> z;
	float sum_float = sum(x, y, z);
	cout << "Sum of float values = " << sum_float << endl;

	return 0;
}