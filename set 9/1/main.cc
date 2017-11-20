#include <iostream>

namespace First 
{
    enum Enum 
    {
    };

    void fun(First::Enum Symbol)
    {
        std::cerr << "FIRST" << '\n';
    }
}

namespace Second
{
    void fun(First::Enum Symbol)
    {
        std::cerr << "SECOND" << '\n';
    } 
}

int main()
{
    First::Enum eninst;
    fun(eninst);
    fun(First::enum Symbol);
}
