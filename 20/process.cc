#include "head.ih"
#include <ctype.h>          // toupper, tolower

void process(vars_t Vars)
{
    Mode option = selectOpt(Vars);
    switch (option)
    {
        case (Mode::ERROR):
        {
            std::cout << "ERROR" << '\n';                           // is this enough?
            break;
        }
        case (Mode::USAGE):
        {
            usage();
            break;
        }
        case (Mode::VERSION):
        {
            version();
            break;
        }   
        case (Mode::CAPITALIZE):
        {
            char ch;
            while (std::cin.get(ch)) std::cout << static_cast<char>(toupper(ch));
            break;
        }
        case (Mode::LOWER_CASE):
        {
            char ch;
            while (std::cin.get(ch)) std::cout << static_cast<char>(tolower(ch));
            break;
        }
    }   
    return;
}
