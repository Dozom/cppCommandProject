#include <iostream>

int main(){
    
    int value {45};


    std::cout << "The value is: " << value << std::endl;
    value+=5;
    std::cout << "The value is (after += 5): " << value << std::endl;
    value*=2;
    std::cout << "The value is (after *= 2): " << value << std::endl;
    value-=2;
    std::cout << "The value is (after -= 2): " << value << std::endl;
    value/=2;
    std::cout << "The value is (after /= 2): " << value << std::endl;
    value%=2;
    std::cout << "The value is (after %= 2): " << value << std::endl;
    return 0;
}
