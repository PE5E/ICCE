#include "main.ih"

int main(int argc, char *argv[])
try
{
    Scanner scanner;                            // define a Scanner object
    scanner.lex();
}

catch (...)
{
    cerr << "Something bad happened\n";
}
