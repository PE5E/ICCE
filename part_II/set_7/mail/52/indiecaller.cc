#include "main.ih"

void indieCaller(std::string &outfile, std::string &text)
{
    Handler handlerObject;
    std::ofstream os(outfile, std::fstream::app);
    handlerObject.shift(os,  text);
}
