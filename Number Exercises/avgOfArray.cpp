#include <iostream>

int main() {

    int n, i;

    float num[100], sum = 0.0, average;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {

        std::cout << i+1 << ". Enter number: ";
        std::cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    std::cout << "Average = " << average;

    return 0;
}