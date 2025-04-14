// Swap Two Numbers (Without Temp Variable)

#include <iostream>

int main() {

    int a = 10;
    int b = 5;

    std::cout << "a: " << a << "\nb: " << b << std::endl;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "a: " << a << "\nb: " << b << std::endl;

    return 0;
}