#ifndef INCLUDED_EXCEPTION_
#define INCLUDED_EXCEPTION_

#include <string>
#include <exception>

class Exception: public std::exception
{
    template <typename T>
    friend Exception &&operator<<(Exception &&tmp, T const &value);
    
    std::string d_what;

    public:
        Exception() = default;
        char const *what() const noexcept(true) override;   
};

#include "insertion.ff"
        
#endif
