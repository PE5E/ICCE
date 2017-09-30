#include "header.ih"
EOption getOpt(std::string opt)         // should be in seperate file?
{
    if (opt == "-e") return EOption::ENCODE;
    if (opt == "-d") return EOption::DECODE;

	return EOption::NONE;
}
