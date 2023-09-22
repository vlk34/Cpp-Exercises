#include <iostream>

class Rectangle {

private: 
    int length;
    int width;

public:
    Rectangle();
    Rectangle(int l, int w);
    Rectangle(Rectangle &r);

    int getLength() {return length;}
    int getWidth() {return width;}
    void setWidth(int w);
    void setLength(int l);

    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

int main() {
    Rectangle r1(10, 10);
    
    std::cout << "Area: " << r1.area() << std::endl;

    if (r1.isSquare()) {
        std::cout << "It's a square." << std::endl;
    }
}

Rectangle::Rectangle() {
    length = 1;
    width = 1;
}

Rectangle::Rectangle(int l, int w) {
    length = l;
    width = w;
}

Rectangle::Rectangle(Rectangle &r) {
    length = r.length;
    width = r.width;
}

void Rectangle::setLength(int l) {
    if (l > 0) {
        length = l;
    } else length = 0;
}

void Rectangle::setWidth(int w) {
    if (w > 0) {
        width = w;
    } else width = 0;
}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2 * (length + width);
}

bool Rectangle::isSquare() {
    return length == width;
}

Rectangle::~Rectangle() {
    std::cout << "Rectangle destroyed." << std::endl;
}