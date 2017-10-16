#include "strings.ih"

Strings::Strings(int const argc, char *argv[])
{
    for (int index = 0; index != argc; index++) // since the number of additions is known
    {                                           // this should be rewritten to add them all at once
//        std::cout << "calling add from argcargv constructor" << '\n';
        add(argv[index]);
    }
}
