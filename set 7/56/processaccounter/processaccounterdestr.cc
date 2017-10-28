#include "processaccounter.ih"

ProcessAccounter::~ProcessAccounter()
{
    d_file.close();
    delete d_process;
}
