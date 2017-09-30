#include "header.ih"
// test if ch is part of exlude set

bool isOther(char ch)                               
{
    std::string others = "-_.~";                      // to skip
    return others.find(ch) != std::string::npos;
}
