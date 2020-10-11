#include <iostream>
#include "files/header.h"

int main() {
    std::cout << "Calling function from header file..." << std::endl;
    number_stuff();
    print_number_stuff();
    std::cout << "Calling function from header file done." << std::endl;
}
