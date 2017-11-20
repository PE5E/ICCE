#ifndef __INCLUDED_MAIN_H
#define __INCLUDED_MAIN_H

#include <string>

struct Opts {
    bool aflag;                 // -a print all processes with exit status
    std::string path;                // path of process file
};

Opts parseArgs(int argc, char *argv[]);

#endif 
