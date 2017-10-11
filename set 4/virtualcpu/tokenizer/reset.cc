#include "tokenizer.ih"

void Tokenizer::reset() const
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
