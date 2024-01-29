#include <iostream>
using namespace std;

int euclideanAlgorithm(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }

    return (a == 0) ? b : a;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number:";
    cin >> num2;

    int gcd = euclideanAlgorithm(num1, num2);

    cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd <<endl;

    return 0;
}