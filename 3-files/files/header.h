#ifndef BASIC_CPP_HEADER_H
#define BASIC_CPP_HEADER_H

#include <iostream>

int i;

int number_stuff() {
    i = 5;
    i = i - 3;
    return 0;
}

int print_number_stuff() {
    std::cout << i << std::endl;
    return 0;
}

#endif //BASIC_CPP_HEADER_H
