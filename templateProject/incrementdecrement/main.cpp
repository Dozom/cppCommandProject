#include <iostream>

int main(){
    int value {2};
    std::cout << "the value is incrementing: " << value++ << std::endl;
    std::cout << "the value is: " << value << std::endl;

    std::cout << "the value is decrementing: " << value-- << std::endl;
    std::cout << "the value is: " << value << std::endl;

    std::cout << "the value is incremented: " << ++value << std::endl;
    std::cout << "the value is: " << value << std::endl;

    std::cout << "the value is decremented: " << --value << std::endl;
    std::cout << "the value is: " << value << std::endl;
    return 0;
}
