#include <iostream>

class Base {

public:
    Base() {std::cout << "Non-param Base" << std::endl;}
    Base(int x) {std::cout << "Param of Base "<< x << std::endl;}
};

class Derived:public Base {

public: 
    Derived() {std::cout << "Non-param Derived" << std::endl;}
    Derived(int y) {std::cout << "Param Derived " << y << std::endl;}  

    Derived(int x, int y):Base(x) {

        std::cout << "Param Derived " << y << std::endl;
    }  
};

int main() {

    Derived d; // not param base + non param derived
    Derived d1(10); // non param base + param derived
    Derived d2(10, 20); // param base + param derived
}