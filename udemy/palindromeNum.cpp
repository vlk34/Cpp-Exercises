#include <iostream>
#include <vector>

int main() {

    int num, numTemp;
    int digitCount = 0;

    std::vector<int> array; // array to store the digits 

    std::cout << "Enter a num to reverse: ";
    std::cin >> num;

    numTemp = num;

    while(numTemp != 0) {
        numTemp /= 10;
        digitCount++;       // Get digit count
    }

    numTemp = num; // Reset numTemp

    while(numTemp != 0) {
        array.push_back(numTemp % 10);
        numTemp /= 10;
    }

    std::cout << "Original number: " << num << "\n";

    std::cout << "Reversed number: ";
    for (int i = 0; i < digitCount; i++) {
        std::cout << array[i];
    }

    int reversedNum = 0;
    for (int i = 0; i < digitCount; i++) {
        reversedNum = reversedNum * 10 + array[i];
    }

    if (num == reversedNum) {
        std::cout << "\nThe original and reversed numbers are the same.\n";
    } else {
        std::cout << "\nThe original and reversed numbers are different.\n";
    }

    return 0;

}