#include "tokenizer.ih"

OperandType Tokenizer::token()
{
    string word;
    cin >> word;
    if (word.empty()) return OperandType::SYNTAX;

    if (word[0] == '@') 
    {
        d_value = stoi(word.erase(0,1));                   
        return OperandType::MEMORY;
    }
    if (word[0] <= 'z' && word[0] >= 'a' && word.size() == 1)  
    {
        d_value = word[0] - '0'; 
        return OperandType::REGISTER;
    }
    if (word.find_first_not_of("0123456789") == string::npos)
    {
        d_value = stoi(word);
        return OperandType::VALUE;
    }
    return OperandType::SYNTAX;
}
