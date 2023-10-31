#include <iostream>
using namespace std;

bool isAlpha(const char c) {

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}

// void toLowerCase(char &c) {
//     if (c >= 'A' && c <= 'Z') 
//         c += 32;

// }

bool isPalindrome(const string &s) {

    for (char c : s) {

        if (isAlpha(c)) 
            continue;
        else 
            return false;
    }    

    int i = 0;
    int j = s.size() - 1;
    
    while (i < j) {

        if (tolower(s[i]) != tolower(s[j]))
            return false;

        i++;
        j--;
    }

    return true;
}


int main() {
    string str;
    cout << "Enter to check for palindrome: ";
    cin >> str;

    if (isPalindrome(str))
        cout << "Palindrome!";
    else
        cout << "Not Palindrome!";
}