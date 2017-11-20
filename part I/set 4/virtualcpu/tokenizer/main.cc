#include "tokenizer.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Tokenizer Token;
    Token.opcode();
    cout << "============" << '\n';
    Token.reset();
    Token.opcode();
    Token.token();
    cout << Token.value() << '\n';
    Token.token();
    cout << Token.value() << '\n';
    cout << "@@@@@@@@@@@@@" << '\n'; 
    Token.token();
    cout << "=+++++++" << '\n';
    cout << Token.value() << '\n';
};
