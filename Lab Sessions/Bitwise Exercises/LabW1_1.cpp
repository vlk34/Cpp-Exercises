#include <iostream>
#include <string>
using namespace std;

// 2 ---> 1, 2, 4, 8, 16, 32, 64 etc.. x times. x is 0 to 30 
// getInput checks if x is between 0 to 30
// getPowersOfTwo returns a string with the result formatted as requested

int getInput();
string getPowersOfTwo(int x);

int main() {
    int x = getInput();
    string str = getPowersOfTwo(x);
    cout << str;
}

int getInput() {

    int x;

    do {
        cout << "Type a number between 0 and 30: ";
        cin >> x;
    } while (x < 0 || x > 30);

    return x;
}

string getPowersOfTwo(int x) {
    string answer = "1";
    int pow = 1;

    for (int i = 0; i < x; i++) {

        pow <<= 1;
        answer += ", ";
        answer += to_string(pow);
    }

    return answer;
}
