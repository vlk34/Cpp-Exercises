#include <iostream>
using namespace std;

int findHammingDistance(unsigned int x, unsigned int y);
// xor , and (if and is = 1, counter++) shift 1 till al zeros   x ^ y is xOr

int main() {

    unsigned int x,y;

    cout << "enter x and y: ";
    cin >> x;
    cin >> y;

    int result = findHammingDistance(x , y);
    cout << result;
}

int findHammingDistance(unsigned int x, unsigned int y) {
    
    unsigned int z = x ^ y;
    unsigned int ans = 0;


    while (z != 0) {

        ans += z & 1;
        z >>= 1;
    }

    return ans;
}

