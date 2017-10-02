#include "head.ih"

Mode selectOpt(vars_t Vars)
{   
    if (Vars.help)
    {
        return Mode::USAGE;
        std::cout << "SET MODE HELP" << '\n';
    }
    if (Vars.version) 
    {
        return Mode::VERSION;
        std::cout << "SET MODE VERSION" << '\n';
    }
    if (Vars.capitalize and Vars.lowercase)
    {
        return Mode::ERROR;
        std::cout << "SET MODE ERROR" << '\n';
    }
    if (Vars.capitalize)
    {
        return Mode::CAPITALIZE;
    }
    if (Vars.lowercase)
    {
        return Mode::LOWER_CASE;
    }
    return Mode::ERROR;
}
