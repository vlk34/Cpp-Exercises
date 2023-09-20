#include <iostream>
#include <string>
#include <cctype>

int main() {

    // by using tolower();
    std::string str1 = "UPPERCASE STRING";
    std::string str2 = "uPPerCase stri56ng";

    // for (auto& x:str) {
    //     x = std::tolower(x);    
    // }


    // lower everything
    for (auto& x:str1) {

        if (x >= 'A' && x <= 'Z') {

            x += 32; // adds 32 to the ASCII value which makes it lowercase.
        }
    }

    // upper everything
    for (auto& x:str2) {

        if (x >= 'a' && x <= 'z') {

            x -= 32; // remove 32 to the ASCII value which makes it uppercase.
        }
    }

    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;
}