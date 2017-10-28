#include "processaccounter.ih"

void ProcessAccounter::resetStream()
{
    d_file.clear();
    d_file.seekg(0, std::ios::beg);
}
