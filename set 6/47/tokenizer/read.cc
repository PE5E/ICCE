#include "tokenizer.ih"

bool Tokenizer::read()
{
    d_read.clear();

    while (isblank(cin.peek()))  // skip leading spaces/tabs
        cin.get();

    if (cin.eof())
        return false;

    while (not isspace(cin.peek())) // eat all non-blanks
        d_read += cin.get();

    return not d_read.empty();
}
