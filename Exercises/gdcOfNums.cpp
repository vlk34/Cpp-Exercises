#include <iostream>

int main() {

    int num1, num2;

    std::cout << "Enter 2 nums: ";
    std::cin >> num1 >> num2;

    while (num1 != num2) {

        if (num1 > num2) {
            num1 -= num2;
        } 

        else {
            num2 -= num1;
        }
    }

    std::cout << num1 << " = " << num2;
}