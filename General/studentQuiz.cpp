#include <iostream>
#include <string>
using namespace std;

bool askQuestion(const string question, const string options, const char correctOption, float &points);

// class Student {
// private:
//     long id;
//     string name;
//     float points;

// public:
//     Student(){};
//     Student(long i, string n, float p);

//     // Getters
//     long getId() {return id;}
//     string getName() {return name;}
//     float getPoints() {return points;}

//     // Setters
//     void setId(long i) {
//         id = i;
//     }
//     void setName(string n) {
//         name = n;
//     }
//     void setPoints(float p) {
//         points = p;
//     }
// };

// Student::Student(long i, string n, float p) {
//     id = i;
//     name = n;
//     points = p;
// }

int main() {
    long id;
    string name;
    float points = 100;
    char choice;
    
    cout << "\n";
    cout << "Welcome to our online quiz platform!" << endl;
    cout << "------------------------------------" << endl;
    cout << "Please fill out the required information: " << endl;

    cout << "What is your student ID num?: ";
    cin >> id;

    cin.ignore();

    cout << "What is your name?: ";
    getline(cin, name);

    cout << "Welcome " << name << "! Would you like to start the quiz? (Y/N): ";
    cin >> choice;
    cout << "\n";

    if (choice == 'Y' || choice == 'y') {

        askQuestion("How was your day?", "A) Mid B) Meh C) Great D) Insane", 'B', points);
        askQuestion("How was your month?", "A) Mid B) Meh C) Great D) Insane", 'C', points);
        askQuestion("How was your year?", "A) Mid B) Meh C) Great D) Insane", 'D', points);
        askQuestion("How was your bohoho?", "A) Mid B) Meh C) Great D) Insane", 'A', points);

        cout << "\n" << "Your score is: " << points << ". You got " << points/25 << " out of 4 corrrect." << endl;
    }

    // Create Student with given information
    // Student s(id, name, points);
    return 0;
}

bool askQuestion(const string question, const string options, const char correctOption, float &points) {
    char userAnswer;
    cout << question << endl;
    cout << options << endl;
    cout << "\n";

    while (true) {
        cout << "Your choice (A/B/C/D): ";
        cin >> userAnswer;
        userAnswer = toupper(userAnswer); // Convert to uppercase
        
        if (userAnswer == 'A' || userAnswer == 'B' || userAnswer == 'C' || userAnswer == 'D') {
            break; // Valid input, exit the loop
        } else {
            cout << "Invalid choice. Please enter A, B, C, or D." << endl;
        }
    }

    if (userAnswer == toupper(correctOption)) {
        cout << "Correct!" << endl << "\n";
        return true;
    } else {
        cout << "Wrong! The correct answer is: " << correctOption << ") " << endl << "\n";
        points -= 25;
        return false;
    }
}




