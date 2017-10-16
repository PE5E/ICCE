#include "strings.h"                    // 'Strings' class
#include <iostream>                     // cin
using std::cout;

int main(int argc, char *argv[], char* envp[])
{
    Strings str(argc, argv);
    Strings str2(std::cin);
    cout << "----" << '\n';
    Strings str3(envp);
}

