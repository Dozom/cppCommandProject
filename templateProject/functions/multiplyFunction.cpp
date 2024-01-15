#include <iostream>

int multiply(int first_param, int second_param){
	int result = first_param * second_param;
	return result;
}

int main() {
	int multiplied = multiply(25,5);
	std::cout << "25 * 5 equals to : " << multiplied << std::endl;
	return 0;
}
