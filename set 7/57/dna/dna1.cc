#include "dna.ih"

DNA::DNA(std::ofstream &os, std::ifstream &is)
    :
        d_mode(WriteMode::WRITEHUMAN),
        d_os(os),
        d_is(is)
{

}
