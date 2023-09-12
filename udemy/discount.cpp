#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int total, discount;


    cout << "Enter Bill Amount: ";
    cin >> total;

    if (total < 100) {
        discount = 0;
    } 

    else if (total >= 100 && total < 500) {
        discount = total * 1/10;
    } 

    else if (total >= 500) {
        discount = total * 1/5;
    }

    cout << "Bill amount is: " << total << "\n";
    cout << "Discount is: " << discount << "\n";
    cout << "Discounted amount is: " << total - discount<< "\n";

    return 0;
}
