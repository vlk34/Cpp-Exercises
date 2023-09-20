#include <iostream>

int main() {

    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 1; i <= 10; i++) {
        std::cout << n << " x " << i << " = " << n*i << "\n";
    }

    return 0;
}