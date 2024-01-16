#include <iostream>

int main(){

	// std::cout -> Printing data to the console
	// std::cin -> reading data from the terminal
	// std::cerr -> Printing errors to the console
	// std::clog -> Printing log messages to the console
//	std::cin  reading data from the terminal;

	int age;
	std::string name;
	std::string fullname;

	std::cout << "Please introduce your fullname: " << std::endl;
	std::getline(std::cin, fullname);

	std::cout << "Please introduce your name: ";
	std::cin >> name;
	
	std::cout << "Please introduce your age: ";
	std::cin >> age;

	std::cerr << "Printing your age: " << age << " Printing your name: " << name;
	std::clog << "Printing log messages to the console";
	std::cout << "Your fullname: " << fullname;


	// Way to end successfully
	return 0;

	// Compiler type erors: error: expected ';' before 'return'
	// Runtime error: is a logical error, sometimes this type of error can crash the system
	// Warnings: warning: division by zero
}
