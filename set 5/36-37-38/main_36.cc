#include "strings/strings.h"
#include <iostream>

int main(int argc, char *argv[], char *envp[])
{
    Strings argstr(argc, argv);
    Strings envstr(envp);
    Strings streamstr(std::cin);
}
