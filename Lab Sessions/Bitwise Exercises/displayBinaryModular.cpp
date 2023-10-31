#include <iostream>
#define MIN 1
#define MAX 10
using namespace std;

short getNumberOfDigits();
int getNumberOfCombinations(int exp);
void printBinaryNumber(int numDec, int nDigits);

int main() {

    short digits[MAX] = {0};
    short nDigits = getNumberOfDigits();    // get number of digits
    int nCombinations = getNumberOfCombinations(nDigits);   // get number of combinations

    // iterate on all the combinations; 
    for (int i=0; i<nCombinations; i++) {

        // print the binary number
        printBinaryNumber(i, nDigits);                  
                                                    
        // print out the corresponding decimal
        cout << "\t->\t" << i << endl;                       
    }
}

short getNumberOfDigits() {
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

    return nDigits;
}

/* print the binary representation of a decimal number
 * - numDec: decimal number to be converted in binary
 * - nDigits: number of digits (bit) for representing the binary number
 */
void printBinaryNumber(int numDec, int nDigits) {
    for (int j=nDigits-1; j>=0; j--) 
        cout << ((numDec >> j) & 1);
}

/* evaluate number of combinations with the formula base ^ digits
 * - exp: exponent 
 * - return: number of combinations 
 */
int getNumberOfCombinations(int exp) {
    int ans = 1;
    for (int i = 0; i < exp; i++)
        ans *= 2;
    return ans;
}
