#include <iostream>

class Complex {

private:
    int real;
    int img;

public:
    Complex(int r=0, int i=0) {
        real = r;
        img = i;
    }

    Complex operator+(Complex x) {

        Complex temp;
        temp.real = real + x.real;  // real and img var's alone belong to the object that the function is called upon:
        temp.img = img + x.img;     // so for c1.add(c2), real and img are c1's, x.real and x.img are the parameters (c2).

        return temp;
    }

    // Getter functions to access private members
    int getReal() const {
        return real;
    }

    int getImg() const {
        return img;
    }
};

int main() {

    Complex c1(3, 7);
    Complex c2(5, 4);
    Complex c3;

    c3 = c1 + c2;
}