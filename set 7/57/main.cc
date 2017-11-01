#include "dna/dna.h"
#include "fstream"
#include <iostream>

void fun()
{
    std::ifstream infile("IN.txt");
    std::ofstream outfile("OUT.txt");
    
    DNA object(outfile, infile);
    object.readHuman();
}

void lol()
{
    std::ifstream infile2("OUT.txt");
    std::ofstream outfile2("inback.txt");

    DNA object2(outfile2, infile2);
    object2.readBin();
}

int main()
{
    fun();
    lol();
}
