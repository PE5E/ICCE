#include "header.ih"
// instructions for users

char const use[]=
    R"(
        <program's base name> V <version number>

        Usage: <program's base name> [options] < file
        Where:
            --captitalize (--uc, -u);   captitalize the letters in 'file'
            <... other options, alphabetically ordered>

        <program's base name processes 'file' and writes the results to the standard
        output stream.
        )";
    
void usage(std::string const &programName)
{
    std::cout << use << '\n';
}
