#include "processaccounter/processaccounter.h"
#include "optstruct.h"          // 'Opts'
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h>             // getopt

using std::string;

extern int optind;

int main(int argc, char *argv[])
{
    Opts opt = parseArgs(argc, argv);                 // cmdline default values
   
    std::ifstream file(opt.path, std::ios::binary); // open file stream

    // todo : make this a ProcessAccounter method
    if (!file.good())                               // make sure file exists
    {                                               // and opened correct
        std::cerr << "file \'" << opt.path << "\' " 
                  << "failed to open" << '\n';
        return 1;
    }

    ProcessAccounter object(file);

    // todo: tert statement can do this :)
    if (opt.aflag)
        object.allProcesses();
    else
        object.badProcesses();
}
