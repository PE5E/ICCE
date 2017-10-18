#include "../strings/strings.h"
 
 
void Strings::stringsSwap(Strings& objectB)  
{ 
    std::string *tempA = d_str;     // store the address of the data of objectA 
    d_str = objectB.d_str;          // now switch the addresses 
    objectB.d_str = tempA; 
} 
