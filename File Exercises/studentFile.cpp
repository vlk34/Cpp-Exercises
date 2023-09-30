#include <iostream>
#include <fstream>

class Student {

public:
    std::string name;
    int roll;
    std::string branch;

    friend std::ofstream &operator<< (std::ofstream &ofs, Student &s);
    friend std::ifstream &operator>> (std::ifstream &ifs, Student &s);
};

// Writing << overloaded
std::ofstream &operator<< (std::ofstream &ofs, Student &s) {

    ofs << s.name << std::endl;
    ofs << s.roll << std::endl;
    ofs << s.branch << std::endl;
    return ofs;
}

// Reading >> overlaoded
std::ifstream &operator>> (std::ifstream &ifs, Student &s) {

    ifs >> s.name;
    ifs >> s.roll;
    ifs >> s.branch;
    return ifs;
}

int main() {
    Student s1;

    // Writing into the file
    s1.name = "Johna"; s1.roll = 10; s1.branch = "CS";
    std::ofstream ofs("Student.txt", std::ios::trunc);

    ofs << s1; // overloaded
    ofs.close();


    // Reading from the file
    std::ifstream ifs("Student.txt");
    ifs >> s1;

    std::cout << "Name " << s1.name << std::endl;
    std::cout << "Roll " << s1.roll << std::endl;
    std::cout << "Branch " << s1.branch << std::endl;
    ifs.close();
}
