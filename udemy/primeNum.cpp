#include <iostream>
#include <vector>

int main() {

    int n;
    std::vector<int> factors;   // Array

    std::cout << "Enter a num to check: ";  // Input
    std::cin >> n;


    for (int i = 1; i <= n; i++) {  // Checking for factors
        if (n % i == 0) {
            factors.push_back(i);       // Adding only the factors to an array.
        }
    }


    if (factors.size() <= 2) {
        std::cout << "Prime number";    // There should be only 2 factors if prime num: (1 and itself)
    }
    else if (factors.size() > 2) {
        std::cout << "Not prime number";
    }
}