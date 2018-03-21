#include "main.ih"

void funcScan(Scanner &scanner, 
        set<string> &stringSet, 
        string const &fileName)
{
    if (fileName != "no_filename_available")
        scanner.switchIstream(fileName);    // feed scanner with files 

    while (int token = scanner.lex())       // get all tokens
    {
        if (token == WORD)
            stringSet.insert(scanner.matched());
    }
}
