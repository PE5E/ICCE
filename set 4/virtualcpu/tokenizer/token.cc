#include "tokenizer.ih"

OperandType Tokenizer::token()
{
    string word << cin;
    if (word[0] == '@') return OperandType::MEMORY;
    if (isLetter(word)) return OperandType::REGISTER;
    if (is
    
}
