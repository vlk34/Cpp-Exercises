#include <iostream>
#include <string>

class Employee {
private:
    int id;
    std::string name;
public:
    // Constructor
    Employee(int id, std::string name) {
        this->id = id;
        this->name = name;
    }
    // Getters
    int getId() {return id;}
    std::string getName() {return name;}

    // Setters
    void setId(int id) {
        this->id = id;
    }
    void setName(std::string name) {
        this->name = name;
    }
};

class FullEmployee : public Employee {
private:
    int salary;
public:

    // Constructor
    FullEmployee(int id, std::string name, int salary):Employee(id, name) {
        this->salary = salary;
    }

    // Getters
    int getSalary() {return salary;}
};

class PartEmployee : public Employee {
private:
    int wage;

public:
    // Constructor
    PartEmployee(int id, std::string name, int wage):Employee(id, name) {
        this->wage=wage;
    }

    // Getters
    int getWage() {return wage;}
};

int main() {

    FullEmployee p1(223, "Raj Burh", 5000);
    PartEmployee p2(363, "Volkan Erdogan", 300);

    std::cout << "Salary of " << p1.getName() << " is " << p1.getSalary() << std::endl;
    std::cout << "Daily wage of " << p2.getName() << " is " << p2.getWage() << std::endl;

    return 0;
}