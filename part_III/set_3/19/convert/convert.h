#ifndef __CONVERT_HEADER_H
#define __CONVERT_HEADER_H

#include <cstddef>
#include <vector>
#include <iostream>

    // generic 
template <size_t value, size_t base, bool printed>
struct Convert
{ 
    static constexpr char ch = (value % base) < 10 ? '0' : 'a' - 10;          // digit
    enum { CP
    
};

#endif
