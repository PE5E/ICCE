#include "head.ih"

// long options and short options
struct option longOpts[] = 
{
    {"capitalize",  0,    0, 'c'},
    {"uc",          0,    0, 'c'},
    {"lowercase",   0,    0, 'l'},
    {"lc",          0,    0, 'l'},
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
                break;
            }
            case 'v':                   // version
            {
                Vars.version = true;
                break;
            }
            case 'c':                   // capitalize
            {
                Vars.capitalize = true;
                break;
            }
            case 'l':                   // lower-case
            {
                Vars.lowercase = true;
                break;
            }
            default:
            {
                Vars.help = true;
                break;
            }
        }
    return Vars;
}
