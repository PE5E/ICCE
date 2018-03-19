#include "main.ih"

void funcScan(Scanner &scanner, set<string> &stringSet)
{
    while (int token = scanner.lex())   // get all tokens
    {
        string const &text = scanner.matched();
        if (token == WORD)
            stringSet.insert(text);
    }
}
