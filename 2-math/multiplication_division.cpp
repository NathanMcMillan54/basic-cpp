#include <iostream>

int main() {
    std::cout << "i = 10 x = 7 j = 4.9" << std::endl;
    double i = 10;
    int x = 7;
    double j = 4.9;

    i = i * x;
    std::cout << "i * x = " << i << std::endl;
    i = i / j;
    std::cout << "i / j = " << i << std::endl;
}
