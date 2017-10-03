// instructions for users
#include "head.ih"

char const use[]=
R"(
20 V 1>

Usage: ./main [options] < file
Where:
    --captitalize   (--uc, -u);     captitalize the letters in 'file'
    --help          (-h);           display this information
    --lowercase     (--lc, -l);     convert letters to lowercase in 'file'
    --version       (-v);           display version information

20 processes 'file' and writes the results
to the standard output stream.
)";
void usage()
{
    std::cout << use << '\n';
}
