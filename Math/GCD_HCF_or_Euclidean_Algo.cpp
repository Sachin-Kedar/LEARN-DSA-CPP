#include <iostream>

int euclideanAlgorithm(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }

    return (a == 0) ? b : a;
}

int main() {
    // Example usage:
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int gcd = euclideanAlgorithm(num1, num2);

    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

    return 0;
}