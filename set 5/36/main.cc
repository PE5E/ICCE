#include <iostream>                     // cin
#include "filter.h"                     // 'Filter' class

int main() // int argc, char *argv[], char* envp[])
{
                                        //    Strings str(argc, argv);
                                        //    Strings str2(std::cin);
                                        //    Strings str3(envp);
Filter input(std::cin);
input.display();

}
