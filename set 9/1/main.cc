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

void fun(First::Enum symbol);

int main()
{
    First::Enum eninst;
    fun(eninst);
}
