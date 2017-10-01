#include "head.ih"

int main(int argc, char* argv[])
{
    if (isatty(0)) 
    {
        std::cout << "no file redirection" << '\n'; 
        return 1;
    }
    
    std::cout << "PROCESSING" << '\n';
    process(arguments(argc,argv));
}

// -h and --help: provide short usage information and quit, returning 0 to the operating system. The usage info should also be shown if no file redirection was used (see below);
// -v and --version: show the program's version and quit, returning 0 to the operating system;
// -c, --uc, and --captitalize: all letters in the input file should be capitalized;
// -l, --lc, and --lower-case: all letters in the input file should be transformed to lower-case characters; 
// program expects a file, redirected to stdin; i.e. just cin
