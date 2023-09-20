#include <iostream>
#include <string>

int main() {

    std::string str;
    int count = 0;

    std::cout << "Enter a string: ";
    getline(std::cin, str);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ') {    // with the if it skips the spaces between words, not needed just a test
            count++;
        }
    }

    std::cout << count;
    return 0;
}
