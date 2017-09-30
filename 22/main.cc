#include "header.ih"
// cmdline  -e cin, cout as url-encoded
//          -d cin as url-encoded, write as url-decoded
// url-encoded  - _ . and ~ 
//          
// usage function
// 
// option handling: as in 20 OR simply test for -e -d or empty

int main(int argc, char* argv[])
{
    std::string arg = (argc == 2 ? argv[1] : "");    // read if possible
    
    switch (getOpt(arg))
    {
        case EOption::ENCODE:
            encode(std::cin, std::cout);
            break;
        case EOption::DECODE:
            decode(std::cin, std::cout);
            break;
        default:
            usage(argv[0]);
            int FAIL = 1;
            return FAIL;
    }
}
