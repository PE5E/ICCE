
#include "Scanner.h"
#include <iostream>

using namespace std;

int main()
{
    Scanner scanner;
    while (int token = scanner.lex())   // get all tokens
    {
        string const &text = scanner.matched();
        switch (token)
        {
            case Scanner::STRING:
                cout << "#String: " << text << "#String ended\n";
            break;
            case Scanner::OTHER:
                cout << "Other: " << text << '\n';
            break;

            default:
                cout << "Something not recognised\n";
            break;
        }
    }
}
