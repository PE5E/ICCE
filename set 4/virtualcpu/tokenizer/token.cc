#include "tokenizer.ih"

OperandType Tokenizer::token() const
{
    // after detecting operand type, write value to d_value
    // which can be read by int value;
    // use stoi for conversion
    string word << cin;
    if (word[0] == '@') return OperandType::MEMORY;
        d_value = stoi(word.substr(1,
    if (isLetter(word)) return OperandType::REGISTER;
    if (is
    
}
