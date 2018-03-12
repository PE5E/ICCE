#ifndef __DATA_HEADER_
#define __DATA_HEADER_

#include <string>
#include <vector>
#include <functional>

class Data
{   
    std::vector<std::string> d_data;
    
     struct Char2
    {
        char data[2];
    };
    
    template <typename ClassType>                           // match class type
    static Char2    fun(void (ClassType::*)());

    template <typename NonclassType>                        // match value type
    static char     fun(...);

public:
    
    Data(std::vector<std::string> &initial);                   // constructor
    
    template <typename Type>
    decltype(auto) get(size_t idx);
};

#include "get.ff"

#endif
