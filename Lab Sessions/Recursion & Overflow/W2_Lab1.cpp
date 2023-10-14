#include <iostream>
#include <climits>
// a > INT_MAX - b && b > 0 ------------- a < INT_MIN - b && b < 0
using namespace std;

int main() {

    long long a, b;
    cout << "Enter 2 nums: ";
    cin >> a;
    cin >> b;

    if (b > 0 && a > INT_MAX - b) {
        cout << "Overflow" << endl;
    }

    else if (b < 0 && a > INT_MIN - b) {
        cout << "Underflow" << endl;
    }

    cout << a+b;
    return 0;
} 