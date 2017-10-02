#include "head.ih"
extern int succesState;

Mode selectOpt(vars_t Vars)
{
    if (Vars.help)
        return Mode::USAGE;
    if (Vars.version)
        return Mode::VERSION;
    if (Vars.capitalize and Vars.lowercase)         // can't do both
    {
        return Mode::ERROR;
        succesState = 1;
    }
    if (Vars.capitalize)
        return Mode::CAPITALIZE;
    if (Vars.lowercase)
        return Mode::LOWER_CASE;
    std::cout << "Invalid argument provided.";
        succesState = 1;
    return Mode::ERROR;
    
}
