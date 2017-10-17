#include "strings.ih"


void Strings::stringsSwap(Strings& objectA, Strings& objectB) 
{
    std::string *tempA = objectA.d_str;     // store the address of the data of objectA
    objectA.d_str = objectB.d_str;          // now switch the addresses
    objectB.d_str = tempA;


}
