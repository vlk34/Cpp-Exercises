#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// do this but while storing the function values that were already executed before. store stuff in an array idk

int main() {
    unsigned short n = 0;
    cout << "Enter n: ";
    cin >> n;

    // cout << "Fibonacci sum is: " << fibonacci(n);
    for (int i = 0; i <= 46; i++) {
        cout << i << ": " << fibonacci(i) << endl;
    }

    return 0;
}

