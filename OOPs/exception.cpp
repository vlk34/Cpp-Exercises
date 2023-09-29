#include <iostream>

int division(int x, int y) {

    if (y == 0) {
        throw 1;
    } else {
        return x / y;
    }
}

int main() {
    
    int a = 10, b = 0, c;

    try {
        c = division(a, b);
        std::cout << c << std::endl;
    } 
    catch(int e) {
        std::cout << "Division by zero / " << "Error code: " << e << std::endl;
    }

    std::cout << "Bye" << std::endl;
    return 0;
}