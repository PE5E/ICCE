#include "vstring.ih"

size_t Vstring::countChar(std::string const &str,
                        CharMap &cmap,
                        bool (*accept)(char, CharMap &))
{
    return std::accumulate(
        str.begin(),
        str.end(),
        0,
        [&cmap, accept](size_t previous, char current)
        {
           return  previous + accept(current, cmap);
        }    
    );
}
// Implement countChar, using a lambda function and a GA that's
// suited for countChar's task: pass all characters of one string to the
// accept function, adding the total number of accepted characters of that
// string to the over-all total. Note that countChar has return type
// void.
