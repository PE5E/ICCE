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

    copy(stringSet.begin(), stringSet.end(),
        ostream_iterator<string>(cout, " "));
    cout << '\n';
}

catch (...)
{
    cerr << "Something bad happened\n";
}
