#include <iostream>
using namespace std;

int findHammingDistance(unsigned int x, unsigned int y);

int main() {

    unsigned int x,y;

    cout << "enter x and y: ";
    cin >> x;
    cin >> y;

    int result = findHammingDistance(x , y);
    cout << result;
}

int findHammingDistance(unsigned int x, unsigned int y) {
    
    unsigned int z = x ^ y; // xor to find the different bits and set them to 1
    unsigned int ans = 0;


    while (z != 0) {

        ans += z & 1;   // & by 1 the least significant bit, if its 1, bits are different, so increment ans,
        z >>= 1;   // shift right to check every single bit, until all bits are checked (z = 0)
    }

    return ans;
}

