#include <iostream>
#define MIN 1
#define MAX 10
using namespace std;

int main() {

    short nDigits; // input value

    /* 
        get desired number of digits from keyboard 
        repeat until the user enters a valid number (1-10) 
    */
    do 
    {
        cout << "Insert number of digits (from " << MIN << " to " << MAX << "): ";
        cin >> nDigits; 
    } while (nDigits < MIN || nDigits > MAX);


    // evaulate number of combinations with the formula base ^ digits
    int nCombinations = 1;
    for (int i=0; i<nDigits; i++) 
        nCombinations *= 2; // multiply the base 2 as many times as 'digits' is ex: 4 digits = 16 different variations

    // cout << nCombinations << endl;

    // iterate on all the combinations; 
    for (int i=0; i < nCombinations; i++) {

        /* we iterate all the bits we use to represent our number, and to get them from left to right,
           we need to start counting from nDigits-1 to zero */
        for (int j=nDigits-1; j>= 0; j--) 
            cout << ((i >> j) & 1);     /* shift to the right of the binary representation of our decimal 
                                           number of j bits, 
                                           
                                           such that we check we get a binary number which is either one or zero,
                                           based on the value of the j-th bit from the right;

                                           to obtain the value of only that bit in binary, we put it in
                                           bitwise AND with 1
                                           
                                           and we print it. */

        // print out the corresponding decimal num
        cout << "\t->\t" << i << endl;
    }
}