#include <iostream>
using namespace std;

template <class T>
T abs_value(T num) {
    return (num < 0) ? -num : num;
}

int main() {
    int int_val;
    float float_val;
    long long_val;
    cout << "Enter the integer value: ";
    cin >> int_val;
    cout << "Enter the float value: ";
    cin >> float_val;
    cout << "Enter the long value: ";
    cin >> long_val;
    cout << "abs(" << int_val << ") = " << abs_value(int_val) << endl;
    cout << "abs(" << float_val << ") = " << abs_value(float_val) << endl;
    cout << "abs(" << long_val << ") = " << abs_value(long_val) << endl;

    return 0;
}