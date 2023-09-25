#include <iostream>

class Rectangle {

private:
    int length;
    int width;

public:

    // Constructor
    Rectangle(int l=0, int w=0) {
        this->length = l;
        this->width = w;
    }

    // Getters
    int getLength() {return length;}
    int getWidth() {return width;}

    // Setters 
    void setLength(int l) {
        this->length = l;
    }
    void setWidth(int w) {
        this->width = w;
    }

    // Functions
    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }
};

class Cuboid: public Rectangle {

private: 
    int height;

public: 

    // Constructor
    Cuboid(int l=0, int w=0, int h=0)
    {
        setLength(l);
        setWidth(w);
        this->height = h;
    }

    // Getters
    int getHeight() {return height;}

    // Setters
    void setHeight(int h) {
        this->height = h;
    }

    // Functions
    int volume() {
        return getLength() * getWidth() * getHeight();
    }
};

int main() {

    Cuboid c(10, 5, 3);
    std::cout << "Area is: " << c.area() << std::endl;
    std::cout << "Perimeter is: " << c.perimeter() << std::endl;
    std::cout << "Volume is: " << c.volume() << std::endl;

    return 0;
}