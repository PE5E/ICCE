#include "maxfour.ih"

MaxFour::MaxFour()
{
    try
    {
        std::cerr << "\tTring constructor!" << '\n';
        if (s_count == 4)
            throw std::string("max number of objects reached");
        ++s_count;
        std::cerr << "\tCreating object " << s_count << '\n';
    }
    catch(std::string &problem)
    {
        std::cerr << "\tTHROWN: Catching constructor!" << '\n';
        // this object has no data - nothing has happened - nothing to delete
        std::cerr << "\t" << problem << '\n';
        throw;                             
    }
    
}
// constructor
