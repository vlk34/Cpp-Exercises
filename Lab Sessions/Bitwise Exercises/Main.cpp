#include <iostream>
#include <bitset>

int main() 
{
	int a = 5;
	int i = 2;

	a <<= i; // think of it as like 5 * (2 * 2), 5 times 2 to the power of i;
	a >>= i; // the reverse, this divides it by 2 by i times;
	std::cout << "Hey " << a << std::endl;
				
	//0 & 1 = 0;	// Returns 1 if both are 1, else returns 0
	//1 & 0 = 0;
	//0 & 0 = 0;
	//1 & 1 = 1;

	int c = 0b101;
	int d = 0b10110;

	d <<= 4;

	int g = c | d;
	std::cout << std::bitset<9>(g);
}