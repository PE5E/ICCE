#include "dna/dna.h"
#include "fstream"

int main()
{
    std::ifstream infile("DNA.txt");
    std::ofstream outfile("OUT.txt");
    
    DNA object(outfile, infile);
}


