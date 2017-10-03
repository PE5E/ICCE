#include "head.ih"

Mode selectOpt(vars_t Vars)
{
    if (Vars.help)
        return Mode::USAGE;
    if (Vars.version)
        return Mode::VERSION;
    if (Vars.capitalize and Vars.lowercase)         // can't do both
    {
        return Mode::ERROR;
    }
    if (Vars.capitalize)
        return Mode::CAPITALIZE;
    if (Vars.lowercase)
        return Mode::LOWER_CASE;
    std::cout << "Invalid argument provided.";
    return Mode::ERROR;
    
}
