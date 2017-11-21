#include "processaccounter.ih"

bool ProcessAccounter::fileGood() const
{
    if (d_file.good())
        return 1; // JB: magic
    std::cerr << "file failed to open" << '\n';
    return 0; // JB: magic
}

