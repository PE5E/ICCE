#include "header.ih"
// determine which option was provided

EOption getOpt(std::string opt)
{
    if (opt == "-e") return EOption::ENCODE;
    if (opt == "-d") return EOption::DECODE;
    
    return EOption::NONE;
}
