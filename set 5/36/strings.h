#ifndef DEFINE_STRINGS_H
#define DEFINE_STRINGS_H

#include <istream>                                   // std::istream

class Strings
{
    size_t d_size = 0;                               // number of strings
    std::string *d_str = 0;                          // pointer to array of strings

    public:
        Strings();                                   // should this return nullptr:?
        Strings(int const argc, char *argv[]); // C string is char array
        Strings(const char *env[]);
        Strings(std::istream &in);

    private:
        void add(std::string str);
};

#endif

// class Strings that can either be initialized with an argc, argv 
// pair of arguments, with an environ type of argument,
// or with an input stream.
