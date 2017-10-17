#ifndef DEFINE_STRINGS_H
#define DEFINE_STRINGS_H

#include "../struct.h"                                          // 'Rel' output struct
#include <string>                                            // std::string, size_t
#include <istream>                                           // std::istream

class Strings
{
    size_t d_size = 0;                                       // number of strings
    std::string *d_str = 0;                                  // pointer to array of strings

    public:
        Strings();                                           // should this return nullptr:?
        Strings(int const argc, char *argv[]);
        Strings(char *env[]);
        Strings(std::istream &in);

        size_t size()                 const ;
        std::string *data()           const ;

        std::string const& at(size_t index) const ;          // non-modifiable string
        std::string& at(size_t index);                       // modifiable string

        Rel release();                                       // return data and size; clean up

        void add(std::string str);

    private:
        std::string& priv_at(size_t index);                  // backdoor

};

inline size_t Strings::size()       const { return d_size; }
inline std::string *Strings::data() const { return d_str; }

#endif

// class Strings that can either be initialized with an argc, argv
// pair of arguments, with an environ type of argument,
// or with an input stream.
