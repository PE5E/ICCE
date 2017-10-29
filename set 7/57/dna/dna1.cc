#include "dna.ih"

DNA::DNA(std::ofstream &os, std::ifstream &is)
    :
        d_buffer({0,0,0,0,0,0,0,0}),
        d_mode(WriteMode::WRITEHUMAN),
        d_numBases(0),
        d_os(os),
        d_is(is)
{

}
