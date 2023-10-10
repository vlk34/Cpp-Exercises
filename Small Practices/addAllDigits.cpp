#include <iostream>
using namespace std;
// Add up all the digits between 2 given int
/* 11 - 16 
11, 12, 13, 14, 15, 16
(1+1) + (1+2) + (1+3) + (1+4) + (1+5) + (1+6) = 27 */

// normal function
int sumDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// recursive version
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }

    return n % 10 + sumOfDigits(n/10);
}

int main() {
    int n1, n2;
    int totalSum = 0;

    cout << "Insert 1st integer: ";
    cin >> n1;
    cout << "Insert 2nd integer: ";
    cin >> n2;

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (int i = n1; i <= n2; i++) {
        totalSum += sumOfDigits(i);
    }

    cout << "Sum of digits between " << n1 << " and " << n2 << " is: " << totalSum << endl;

    return 0;
}