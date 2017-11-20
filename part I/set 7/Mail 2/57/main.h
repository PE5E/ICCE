#ifndef __INCLUDED__MAINDNA_H
#define __INCLUDED__MAINDNA_H

#include <string>

struct Opts {
    bool        bflag;          // -b
    std::string infile;         // -i
    std::string outfile;        // -o
};

Opts parseArgs(int argc, char *argv[]);
#endif
