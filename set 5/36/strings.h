#ifndef DEFINE_STRINGS_H
#define DEFINE_STRINGS_H

#include <istream>                      // std::istream

class Strings
{
    size_t d_size;                      // number of strings
    char *d_str;                        // hold char
    public:
        Strings(argc, argv);
        Strings(**environ env);
        Strings(std::istream &in);
        add();
    private:
}

#endif

// class Strings that can either be initialized with an argc, argv 
// pair of arguments, with an environ type of argument,
// or with an input stream.
