#include "filter.ih"                                                           // 'Filter' class, 'Struct', <istream>, <string>
#include <iostream>                                                            // std::cout

void Filter::display()
{
    std::string whitespace = " \t\n\f\n\r";                                    // could use is_white

    Rel released = d_String.release();                                         // this apporach destroys the String object
    std::string *out = released.data;
    size_t siz = released.size;

    while (out->find_first_not_of(whitespace) == std::string::npos)            // forward loop
    {
        ++out;
        --siz;
    }

    while((out + siz - 1)->find_first_not_of(whitespace) == std::string::npos) // backward loop
        --siz;

    for (std::string *ptr = out; ptr != out + siz; ++ptr)
        std::cout << *ptr << '\n';
}
