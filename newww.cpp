#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
#include <iostream>

bool isAlphanumeric(char c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9');
}

int countAlphanumeric(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (isAlphanumeric(c)) {
            count++;
        }
    }
    return count;
}
int countAlphanumeric(string str, int)
int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int alphanumericCount = countAlphanumeric(inputString);
    std::cout << "Number of alphanumeric characters: " << alphanumericCount << std::endl;

    return 0;
}

