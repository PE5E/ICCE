#include "head.ih"

// long options and short options
struct option longOpts[] = 
{
    {"capitalize",  0,    0, 'c'},
    {"lowercase",   0,    0, 'l'},
    {"version",     0,    0, 'v'},
    {"help",        0,    0, 'h'},
    { 0 }
};

vars_t arguments(int argc, char* argv[])
{
    vars_t Vars = {false, false, false, false};
    int opt;
    while ((opt = getopt_long(argc, argv, "hvcl", longOpts, &opt)) != -1)
        switch (opt)
        {
            case 'h':                   // help
            {
                Vars.help = true;
                std::cout << "HELP TRUE" << '\n';
                break;
            }
            case 'v':                   // version
            {
                Vars.version = true;
                std::cout << "VERSION TRUE" << '\n';
                break;
            }
            case 'c':                   // capitalize
            {
                Vars.capitalize = true;
                std::cout << "CAPITALIZE TRUE" << '\n';
                break;
            }
            case 'l':                   // lower-case
            {
                Vars.lowercase = true;
                std::cout << "LOWERCASE TRUE" << '\n';
                break;
            }
            default:
            {
                Vars.help = true;
                std::cout << "DEFAULT HELP TRUE" << '\n';
                break;
            }
        }
    return Vars;
}
