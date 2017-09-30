#include "header.ih"
size_t hexToDec(std::string str)
{
    std::string hexDigits = "0123456789ABCDEF";
    return hexDigits.find(str[0]) * 16 + hexDigits.find(str[1]);   // hex base 16
    
}
