#include "main.ih"

void funcScan(Scanner &scanner)
{
    while (int token = scanner.lex())   // get all tokens
    {
        cout << token;
        string const &text = scanner.matched();
        cout << text;
    }
}
