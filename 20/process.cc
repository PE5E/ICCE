#include "head.ih"

void process(vars_t Vars)
{
    Mode option = selectOpt(Vars);
    switch (option)
    {
        case (Mode::ERROR):
        {
            std::cout << "ERROR" << '\n';
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
        case (Mode::OK):                                 // what is this mode for?
        {
            std::cout << "OK" << '\n';
            break;
        }
        case (Mode::CAPITALIZE):
        {
            std::cout << "CAPITALIZE" << '\n';
            break;
        }
        case (Mode::LOWER_CASE):
        {
            std::cout << "LOWER_CASE" << '\n';
            break;
        }
    }   
    return;
}
