#include <iostream>
using namespace std;

template <class T>
T average(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int intSize= 0;
    int intArray[10];
    cout << "Enter the size of the integer array: ";
    cin >> intSize;
    cout << "Enter the elements of the integer array: ";
    for (int i = 0; i < intSize; i++) {
        cin >> intArray[i];
    }
    float floatArray[10];
    int floatSize;
    cout << "Enter the size of the float array: ";
    cin >> floatSize;
    cout << "Enter the elements of the float array: ";
    for (int i = 0; i < floatSize; i++) {
        cin >> floatArray[i];
    }
    double doubleArray[10];
    int doubleSize;
    cout << "Enter the size of the double array: ";
    cin >> doubleSize;
    cout << "Enter the elements of the double array: ";
    for (int i = 0; i < doubleSize; i++) {
        cin >> doubleArray[i];
    }
    cout << "Average of integer type array = " << average(intArray, intSize) << endl;
    cout << "Average of float type array = " << average(floatArray, floatSize) << endl;
    cout << "Average of double type array = " << average(doubleArray, doubleSize) << endl;

    return 0;
}