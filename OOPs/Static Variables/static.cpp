#include <iostream>

class Test {
public:
    int a;
    static int count;

    Test() {
        a = 10;
        count++;
    }

    static int getCount() { // static function can only access static variables.
        return count;
        // a++; doesn't work
    }
};

int Test::count = 0;

int main() {
    Test t1, t2;
    std::cout << t1.count << std::endl;
    std::cout << t2.count << std::endl;
    std::cout << Test::getCount();
}