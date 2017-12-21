#ifndef DERIVED_HEAD_INCLUDE
#define DERIVED_HEAD_INCLUDE

#include <initializer_list>
#include <vector>
#include <string>
#include <iostream>
class Derived : public std::vector<std::string>
{
    public:
        Derived(std::initializer_list<std::string> inilist); // new constructors
};

#endif

inline Derived::Derived(std::initializer_list<std::string> iniList)
    :
        std::vector<std::string>(iniList)
{
}
