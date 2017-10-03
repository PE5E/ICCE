// instructions for users
#include "header.ih"

char const use[]=
R"(
23 V 1

Usage: ./bin number
Where:
    number is an integer
    
<20 processes number and writes it to the output stream after 
adding seperators every 3 digits, using two different methods:
direct and indirect.
)";

void usage()
{
    std::cout << use << '\n';
}
