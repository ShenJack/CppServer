#include <iostream>
#include "fstream"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    ofstream ofile;
    ofile.open("hhh.txt",ios::out);
    return 0;
}