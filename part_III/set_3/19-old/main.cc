#include "convert/convert.h"
#include <iostream>
int main()
{
    std::cout << Convert<57005, 8>::CP{} << '\n';    // displays '157255'
    std::cout << Convert<57005, 16>::CP{} << '\n';   // displays 'dead'
    std::cout << Convert<57005, 32>::CP{} << '\n';   // displays '1nld'
}
