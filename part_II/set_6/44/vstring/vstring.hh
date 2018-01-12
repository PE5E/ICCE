#ifndef VSTRING_HEADER
#define VSTRING_HEADER

#include <vector>
#include <string>
#include <map>

class Vstring: public std::vector<std::string>
{
    public:
        typedef std::map<char, size_t> CharMap;

        Vstring(std::istream &in);

        size_t count(CharMap &cmap, bool (*accept)(char, CharMap &));

    private:
        static void countChar(std::string const &str,
                                CharMap &cmap,
                                bool (*accept)(char, CharMap &));
};

#endif
