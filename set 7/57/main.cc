#include "dna/dna.h"
#include "main.h"
#include "fstream"
#include <iostream>

int main(int argc, char *argv[])
{
    Opts opt = parseArgs(argc, argv);
   
    std::ifstream infile(opt.infile);
    std::ofstream outfile(opt.outfile);

    DNA object(outfile, infile);

    opt.bflag ? object.readHuman() : object.readBin();
}
