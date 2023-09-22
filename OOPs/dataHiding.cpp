#include <iostream>

class Rectangle {

private:
    int length;
    int width;

public: 

    // ** Construstor Examples ** //

    // Non-parameterized Constructor
    Rectangle() {
        length = 1;
        width = 1;
    }
    
    // Parameterized Constructor
    Rectangle(int l, int w) {
        setLength(l);
        setWidth(w);
    }

    // Combine the first two into one constructor:
    Rectangle(int l = 1, int w = 1) {
        setLength(l);
        setWidth(w);
    }

    // Copy Constructor -- this for some reason doesnt work idk
    Rectangle(const Rectangle &r) {
        length = r.length;
        width = r.width;
    }

    // Mutators
    void setLength(int l) {

        if (l > 0) {
            length = l;

        } else {
            std::cout << "Invalid length.";
            length = 0;
        }
    }

    void setWidth(int w) {

        if (w > 0) {
            width = w;

        } else {
            std::cout << "Invalid width." << std::endl;
            width = 0;
        }
    }

    // Accesors
    int getLength() {
        return length;
    }

    int getWidth() {
        return width;
    }

    // Facilitators
    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }

};

int main() {

    Rectangle r;            // non-parameterized
    Rectangle r1(10, 5);    // parameterized
    
    r.setLength(10);
    r.setWidth(5);

    std::cout << "Area is: " << r.area() << std::endl;
    std::cout << "Length is: " << r.getLength();

    return 0;
}



