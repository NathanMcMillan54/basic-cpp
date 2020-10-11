#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream txtFile("files/text.txt");
    txtFile << "This is from a C++ file!";
    txtFile.close();
    std::cout << "Go look in files/text.txt now" << std::endl;
}
