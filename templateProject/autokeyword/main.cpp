#include <iostream>

int main(){
    auto var1 {1};
    auto var2 {1.0};
    auto var3 {1.3f};
    auto var4 {1.5l};

    std::cout << "var1 : " << sizeof(var1) << " Bytes" << std::endl;
    std::cout << "var2 : " << sizeof(var2) << " Bytes" << std::endl;
    std::cout << "var3 : " << sizeof(var3) << " Bytes" << std::endl;
    std::cout << "var4 : " << sizeof(var4) << " Bytes" << std::endl;

    return 0;
}
