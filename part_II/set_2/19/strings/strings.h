#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>
#include <cstring>

class Strings
{
    size_t d_size = 0;          // initial size ( = #strings)
    size_t d_capacity = 1;      // initial capacity (in raw memory)
    std::string *d_str;         // pointer to the string objects.

    public:
        Strings();
        Strings(Strings const &other);
        ~Strings();

        void add(std::string const &next);          // add another element

        Strings &operator=(Strings const &rhs);
        void swap(Strings &other);
        
    private:
        std::string *storageArea();                 // to store the next str.
        void destroy();                 
        std::string *enlarged();                    // to d_capacity
        std::string *rawStrings(size_t nStrings);
};
     
#endif

