#include "handler.ih"

void Handler::shift(std::ostream &out, string const &text)
{
    std::valarray<char> vala(text, text.size());
    for (size_t shift = 0; shift != text.size(); ++shift)
        std::cout << vala.cshift(shift) << '\n';
}
