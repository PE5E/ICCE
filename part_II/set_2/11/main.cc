#include "dem/dem.h"
#include "main.ih"

void pl()
{
    std::cerr << "-------------------------------------------------------------------------------" << '\n';
}

int main()
{
    pl();
    std::cerr << "Example 1: return object" << '\n';
    pl();
    try
    {
        Dem lol;
        throw lol;
    }
    catch(Dem lol)
    {
        std::cerr << "Catching!" << '\n';
    }
    pl();
    
    std::cerr << "Example 2: return object reference" << '\n';
    pl();
    try
    {
        Dem lol;
        throw lol;
    }
    catch(Dem &lol)
    {
        std::cerr << "Catching!" << '\n';
    }
    pl();
}

