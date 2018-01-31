#include "main.ih"

void caller(Handler &handlerObject, std::string &outfile, std::string &text)
{
    std::ofstream os(outfile);
    handlerObject.shift(os, text);
}
