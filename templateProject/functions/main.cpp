#include <iostream>

int addNumbers(int firstNumber, int secondNumber){

	int sum = firstNumber + secondNumber;	
	return sum;
}

int main(){
	int first_number {3};
	int second_number {4};
	int sum = first_number + second_number;
	std::cout << "First number : " << first_number << std::endl;
	std::cout << "Second number : " << second_number << std::endl;

	std::cout << "Sum : " << sum << std::endl;

	sum = addNumbers(25,5);	
	std::cout << "Sum : " << sum << std::endl;

	return 0;
}

// Twenty nine hours of tutorial of freecodecamp left, come on!! :D
