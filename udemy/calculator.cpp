#include <iostream>
#include <cmath>
#include <ctype.h>

using namespace std;

int main() {

    int num1, num2, result;
    bool isInvalid;
    char op;


    cout << "Enter first num: ";
    cin >> num1;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second num: ";
    cin >> num2;

    switch(op) {

        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error! Division by 0 is not possible." << endl;
                isInvalid = true;
            }

            break;

        case '*':
            result = num1 * num2;
            break;

        default:
            cout << "Invalid Operator" << endl;
            isInvalid = true;
            break;
    }

    if (!isInvalid) {
        cout << result;
    } else {
        return 0;
    }


    return 0;
}