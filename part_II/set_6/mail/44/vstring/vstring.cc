#include "vstring.ih"

Vstring::Vstring(std::istream &in)
{
    std::copy(std::istream_iterator<std::string>(in),
              std::istream_iterator<std::string>(),
              std::back_inserter(*this));
}
