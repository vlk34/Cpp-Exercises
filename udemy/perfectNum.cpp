#include <iostream>
#include <vector>

int main() {
    int n, sum;

    std::cout << "Enter n: ";   // Getting input
    std::cin >> n;

    std::vector<int> factors;   // Array

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);   // Adding the factors to an array
        }
    }

    for (int i = 0; i < factors.size(); i++) {
        std::cout << factors[i] << " ";    // Printing the factors (array elements)
        sum += factors[i];  // Calculating sum
    }

    std::cout << "\nSum of factors: " << sum << "\n";

    if (sum == 2 * n) {
        std::cout << "Perfect number";      // Perfect num check.

    } else std:: cout << "Not a perfect number";

    return 0;
}
