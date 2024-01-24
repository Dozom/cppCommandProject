#include <iostream>

int main(){
    
    // basic operations: add, substract, 
    int number1 = 1, number2 = 2;
    int add {number1 + number2};
    int diff {number2 - number1};
    int product {number1 * number2};
    int division {number2 / number1}; // integer division
    int reminder {number2 % number1};

    std::cout << "addition 1+2 :  " << add << std::endl;
    std::cout << "diff 2-1 :  " << diff << std::endl;
    std::cout << "product 1*2 :  " << product << std::endl;
    std::cout << "division 2/1 :  " << division << std::endl;
    std::cout << "reminder 2%1 :  " << reminder << std::endl;
    return 0;
}
