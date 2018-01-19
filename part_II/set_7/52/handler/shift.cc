#include "handler.ih"

void Handler::shift(std::ostream &out, std::string const &text)
{
    std::string letters = text; 
    for (size_t shift = 0; shift != text.size(); ++shift)
    {
        out << letters << '\n';
        rotate(
            letters.begin(), 
            letters.begin() + 1, 
            letters.begin() + letters.size()
        );
    }
    return;
}
