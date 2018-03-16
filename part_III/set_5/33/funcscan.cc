#include "main.ih"

void funcScan(Scanner &scanner)
{

    while (int token = scanner.lex())   // get all tokens
    {
        string const &text = scanner.matched();
        switch (token)
        {
            case Tokens::IDENTIFIER:
                cout /*<< "identifier: "*/ << text;
            break;

            case Tokens::NUMBER:
                cout /*<< "number: "*/ << text;
            break;

            default:
                cout /*<< "char. token: `"*/ << text;
            break;
        }
    }

    
}
