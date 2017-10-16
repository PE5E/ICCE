#ifndef DEFINE_STRINGS_H
#define DEFINE_STRINGS_H

#include <istream>                                                  // std::istream

class Strings
{
    size_t d_size = 0;                                                  // number of strings
    char *d_str = 0;                                                    // pointer to array of strings
    public:
        Strings();
        Strings(int const argc, char const *argv[] const);         // C string is char array
        Strings(const char *env[] const);                  
        Strings(std::istream &in const);
    private:
        void add();
}

#endif

// class Strings that can either be initialized with an argc, argv 
// pair of arguments, with an environ type of argument,
// or with an input stream.
