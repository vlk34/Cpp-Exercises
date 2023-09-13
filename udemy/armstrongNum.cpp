#include <iostream>
#include <cmath>

int main() {

    int num;

    std::cout << "Enter a num: "; 
    std::cin >> num;

    int numTemp = num;


    int digitCount = 0;
    int digit = 0;
    int sum = 0;

    while (numTemp != 0) {
        numTemp /= 10;  
        digitCount++;       // Calculate digit count
    }

    numTemp = num;

    for (int i = 0; i < digitCount; i++) {
        digit = num % 10; // gets the last digit of the num
        num /= 10;

        sum += pow(digit, digitCount);
    }


    if (sum == numTemp) {
        std::cout << numTemp << " is an Armstrong number.";
    } else {
        std::cout << numTemp << " is not an Armstrong number.";
    }
}