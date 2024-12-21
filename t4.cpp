#include <iostream>
using namespace std;

template <class T>
class Factorial {
private:
    T n; 
public:
    Factorial(T n) : n(n) {}
    T calculateFactorial() {
        T result = 1;
        for (T i = 1; i <= n; ++i) { 
            result *= i;
        }
        return result;
    }
};

int main() {
    int num;
    cout << "Enter the number = ";
    cin >> num;
    Factorial<int> factorial(num);
    cout << "Factorial is = " << factorial.calculateFactorial() << endl;

    return 0;
}