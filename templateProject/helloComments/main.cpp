#include <iostream>

// include iostream, specifically to print in console 

// Main function
int main(){

	/* Multi-line block comment
	   Another line
	   Oh! And another one!
	*/

	std::cout << "Number 1" << std::endl;
	std::cout << "Number 2" << std::endl;
	std::cout << "Number 3" << std::endl;

	// Way to end successfully
	return 0;

	// Compiler type erors: error: expected ';' before 'return'
	// Runtime error: is a logical error, sometimes this type of error can crash the system
	// Warnings: warning: division by zero
}
