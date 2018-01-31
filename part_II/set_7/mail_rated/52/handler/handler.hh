#include <iosfwd>
#include <string>

class Handler
{
    public:
        void shift(std::ostream &out, std::string const &text);
};
