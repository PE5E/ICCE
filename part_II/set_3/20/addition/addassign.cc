#include "addition.ih"

class Operations;

Addition &Addition::operator+=(Operations const &other)
{ 

//    Operations tmp = *this;
    
//    tmp.add(*this, other);
    Binops tmp;
    return tmp.add(*this, other); 

}
