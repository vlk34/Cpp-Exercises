#include <iostream>
using namespace std;
// x = 5 ----> 105
// (5)10 = (101)2

/* convert decimal number into binary code
 - numDec, decimal number to be converted*/
int convertBinary(int numDec) {
    if (numDec == 0) {
        return 0;
    } else {

        return 10 * convertBinary(numDec/2) + (numDec % 2);
    }
}

int main() {
    int numDec;
    cout << "Insert a number: ";
    cin >> numDec;
    cout << convertBinary(numDec) << endl;

    cout << 1/2;
}