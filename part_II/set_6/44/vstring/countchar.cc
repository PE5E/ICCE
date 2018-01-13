#include "vstring.ih"

size_t Vstring::countChar(std::string const &str,
                        CharMap &cmap,
                        bool (*accept)(char, CharMap &))
{
    size_t total = 0;
    std::for_each(str.begin(),
                    str.end(), 
                    [&] (const char ch)
                    {
                       total += accept(ch, cmap);  // accept increments cmap
                    }
                    );
    return total;
}
// Implement countChar, using a lambda function and a GA that's
// suited for countChar's task: pass all characters of one string to the
// accept function, adding the total number of accepted characters of that
// string to the over-all total. Note that countChar has return type
// void.
