#include "processaccounter/processaccounter.ih"
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h>             // getopt
using std::string;

struct Opts {
    bool aflag;                 // -a print all processes with exit status
    string path;                // path of process file
};

extern int optind;

int main(int argc, char *argv[])
{
    Opts opt;                                       // cmdline default values
    opt.aflag = false;
    opt.path = "/var/log/account/pacct";

    int val;                                        // parse cmdline options
    while((val = getopt(argc, argv, "a")) != -1)
        if (val == 'a')
            opt.aflag = true;

    if (optind != argc)                             // parse path
        opt.path = string(argv[optind]);

    std::ifstream file(opt.path, std::ios::binary); // open file stream

    if (!file.good())                               // make sure file exists
    {                                               // and opened correct
        std::cerr << "file \'" << opt.path << "\' " 
                  << "failed to open" << '\n';
        return 1;
    }

    ProcessAccounter object(file);

    if (opt.aflag)
        object.allProcesses();
    else
        object.badProcesses();
}
