#include <iostream>

class Shape {
public:
    // pure virtual functions
    virtual float area() = 0;
    virtual float perimeter() = 0;

};


class Rectangle:public Shape {
private:    
    int height, width;

public:
    // Constructor
    Rectangle(int height, int width) {
        this->height = height;
        this->width = width;
    }

    // pure virtual functions
    float area() {
        return height * width;
    }
    float perimeter() {
        return 2 * (height + width);
    }
};


class Circle:public Shape {
private:    
    float radius;

public:
    // Constructor
    Circle(float radius) {
        this->radius = radius;
    } 

    // pure virtual functions
    float area() {
        return 3.1425 * radius * radius;
    }
    float perimeter() {
        return 2 * 3.1425 * radius;
    }
};

int main() {

    Shape *s = new Rectangle(10, 5);
    std::cout << "Area of Rectangle: " << s->area() << std::endl;
    std::cout << "Perimeter of Rectangle: " << s->perimeter() << std::endl;

    delete s;
    s = nullptr;

    s = new Circle(10);
    std::cout << "Area of Circle: " << s->area() << std::endl;
    std::cout << "Perimeter of Circle: " << s->perimeter() << std::endl;
    
    delete s;
    s = nullptr;

    return 0;
}