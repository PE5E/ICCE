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
        std::cerr << "Trying" << '\n';
        Dem lol;
        std::cerr << "Throwing" << '\n';
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
        std::cerr << "Trying" << '\n';
        Dem lol2;
        std::cerr << "Throwing" << '\n';
        throw lol2;
    }
    catch(Dem &lol)
    {
        std::cerr << "Catching!" << '\n';
    }
    pl();

    std::cerr << "Example 3: rethrow by reference" << '\n';
    pl();
    try
    {
        std::cerr << "Trying (outer)" << '\n';
        try
        {
            std::cerr << "Trying (inner)" << '\n';
            Dem lol3;
            std::cerr << "Throwing" << '\n';
            throw lol3;
        }
        catch(Dem &lol)
        {
            std::cerr << "Catching!" << '\n';
            std::cerr << "Re-throwing!" << '\n';
            throw;
        }
    }
    catch(Dem &lol)
    {
        std::cerr << "Re-catching!" << '\n';
    }
    pl();

    std::cerr << "Example 4: rethrow object" << '\n';
    pl();
    try
    {
        std::cerr << "Trying (outer)" << '\n';
        try
        {
            std::cerr << "Trying (inner)" << '\n';
            Dem lol4;
            throw lol4;
        }
        catch(Dem lol)
        {
            std::cerr << "Catching!" << '\n';
            throw;
        }
    }
    catch(Dem lol)
    {
        std::cerr << "Re-catching!" << '\n';
    }
    pl();
}

