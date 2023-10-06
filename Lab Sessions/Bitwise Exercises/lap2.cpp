#include <iostream>
#include <climits>

using namespace std;

// 5 / 2 = 2.5, decimal part isn't 0, so its even
// x = 5 --> ODD
// 0 <= x <= 2 to power 32 - 1
// if last digit binary is 1, its odd, if not its even

bool isEven(unsigned int x) {
    unsigned int mask = 1;

    if (x & 1) 
        return false;
    return true;
}

int main() {
    unsigned int x;
    cout << "Enter a number: ";
    cin >> x;

    if (isEven(x)) 
        cout << "EVEN";
    else    
        cout << "ODD";


    return 0;
}