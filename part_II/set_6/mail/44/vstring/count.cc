#include "vstring.ih"

size_t Vstring::count(CharMap &cmap, bool (*accept)(char, CharMap &))
{
    size_t result = 0;
    std::for_each(this->begin(),
                  this->end(),
                    [&](std::string str)
                        {
                            result += countChar(str, cmap, accept); 
                        } 
                 );
    return result;
}
// Implement count using for_each and a lambda function. It
// must visit each of the strings stored in Vstring, returning the total
// number of accepted characters, storing the frequencies of accepted characters
// in its cmap parameter. It may be assumed that cmap initially refers to
// an empty map.
//
// The for_each algorithm cannot directly be used i
// (i.e., by passing *this as the function object argument) 
// inside a member function to modify its own object as the for_each
// algorithm first creates its own copy of the passed function object.
// A lambda function or a wrapper class whose constructor accepts a
// pointer or reference to the current object and possibly to one of
// its member functions solves this problem. 
