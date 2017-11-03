#include "main.h"
#include <unistd.h>                                  // getopt
#include <iostream>

using std::string;
extern int optind;

Opts parseArgs(int argc, char *argv[])
{
    Opts opt;                                       // cmdline default values
    opt.bflag = false;

    int val;                                        // parse cmdline options
    while ((val = getopt(argc, argv, "bio")) != -1)
        if (val == 'b')
           opt.bflag = true;

    if (optind != argc)
    {
        opt.infile = string(argv[optind]);
        opt.outfile = string(argv[optind + 1]);
    }

    return opt;
}
