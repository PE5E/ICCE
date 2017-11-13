#include "dna/dna.h" // JB: This goes in main.ih. But -0.
#include "main.h"
#include "fstream"
#include <iostream>

int main(int argc, char *argv[])
{
    Opts opt = parseArgs(argc, argv);
   
    std::ifstream infile(opt.infile);
    std::ofstream outfile(opt.outfile);

    DNA object(outfile, infile);

    // JB: NAE. The flag should determine what to write. The file's format, determines what to read.
    opt.bflag ? object.readHuman() : object.readBin();
}

// JB: Nicely short :-)

// usage:
// ./main -b infile outfile (text to binary)
//./main infile outfile (binary to text)
