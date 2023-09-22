#include <iostream>
#include <string>

class Student {

private:
    int roll;
    std::string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;
public:
    Student(int r, std::string n, int m, int p, int c) {
        roll = r;
        name = n;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;
    }

    int total() {
        return mathMarks + phyMarks + chemMarks;
    }

    char grade() {
        float average = total() / 3.0;

        if (average > 60) {
            return 'A';
        } else if (average >= 40 && average < 60) {
            return 'B';
        } else {
            return 'C';
        }
    }
};

int main() {

    int roll;
    std::string name;
    int m, p, c;
    std::cout << "Enter roll number of a Student: ";
    std::cin >> roll;

    std::cin.ignore();

    std::cout << "Enter Name of a Student: ";
    getline(std::cin, name);

    std::cout << "Enter marks in 3 subjects: ";
    std::cin >> m >> p >> c;

    Student s(roll, name, m, p, c);
    std::cout << "Total marks: " << s.total() << std::endl;
    std::cout << "Grade of Student: " << s.grade() << std::endl;
}

