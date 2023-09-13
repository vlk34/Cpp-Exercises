#include <iostream>

void Digits(int n);

int main() {
    
    int n;
    std::cout << "Enter num: ";
    std::cin >> n;

    Digits(n);
}

void Digits(int n)
{
    int digit;

    while (n > 0) 
    {
        digit = n % 10; // mod by 10 gets the last digit of the number
        n /= 10;    // remove the last digit by / 10, truncates the float value (162.5 - 5 gets truncated)
        std::cout << digit << " ";   
    }
}