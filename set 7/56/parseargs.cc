#include "optstruct.h"                               // 'Opts'
#include <unistd.h>                                  // getopt
#include <string>

using std::string;
extern int optind;

Opts parseArgs(int argc, char *argv[])
{
     Opts opt;                                       // cmdline default values
        opt.aflag = false;
        opt.path = "/var/log/account/pacct";

        int val;                                     // parse cmdline options
        while((val = getopt(argc, argv, "a")) != -1)
            if (val == 'a')
                opt.aflag = true;

        if (optind != argc)                          // parse path
            opt.path = string(argv[optind]);

        return opt;
}
