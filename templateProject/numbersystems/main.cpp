#include <iostream>

using namespace std;
int main(){
	int decimal = 15;
	int octal = 015;
	int hexadecimal = 0x15;
	int binary = 0b00001111;
	int cat_count {decimal + octal};
	// Functional initialization
	int zeroitem {};
	int functionalinit(5);
//	int narrowing_conversion {2.9}; // gives an error
	std::cout << decimal << endl;
	std::cout << octal  << endl;
	std::cout << hexadecimal  << endl;
	std::cout << binary  << endl;
	std::cerr << "Printing your decimal: " << decimal << endl;
	std::cerr << "Printing your octal: " << octal << endl;
	std::cerr << "Printing your hexadecimal: " << hexadecimal << endl;
	std::cerr << "Printing your binary: " << binary << endl;
	std::cerr << "Printing your cat_count: " << cat_count << endl;
	std::cerr << "Printing your functionalinit: " << functionalinit << endl;
	std::cerr << "Printing your zeroitem: " << zeroitem << endl;
//	std::cerr << "Printing your narrowing_conversion: " << narrowing_conversion << endl;
	// Way to end successfully
	return 0;
}
