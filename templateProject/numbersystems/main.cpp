#include <iostream>

using namespace std;
int main(){
	int decimal = 15;
	int octal = 015;
	int hexadecimal = 0x15;
	int binary = 0b00001111;

	std::cout << decimal << endl;
	std::cout << octal  << endl;
	std::cout << hexadecimal  << endl;
	std::cout << binary  << endl;
	std::cerr << "Printing your decimal: " << decimal << endl;
	std::cerr << "Printing your octal: " << octal << endl;
	std::cerr << "Printing your hexadecimal: " << hexadecimal << endl;
	std::cerr << "Printing your binary: " << binary << endl;
	// Way to end successfully
	return 0;
}
