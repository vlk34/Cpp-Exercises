#include <iostream>

using namespace std;

int main() {

    // divisible by 4 = leap year, except years ending with 00.
    // divisible by 400 = leap year again even though 00.

    int year;

    cout << "Enter a year to check: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year";
            }
            else {
                cout << year << " is not a leap year";
            }
        }

        else {
            cout << year << " is a leap year";
        }
    }

    // // Checks normal years (2012, 1968)
    // if (year % 4 == 0 && year % 100 != 0) {
    //     cout << "Leap year";
    // } 
    // else {
    //     cout << "Not leap year";
    // }

    // // Checks for 00 years (2000, 1600)
    // if (year % 100 == 0) {
    //     if (year % 400 == 0) {
    //         cout << "Leap year";
    //     }

    //     else {
    //         cout << "Not leap year."; 
    //     }
    // } 
}