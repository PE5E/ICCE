#include <istream>              // std::istream
#include "strings.h"

class Filter
{
    Strings d_String;
    public:
        Filter();
        Filter(std::istream &is);
        void display();
    private: 
        void removeWhitespace();
};
