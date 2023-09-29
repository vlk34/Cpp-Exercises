#include <iostream>

class Student {

public: 
    int roll;
    std::string name;
    static int addNo;
    
    Student(std::string n) {
        addNo++;
        roll = addNo;
        name = n;
    }

    void display() {
        std::cout << "Name " << name << std::endl << "Roll " << roll << std::endl;
    }

};

int Student::addNo = 0;

int main() {

    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("Volk");
    Student s5("Bolk");
    Student s6("Colk");

    s1.display();
    s3.display();

    std::cout << "Number of Admission: " << Student::addNo << std::endl;
}