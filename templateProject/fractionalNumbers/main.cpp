#include <iostream>
#include <iomanip> // Library to use setprecision

int main(){

	// Precision: the number of bits repesented, example:
	// 1.234567 -> Precision of 8 numbers
	// float: 
		// size = 4
		// precision = 7
		// comment = -
	// double: 
		// size = 8
		// precision = 15
		// comment = Recommended default
	// long double: 
		// size = 12
		// comment = 
		// precision = > double
	// floating point / 0 -> infinity
	// 0.0 / 0.0 -> NaN

	float number1 {1.234567890f};
	double number2 {2.2345678901234567890};
	long double number3 {2.2345678901234567890L};

	std::cout << std::setprecision(20);
	std::cout << "Number 1 : " << number1 << std::endl;
	std::cout << "Number 2 : " << number2 << std::endl;
	std::cout << "Number 3 : " << number3 << std::endl;

	return 0;
}
