#include <iostream>
using namespace std;

size_t findInString(const string &s, const string &toFind) {

    // check if every substring of 's' is equal to 'toFind'
    for (int i = 0; i < s.size(); i++) {

        if (toFind.size() > s.length() - i)
            return string::npos;

        // start searching
        bool flag = true;   /* when this flag turns false,
                               toFind is not contained in the substring of 's' starting from index 'i'
                               therefore we can pass to another substring of 's' */

        // check if each element of toFind is equal to the substring of 's' starting from index 'i'
        for (int j = 0; j < toFind.size(); j++) {

            if (toFind[j] != s[i + j]) {
                
                flag = false;   // no match, set flag to false
                break;  // no need to continue until the end of 'ToFind'
            }
        }

        // if flag was never set to false, we found a match!
        if (flag)   
            return i; // the match started at index 'i'
    }

    // if all elements of 's' were scrolled and no match has been found, return npos
    return string::npos;
}

int main() {

    string s = "This is a string, find something in here!";
    string toFind = "is";
    cout << findInString(s, toFind);
}