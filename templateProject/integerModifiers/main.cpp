#include <iostream>

using namespace std;

int main(){
	// only in integer numbers
	// unsigned range [0 ~ 4.294.967.295]
	// signed range [... ~ ]
	// short 2 bytes
	// long 4 or 8 bytes
	// long long 8 bytes
	int value1 {10};
	int value2 {-300};


	std::cout << "value1 : "  << value1 << endl;
	std::cout << "sizeof(value1) : "  << sizeof(value1) << endl;
	std::cout << "value2 : "  << value2 << endl;
	std::cout << "sizeof(value2) : "  << sizeof(value2) << endl;

	//unsigned int value3 {-3};	// compiler error because unsigned does not support the minus symbol
	return 0;
}
