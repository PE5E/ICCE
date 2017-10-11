#include "tokenizer.ih"

void Tokenizer::reset() const
{
    cin.clear();
    cin.ignore(1000, '\n');
}
