#include "processaccounter/processaccounter.ih"
#include <fstream>
#include <iostream>
#include <string>
using std::string;

int main(int argc, char *argv[])
{
    string path = "pacct";

    std::ifstream file(path, std::ios::binary);
    std::cerr << __LINE__ << ": good = " << file.good() << '\n';
    std::cerr << __LINE__ << ": open = " << file.is_open() << '\n';

    ProcessAccounter object(file);
    object.badProcesses();
    std::cout << "-----------------------" << '\n';
    object.allProcesses();
}

