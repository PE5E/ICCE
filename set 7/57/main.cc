#include "dna/dna.h"
#include "fstream"
#include <iostream>

int main()
{
    std::ifstream infile("IN.txt");
    std::ofstream outfile("OUT.txt");
    
    DNA object(outfile, infile);
    object.printByte();
    std::cerr << __FILE__ << __LINE__ << '\n';
}


