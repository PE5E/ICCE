#include "tokenizer.ih"

OperandType Tokenizer::token()
{
    string word;
    cin >> word;

    if (word[0] == '@') 
    {
        d_value = stoi(word.erase(0,1));                   
        cout << d_value << '\n';
        cout << "Memory" << '\n';
        return OperandType::MEMORY;
    }
    if (word[0] <= 'z' && word[0] >= 'a' && word.size() == 1)  
    {
        d_value = word[0] - '0'; 
        cout << d_value << '\n';
        cout << "Register" << '\n';
        return OperandType::REGISTER;
    }
    if (word.find_first_not_of("0123456789") == string::npos) 
    {
        d_value = stoi(word);
        cout << d_value << '\n';
        cout << "Value" << '\n';
        return OperandType::VALUE;
    }
    return OperandType::SYNTAX;
}
