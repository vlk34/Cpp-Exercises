#include <iostream>
#include <string>

int main() {

    std::string str = "john123@gmail.com";

    size_t index = str.find('@');

    std::cout << str.substr(0, index);
}