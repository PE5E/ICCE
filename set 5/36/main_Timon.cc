#include <iostream>
#include <string>
#include "strings.h"                     // 'Filter' class


using namespace std;

int main() // int argc, char *argv[], char* envp[])
{
    Filter input(std::cin);
    input.display();
}

//    Strings str(argc, argv);
//    Strings str2(std::cin);
//    Strings str3(envp);

