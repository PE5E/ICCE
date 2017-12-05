#include "addition.ih"

class Operations;

Addition &Addition::operator+=(Operations const &other)
{ 
    Operations *tmp = new Operations;
    tmp = static_cast<Operations *>(this)->add(other);
    return static_cast<Addition>(*tmp);
//    Operations tmp = *this;
    
//    tmp.add(*this, other);
//    Binops tmp;

//    return tmp.add(*this, other); 

//    other.add(static_cast<Operations>(*this));


}
