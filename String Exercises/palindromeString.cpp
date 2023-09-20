#include <iostream>
#include <string>
#include <cctype>

int main() {

    std::string str1, str2;

    std::cout << "Enter a word: ";
    getline(std::cin, str1);

    // Resize str2 equal to str1
    str2.resize(str1.size());

    // Reverse str1 && store it in str2
    for (int i = 0; i < str1.size(); i++) {
        str2[i] = str1[str1.size() - 1 - i];
    }

    // Lowercase the strings
    for (auto& x:str1) {
        x = std::tolower(x);
    }

    for (auto& x:str2) {
        x = std::tolower(x);
    }

    // Check for palindrome
    if (str1 == str2) {
        std::cout << "Palindrome";
    } else {
        std::cout << "Not Palindrome";
    }

    return 0;
}