#include <iostream>
#include <vector>

int main() {
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<int> factors;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }

    for (int i = 0; i < factors.size(); i++) {
        std::cout << factors[i] << "\n";
    }

    return 0;
}
