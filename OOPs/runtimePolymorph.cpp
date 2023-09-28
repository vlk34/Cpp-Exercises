#include <iostream>

class Car {
public: 
    virtual ~Car() {};
    virtual void start() {
        std::cout << "Car started";
    }
};

class Toyota : public Car {
public: 
    void start() {
        std::cout << "Toyota started" << std::endl;
    }
};

class Mazda : public Car {
public: 
    void start() {
        std::cout << "Mazda started" << std::endl;
    }
};

int main() {

    Car *p = new Toyota();
    p -> start();

    delete p;
    p = nullptr;

    p = new Mazda();
    p -> start();

    delete p;
    p = nullptr;

    return 0;
}