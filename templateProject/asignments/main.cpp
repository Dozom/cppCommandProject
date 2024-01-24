#include <iostream>

int main(){
    // Careful about auto assignments
    auto var1 {1u};
    var1 = -2;
    std::cout << var1;
    // It outputs a different value

    return 0;
}
