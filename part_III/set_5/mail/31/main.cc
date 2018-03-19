#include "main.ih"

int main(int argc, char *argv[])
try
{
    Scanner scanner;                            // define a Scanner object
    set<string> stringSet;                      // define the set of words

    if (argc > 1)
    {
        for (int idx = 1; idx != argc; ++idx)
        {
            scanner.switchIstream(argv[idx]);   // feed scanner with files 
                                                // in program arguments
            funcScan(scanner, stringSet);
        }
    }
    else
        funcScan(scanner, stringSet);

    for                                         // prints the set of words
    (
        auto from = stringSet.begin();
        from != stringSet.end();
        ++from
    )
        cout << *from << " ";
    cout << '\n';
}

catch (...)
{
    cerr << "Something bad happened\n";
}
