#include <iostream>
using namespace std;

int calculateHour(int n) {
    int hour = 0;
    while (n >= 60) {
        n -= 60;
        hour++;
    }

    return hour;
}

int main() {
    int num, hours, min;

    cout << "Enter a number to convert into hours & mins: ";
    cin >> num;

    hours = calculateHour(num);
    min = num - (hours * 60);
    
    cout << hours << " hours and " << min << " minutes." << endl;
}