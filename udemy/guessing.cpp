#include <iostream>
#include <random>

using namespace std;

int main() {

    // creating random num generator engine
    random_device rd;
    mt19937 gen(rd());

    // defining the ranges of the random generator
    uniform_int_distribution<int> dis(1, 10);

    // storing the random num in a variable
    int randomNum = dis(gen);
    
    int guess;
    int lives = 3;

    while (guess != randomNum && lives > 0) {
        cout << "Guess between 1-10: ";
        cin >> guess;
        lives--;
    }

    if (guess == randomNum) {
        cout << "Correct! The number was " << randomNum << "." << endl;
    } else {
        cout << "You ran out of lives!" << endl;
        cout << "The number was " << randomNum << "." << endl;
    }



    return 0;
}